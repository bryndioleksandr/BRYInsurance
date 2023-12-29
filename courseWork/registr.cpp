#include "registr.h"
#include "ui_registr.h"
#include "manageinsurances.h"


Registr::Registr(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Registr)
{
    ui->setupUi(this);
    setWindowTitle("Sign Up");

    ui->passwordLn->setEchoMode(QLineEdit::Password);
    foreach (QPushButton *button, findChildren<QPushButton *>()) {
        button->setCursor(Qt::PointingHandCursor);
    }
}

Registr::~Registr()
{
    delete ui;
}


bool Registr::checkFields(){
    bool check = false;
    if(ui->usernameLn->text().isEmpty() || ui->passwordLn->text().isEmpty()){
        throw std::runtime_error("Error in inputing data about User:( some fields are empty");
        check = false;
    }
    else check = true;
    return check;
}



void Registr::on_confirmPb_clicked()
{
    MySqlDBManager* db= MySqlDBManager::getInstance();
    username = ui->usernameLn->text();
    password = ui->passwordLn->text();
    question = ui->questionLn->text();
    answear = ui->answearLn->text();
    surname = ui->surnameLn->text();
    name = ui->nameLn->text();
    phoneNum = ui->phonenumLn->text();

    QByteArray bytesi = QCryptographicHash::hash(password.toUtf8(), QCryptographicHash::Sha256);
    QString oute = QString(bytesi.toHex());

    QByteArray bytesAns = QCryptographicHash::hash(answear.toUtf8(), QCryptographicHash::Sha256);
    QString outAns = QString(bytesAns.toHex());

    try {
        if (checkFields()) {
            User user;
            user.setUsername(username.toStdString());
            user.setPassword(oute.toStdString());
            user.setQuestion(question.toStdString());
            user.setAnswear(answear.toStdString());
            user.setSurname(surname.toStdString());
            user.setName(name.toStdString());
            user.setPhoneNumber(phoneNum.toStdString());
            try{
                QString queryStr = QString("SELECT COUNT(*) FROM Users WHERE username = '%1'")
                                            .arg(username.toStdString().c_str());
                QSqlQuery query;
                query.prepare(queryStr);

                if(query.exec() && query.next()){
                    int userCount = query.value(0).toInt();

                    if (userCount > 0) {
                        QMessageBox::warning(this, "Unavailable username","User with this username already exists");
                    }
                else{
                if (db->insertIntoTableUser(user)) {
                    QMessageBox::StandardButton reply;
                    reply = QMessageBox::information(this, "Created successful!", "Now user is created and data is saved in the database! Close this window to move next.", QMessageBox::Yes | QMessageBox::No);
                    if (reply == QMessageBox::Yes) {
                        this->close();
                    }
                }
                }
                }
            }catch(const std::exception &e){
                QMessageBox::warning(this, "Error due to database operation :(", "Data couldn't be saved in the database!");
                qCritical() << "Exception in: " << e.what();
            }
        }
    }catch(const std::exception &ex){
        QMessageBox::warning(this, "Error due to input data :(", "Some fields are empty, please fill them all!!!");
        qWarning() << "Exception in inputing data: " << ex.what();
    }
}


void Registr::on_showPasswordCb_stateChanged(int arg1)
{
    if (arg1 == Qt::Checked) {
        ui->passwordLn->setEchoMode(QLineEdit::Normal);
    } else {
        ui->passwordLn->setEchoMode(QLineEdit::Password);
    }
}

void Registr::closeEvent(QCloseEvent *event)
{
    QDialog::closeEvent(event);
    emit closed();
}




