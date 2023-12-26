#include "purchaseautoinsurance.h"
#include "ui_purchaseautoinsurance.h"


PurchaseAutoInsurance::PurchaseAutoInsurance(int userId, QWidget *parent) :
    QDialog(parent),
    ui(new Ui::PurchaseAutoInsurance),
    currentUserId(userId)
{
    ui->setupUi(this);

    cubicCapacityCb = new QComboBox();
    ui->verticalLayoutSimple->addWidget(cubicCapacityCb);

    cubicCapacityCb->setMinimumHeight(35);
    cubicCapacityCb->setPlaceholderText("Cubic capacity:");
    cubicCapacityCb->addItem("0-1600 cm³");
    cubicCapacityCb->addItem("1601-2000 cm³");
    cubicCapacityCb->addItem("2001-3000 cm³");
    cubicCapacityCb->addItem("3000+ cm³");
    cubicCapacityCb->hide();

    carryingCapacityCb = new QComboBox();
    ui->verticalLayoutSimple->addWidget(carryingCapacityCb);
    carryingCapacityCb->setMinimumHeight(35);
    carryingCapacityCb->setPlaceholderText("Carrying capacity:");
    carryingCapacityCb->addItem("Less than 2 tons");
    carryingCapacityCb->addItem("More than 2 tons");
    carryingCapacityCb->hide();

    motoCubicCapacityCb = new QComboBox();
    ui->verticalLayoutSimple->addWidget(motoCubicCapacityCb);
    motoCubicCapacityCb->setMinimumHeight(35);
    motoCubicCapacityCb->setPlaceholderText("Cubic capacity:");
    motoCubicCapacityCb->addItem("0-300 cm³");
    motoCubicCapacityCb->addItem("301+ cm³");
    motoCubicCapacityCb->hide();

    numOfPassengersCb = new QComboBox();
    ui->verticalLayoutSimple->addWidget(numOfPassengersCb);
    numOfPassengersCb->setMinimumHeight(35);
    numOfPassengersCb->setPlaceholderText("Number of passengers:");
    numOfPassengersCb->addItem("Less than 20");
    numOfPassengersCb->addItem("More than 21");
    numOfPassengersCb->hide();

    trailerForCb = new QComboBox();
    ui->verticalLayoutSimple->addWidget(trailerForCb);
    trailerForCb->setPlaceholderText("Appointment:");
    trailerForCb->setMinimumHeight(35);
    trailerForCb->addItem("For cars");
    trailerForCb->addItem("For trucks");
    trailerForCb->hide();

    foreach (QPushButton *button, findChildren<QPushButton *>()) {
        button->setCursor(Qt::PointingHandCursor);
    }

    connect(ui->autoTypeCb, SIGNAL(activated(QString)), this, SLOT(on_autoTypeCb_textActivated(QString)));
}

PurchaseAutoInsurance::~PurchaseAutoInsurance()
{
    delete ui;
}

bool PurchaseAutoInsurance::checkFields(){
    bool check = false;
    if( ui->technicalPassportLn->text().isEmpty() || ui->autoTypeCb->currentText().isEmpty()){
        QMessageBox::warning(this, "Empty fields", "Error in inputing during purchasing auto insurance:( some fields are empty");
        check = false;
    }
    else check = true;
    return check;
}

void PurchaseAutoInsurance::on_autoTypeCb_textActivated(const QString &autoType)
{
    if(autoType == "Car"){
        carryingCapacityCb->hide();
        trailerForCb->hide();
        numOfPassengersCb->hide();
        motoCubicCapacityCb->hide();
        cubicCapacityCb->show();
    }
    else if(autoType == "Truck"){
        carryingCapacityCb->show();
        trailerForCb->hide();
        numOfPassengersCb->hide();
        motoCubicCapacityCb->hide();
        cubicCapacityCb->hide();
    }
    else if(autoType == "Motorcycle"){
        carryingCapacityCb->hide();
        trailerForCb->hide();
        numOfPassengersCb->hide();
        motoCubicCapacityCb->show();
        cubicCapacityCb->hide();
    }
    else if(autoType == "Bus"){
        carryingCapacityCb->hide();
        trailerForCb->hide();
        numOfPassengersCb->show();
        motoCubicCapacityCb->hide();
        cubicCapacityCb->hide();
    }
    else if(autoType == "Trailer"){
        carryingCapacityCb->hide();
        trailerForCb->show();
        numOfPassengersCb->hide();
        motoCubicCapacityCb->hide();
        cubicCapacityCb->hide();
    }
}

void PurchaseAutoInsurance::on_purchasePb_clicked()
{
    technicalPassport = ui->technicalPassportLn->text();

    insuranceType = ui->insuranceTypeCb->currentText();
    insuranceTypeIndex = ui->insuranceTypeCb->currentIndex();

    autoType = ui->autoTypeCb->currentText();
    autoTypeIndex = ui->autoTypeCb->currentIndex();

    autoCubicCapacity = cubicCapacityCb->currentText();
    autoCubicCapacityIndex = cubicCapacityCb->currentIndex();

    carryingCapacity = carryingCapacityCb->currentText();
    carryingCapacityIndex = carryingCapacityCb->currentIndex();

    motoCubicCapacity = motoCubicCapacityCb->currentText();
    motoCubicCapacityIndex = motoCubicCapacityCb->currentIndex();

    numOfPassengers = numOfPassengersCb->currentText();
    numOfPassengersIndex = numOfPassengersCb->currentIndex();

    trailerFor = trailerForCb->currentText();
    trailerForIndex = trailerForCb->currentIndex();
    try {
        if (checkFields()) {
            srand(time(NULL));
            int randomPolicy = 0;
            for (int i = 0; i < 10; ++i) {
                randomPolicy = (randomPolicy * 10) + (rand() % 10);
            }
            if (randomPolicy < 0) randomPolicy *= -1;

            if (insuranceTypeIndex == 0) coverageAmount = 320000;
            else if (insuranceTypeIndex == 1) coverageAmount = 1000000;

            if (autoTypeIndex == 0 && insuranceTypeIndex == 0) {
                switch(autoCubicCapacityIndex){
                case 0: price = 1955; break;
                case 1: price = 2477; break;
                case 2: price = 3575; break;
                case 3: price = 4620; break;
                }
            }
            if (autoTypeIndex == 0 && insuranceTypeIndex == 1) {
                switch(autoCubicCapacityIndex){
                case 0: price = 1955 * 2; break;
                case 1: price = 2477 * 2; break;
                case 2: price = 3575 * 2; break;
                case 3: price = 4620 * 2; break;
                }
            }

            if (autoTypeIndex == 1 && insuranceTypeIndex == 0) {
                switch(carryingCapacityIndex){
                case 0: price = 6100; break;
                case 1: price = 7550; break;
                }
            }
            if (autoTypeIndex == 1 && insuranceTypeIndex == 1) {
                switch(carryingCapacityIndex){
                case 0: price = 8300; break;
                case 1: price = 11580; break;
                }
            }

            if(autoTypeIndex == 2 && insuranceTypeIndex == 0){
                switch(motoCubicCapacityIndex){
                case 0: price = 795; break;
                case 1: price = 1425; break;
                }
            }
            if(autoTypeIndex == 2 && insuranceTypeIndex == 1){
                switch(motoCubicCapacityIndex){
                case 0: price = 1587; break;
                case 1: price = 2680; break;
                }
            }

            if(autoTypeIndex == 3 && insuranceTypeIndex == 0){
                switch(numOfPassengersIndex){
                case 0: price = 3861; break;
                case 1: price = 5260; break;
                }
            }
            if(autoTypeIndex == 3 && insuranceTypeIndex == 1){
                switch(numOfPassengersIndex){
                case 0: price = 4540; break;
                case 1: price = 6800; break;
                }
            }

            if(autoTypeIndex == 4){
                switch(numOfPassengersIndex){
                case 0: price = 645; break;
                case 1: price = 1598; break;
                }
            }
            int result = QMessageBox::question(
                this,
                "Confirm purchasing",
                QString("Do you want to buy this insurance?\nCalculated coverage amount = %1₴\nCalculated price of insurance = %2₴")
                    .arg(coverageAmount)
                    .arg(price),
                QMessageBox::Yes | QMessageBox::No
                );
            if(result == QMessageBox::Yes){

                this->hide();
                ConfirmPurchasingAuto *confirm = new ConfirmPurchasingAuto(insuranceType, technicalPassport, coverageAmount, price, autoType, autoCubicCapacity, carryingCapacity, motoCubicCapacity, numOfPassengers, trailerFor, currentUserId, randomPolicy, this);
                connect(confirm, &ConfirmPurchasingAuto::closed, this, &PurchaseAutoInsurance::onDialogClosed);
                confirm->setModal(true);
                confirm->exec();

//                ConfirmPurchasingAuto confirm(insuranceType, technicalPassport, coverageAmount, price, autoType, autoCubicCapacity, carryingCapacity, motoCubicCapacity, numOfPassengers, trailerFor, currentUserId, randomPolicy, this);
//                confirm.setModal(true);
//                confirm.exec();
            }
        }}catch(const std::exception &ex){
        QMessageBox::warning(this, "Error due to input data :(", "Some fields are empty, please fill them all!!!");
        qWarning() << "Exception in inputing data: " << ex.what();
    }
}

void PurchaseAutoInsurance::closeEvent(QCloseEvent *event)
{
    QDialog::closeEvent(event);
    emit closed();
}

void PurchaseAutoInsurance::onDialogClosed()
{
    show();
}




