#include "confirmpurchasingtravel.h"
#include "ui_confirmpurchasingtravel.h"


ConfirmPurchasingTravel::ConfirmPurchasingTravel(int currentUserId, QString travelDirection, QString travelPurpose, QString coverageAmount, int randomPolicy, int price, QDate startDate, QDate endDate, QWidget *parent) :
    QDialog(parent),
    currentUserId(currentUserId),
    travelDirection(travelDirection),
    travelPurpose(travelPurpose),
    coverageAmount(coverageAmount),
    randomPolicy(randomPolicy),
    price(price),
    startDate(startDate),
    endDate(endDate),
    ui(new Ui::ConfirmPurchasingTravel)
{
    ui->setupUi(this);
    foreach (QPushButton *button, findChildren<QPushButton *>()) {
        button->setCursor(Qt::PointingHandCursor);
    }
}

ConfirmPurchasingTravel::~ConfirmPurchasingTravel()
{
    delete ui;
}

void ConfirmPurchasingTravel::on_confirmPb_clicked()
{
    MySqlDBManager* db= MySqlDBManager::getInstance();

    birthDate = ui->birthDateDe->text();
    passport = ui->passportLn->text();
    email = ui->emailLn->text();
    city = ui->cityLn->text();
    User user;
    QSqlQuery query;
    query.prepare("SELECT name, surname, phoneNumber, username FROM Users WHERE user_id = "+QString::number(currentUserId)+";");

    if(((db->select("balance", currentUserId)).toInt() - price) < 0){
        QMessageBox::StandardButton reply;
        reply = QMessageBox::information(this, "Replenish the balance!", "You dont have enough money to buy this insurance! \n\tWant to replenish the balance?", QMessageBox::Yes | QMessageBox::No);
        if (reply == QMessageBox::Yes) {

            this->hide();
            MyAccount *openNext = new MyAccount(currentUserId);
            connect(openNext, &MyAccount::closed, this, &ConfirmPurchasingTravel::onDialogClosed);
            openNext->setModal(true);
            openNext->exec();

//            MyAccount openNext(currentUserId);
//            openNext.setModal(true);
//            openNext.exec();
        }
    }
    else{
    newBalance = (db->select("balance", currentUserId)).toInt() - price;
    db->updateBalance(newBalance, currentUserId);
    if (query.exec() && query.next()) {
        user.setName(query.value("name").toString().toStdString());
        user.setSurname(query.value("surname").toString().toStdString());
        user.setPhoneNumber(query.value("phoneNumber").toString().toStdString());
        user.setUsername(query.value("username").toString().toStdString());
    }
    user.setBirthDate(birthDate.toStdString());
    user.setPassport(passport.toStdString());
    user.setEmail(email.toStdString());
    user.setCity(city.toStdString());
    TravelInsurance insurance;
    insurance.setUserId(currentUserId);
    insurance.setInsuranceType(travelDirection.toStdString());
    insurance.setTravelPurpose(travelPurpose.toStdString());
    insurance.setCoverageAmount(coverageAmount.toStdString());
    insurance.setInsurancePolicy(randomPolicy);
    insurance.setPrice(price);
    insurance.setWarrantyStartDate(startDate.toString().toStdString());
    insurance.setWarrantyEndDate(endDate.toString().toStdString());
        try{
            SaveReceiptPDF save;
            if (db->insertIntoTableTravel(insurance, user)) {
                QMessageBox::StandardButton reply;
                reply = QMessageBox::information(this, "Created successful!", "Now object is created and data is saved in the database! \n\tDownload insurance check?.", QMessageBox::Yes);
                if (reply == QMessageBox::Yes) {
                    save.generateReceipt(insurance, user);
                    this->close();
                    accept();
                }
            }
        }catch(const std::exception &e){
            QMessageBox::warning(this, "Error due to database operation :(", "Data couldn't be saved in the database!");
            qCritical() << "Exception in: " << e.what();
        }
    }
}

void ConfirmPurchasingTravel::closeEvent(QCloseEvent *event)
{
    QDialog::closeEvent(event);
    emit closed();
}

void ConfirmPurchasingTravel::onDialogClosed()
{
    show();
}



