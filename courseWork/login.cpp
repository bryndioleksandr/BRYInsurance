#include "login.h"
#include "ui_login.h"


Login::Login(DBManager* dbManager, QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Login)
{
    ui->setupUi(this);
    qDebug() << QSqlDatabase::drivers();
    setStyleSheet("QDialog { font-family: 'Franklin Gothic Heavy'; font-size: 18pt; }");

    setWindowTitle("Sign In");
    try{
        dbManager->connectToDataBase();
    }catch(const std::exception &ex){
        qCritical()<<"Here is exception: "<<ex.what();
    }

    QSqlQuery query;

    QByteArray bytesUsername = QCryptographicHash::hash(QByteArray(ADMIN_USERNAME), QCryptographicHash::Sha256);
    hashedUsername = QString(bytesUsername.toHex());

    QByteArray bytesPassword = QCryptographicHash::hash(QByteArray(ADMIN_PASSWORD), QCryptographicHash::Sha256);
    hashedPassword = QString(bytesPassword.toHex());

    qInfo()<<hashedUsername;

    query.prepare("SELECT * FROM Administrator WHERE admin_username = :admin_username");
    query.bindValue(":admin_username", hashedUsername);
    try{
    if (query.exec() && !query.next()) {
            qInfo()<<"Insert needed";
        // Рядок не знайдено, викликаємо функцію вставки
        if(dbManager->insertAdmin()){

        }
        else{        qCritical() << "Error in SQL query: " << query.lastError().text();
}
    }
    }catch(const std::exception &e){qCritical()<<"Exception in: "<<e.what();}

    ui->passwordLn->setEchoMode(QLineEdit::Password);

    ui->forgotPb->setCursor(Qt::PointingHandCursor);
    ui->loginPb->setCursor(Qt::PointingHandCursor);
    ui->signUpPb->setCursor(Qt::PointingHandCursor);
    ui->checkBoxPassword->setCursor(Qt::PointingHandCursor);

}

Login::~Login()
{
    delete ui;
}

bool Login::checkFields(){
    bool check = false;
    if(ui->usernameLn->text().isEmpty() || ui->passwordLn->text().isEmpty()){
        check = false;
    }
    else check = true;
    return check;
}


void Login::on_loginPb_clicked()
{
    username = ui->usernameLn->text();
    password = ui->passwordLn->text();

    QByteArray bytesi = QCryptographicHash::hash(password.toUtf8(), QCryptographicHash::Sha256);
    QString hashedPassword = QString(bytesi.toHex());

    if (checkFields()) {
        QSqlQuery query;

        query.prepare("SELECT username, password FROM Users WHERE username = :username AND password = :password");
        query.bindValue(":username", username);
        query.bindValue(":password", hashedPassword);
        query.exec();

        QSqlQuery adminQuery;
        adminQuery.prepare("SELECT admin_username, admin_password FROM Administrator WHERE admin_username = :admin_username AND admin_password = :admin_password");
        adminQuery.bindValue(":admin_username", hashedUsername);
        adminQuery.bindValue(":admin_password", hashedPassword);
        adminQuery.exec();

        if (query.next()) {
int currentUserId;
QSqlQuery id;
id.prepare("SELECT user_id FROM Users WHERE username = :username AND password = :password");
id.bindValue(":username", username);
id.bindValue(":password", hashedPassword);
id.exec();
if (id.next()) {
    currentUserId = id.value(0).toInt();

//    InsuranceCompany *openNext = new InsuranceCompany(currentUserId);
//    //connect(openNext, &InsuranceCompany::closed, this, &Login::onDialogClosed);
//    openNext->setModal(true);
//    openNext->exec();
//    hide();

    this->hide();
    InsuranceCompany *openNext = new InsuranceCompany(currentUserId);
    connect(openNext, &InsuranceCompany::closed, this, &Login::onDialogClosed);
    openNext->setModal(true);
    openNext->show();


}
        } else if (adminQuery.next()) {
            QMessageBox::information(this, "Admin logged in", "Welcome back as an administrator!");
            this->hide();
            AdminTools *openNext = new AdminTools(this);
            connect(openNext, &AdminTools::closed, this, &Login::onDialogClosed);
            openNext->setModal(true);
            openNext->exec();


        } else {
QMessageBox::warning(this, "Error due to input data :(", "Invalid username or password!");
        }
    } else {
        QMessageBox::warning(this, "Error due to input data :(", "Some fields are empty, please fill them all!!!");
    }
}



void Login::onDialogClosed()
{
    show();
}

//void Login::closeEvent(QCloseEvent *event)
//{
//    QDialog::closeEvent(event);
//    emit closed();
//}


void Login::on_forgotPb_clicked()
{
        ForgotPw forgot(username);
        forgot.setModal(true);
        forgot.exec();
}


void Login::on_checkBoxPassword_stateChanged(int arg1)
{
        if (arg1 == Qt::Checked) {
        ui->passwordLn->setEchoMode(QLineEdit::Normal);
        } else {
        ui->passwordLn->setEchoMode(QLineEdit::Password);
        }
}





void Login::on_signUpPb_clicked()
{

        this->hide();
        Registr *registrWindow = new Registr(this);
        connect(registrWindow, &Registr::closed, this, &Login::onDialogClosed);
        registrWindow->setModal(true);
        registrWindow->exec();
}

