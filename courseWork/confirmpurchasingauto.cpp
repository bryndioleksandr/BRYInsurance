#include "confirmpurchasingauto.h"
#include "ui_confirmpurchasingauto.h"


ConfirmPurchasingAuto::ConfirmPurchasingAuto(QString& insuranceType, QString& technicalPassport, int& coverageAmount, int& price, QString& autoType, QString& autoCubicCapacity, QString& carryingCapacity, QString& motoCubicCapacity, QString& numOfPassengers, QString& trailerFor, int& currentUserId, int& randomPolicy, QWidget *parent) :
    QDialog(parent),
    insuranceType(insuranceType),
    technicalPassport(technicalPassport),
    coverageAmount(coverageAmount),
    price(price),
    autoType(autoType),
    autoCubicCapacity(autoCubicCapacity),
    carryingCapacity(carryingCapacity),
    motoCubicCapacity(motoCubicCapacity),
    numOfPassengers(numOfPassengers),
    trailerFor(trailerFor),
    currentUserId(currentUserId),
    randomPolicy(randomPolicy),
    ui(new Ui::ConfirmPurchasingAuto)
{
    ui->setupUi(this);
    foreach (QPushButton *button, findChildren<QPushButton *>()) {
        button->setCursor(Qt::PointingHandCursor);
    }
}

ConfirmPurchasingAuto::~ConfirmPurchasingAuto()
{
    delete ui;
}

void ConfirmPurchasingAuto::on_confirmPurchasingPb_clicked()
{

    User user;
    QSqlQuery query;
    MySqlDBManager* db= MySqlDBManager::getInstance();
    query.prepare("SELECT name, surname, phoneNumber, username FROM Users WHERE user_id = "+QString::number(currentUserId)+";");

    AutoInsurance insurance;
    autoNumber = ui->autoNumberLn->text();
    autoPrice = ui->autoPriceLn->text();
    autoBrand = ui->autoBrandLn->text();
    autoYear = ui->autoYearLn->text();
    autoModel = ui->autoModelLn->text();
    if(((db->select("balance", currentUserId)).toInt() - price) < 0){
        QMessageBox::StandardButton reply;
        reply = QMessageBox::warning(this, "Replenish the balance!", "You dont have enough money to buy this insurance! \n\tWant to replenish the balance?", QMessageBox::Yes | QMessageBox::No);
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
    insurance.setCarNumber(autoNumber.toStdString());
    insurance.setCarPrice(autoPrice.toInt());
    insurance.setCarBrand(autoBrand.toStdString());
    insurance.setCarModel(autoModel.toStdString());
    insurance.setCarYear(autoYear.toInt());
    insurance.setInsuranceType(insuranceType.toStdString());
    insurance.setCoverageAmount(coverageAmount);
    insurance.setPrice(price);
    insurance.setTechnicalPassport(technicalPassport.toStdString());
    insurance.setAutoType(autoType.toStdString());
    insurance.setCarCubicCapacity(autoCubicCapacity.toStdString());
    insurance.setCarryingCapacity(carryingCapacity.toStdString());
    insurance.setMotoCubicCapacity(motoCubicCapacity.toStdString());
    insurance.setNumOfPassengers(numOfPassengers.toStdString());
    insurance.setTrailerFor(trailerFor.toStdString());
    insurance.setUserId(currentUserId);
    insurance.setInsurancePolicy(randomPolicy);
    time_t currentTime;
    insurance.setWarrantyStartDate(time(&currentTime) + 7200);
    insurance.setWarrantyEndDate(time(&currentTime) + 31557600 + 7200);
    try{
        SaveReceiptPDF save;
                if (db->insertIntoTableAuto(insurance)) {
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

void ConfirmPurchasingAuto::closeEvent(QCloseEvent *event)
{
    QDialog::closeEvent(event);
    emit closed();
}





