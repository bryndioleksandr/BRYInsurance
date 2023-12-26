#include "confirmpurchasinggadget.h"
#include "ui_confirmpurchasinggadget.h"


ConfirmPurchasingGadget::ConfirmPurchasingGadget(QString insuranceType, int longevityIndex, QString coverageType, int price, int gadgetPrice, int currentUserId, int randomPolicy, QWidget *parent) :
    QDialog(parent),
    insuranceType(insuranceType),
    longevityIndex(longevityIndex),
    coverageType(coverageType),
    price(price),
    gadgetPrice(gadgetPrice),
    currentUserId(currentUserId),
    randomPolicy(randomPolicy),
    ui(new Ui::ConfirmPurchasingGadget)
{
    ui->setupUi(this);
    foreach (QPushButton *button, findChildren<QPushButton *>()) {
        button->setCursor(Qt::PointingHandCursor);
    }
}

ConfirmPurchasingGadget::~ConfirmPurchasingGadget()
{
    delete ui;
}

void ConfirmPurchasingGadget::on_purchasePb_clicked()
{
    MySqlDBManager* db= MySqlDBManager::getInstance();

    phoneNumber = ui->phoneNumberLn->text();
    gadgetBrand = ui->gadgetBrandLn->text();
    gadgetModel = ui->gadgetModelLn->text();

    startWarrantyDate = QDate::currentDate();

    switch(longevityIndex){
    case 0:
        endWarrantyDate = startWarrantyDate.addMonths(6);
        break;
    case 1:
        endWarrantyDate = startWarrantyDate.addMonths(12);
        break;
    case 2:
        endWarrantyDate = startWarrantyDate.addMonths(24);
        break;
    }

    User user;
    QSqlQuery query;
    query.prepare("SELECT name, surname, phoneNumber, username FROM Users WHERE user_id = "+QString::number(currentUserId)+";");


    if(((db->select("balance", currentUserId)).toInt() - price) < 0){
        QMessageBox::StandardButton reply;
        reply = QMessageBox::information(this, "Replenish the balance!", "You dont have enough money to buy this insurance! \n\tWant to replenish the balance?", QMessageBox::Yes | QMessageBox::No);
        if (reply == QMessageBox::Yes) {
            MyAccount openNext(currentUserId);
            openNext.setModal(true);
            openNext.exec();
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
    GadgetInsurance insurance;
    insurance.setUserId(currentUserId);
    insurance.setCoverageType(coverageType.toStdString());
    insurance.setGadgetBrand(gadgetBrand.toStdString());
    insurance.setGadgetModel(gadgetModel.toStdString());
    insurance.setInsurancePolicy(randomPolicy);
    insurance.setInsurancePrice(price);
    insurance.setGadgetPrice(gadgetPrice);
    insurance.setInsuranceType(insuranceType.toStdString());
    insurance.setPhoneInsuranceNumber(phoneNumber.toStdString());
    insurance.setWarrantyStartDate(startWarrantyDate.toString().toStdString());
    insurance.setWarrantyEndDate(endWarrantyDate.toString().toStdString());
    try{
        SaveReceiptPDF save;
        if (db->insertIntoTableGadget(insurance)) {
            QMessageBox::StandardButton reply;
            reply = QMessageBox::information(this, "Created successful!", "Now object is created and data is saved in the database! \n\tDownload insurance check", QMessageBox::Yes);
            if (reply == QMessageBox::Yes) {
                save.generateReceipt(insurance, user);
                this->close();
//                InsuranceCompany *openNext = new InsuranceCompany(currentUserId);
//                openNext->setModal(true);
//                openNext->exec();
                accept();


            }
        }
    }catch(const std::exception &e){
        QMessageBox::warning(this, "Error due to database operation :(", "Data couldn't be saved in the database!");
        qCritical() << "Exception in: " << e.what();
    }
    }
}

void ConfirmPurchasingGadget::closeEvent(QCloseEvent *event)
{
    QDialog::closeEvent(event);
    emit closed();
}





