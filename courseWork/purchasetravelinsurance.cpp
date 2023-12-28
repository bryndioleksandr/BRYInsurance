#include "purchasetravelinsurance.h"
#include "ui_purchasetravelinsurance.h"

PurchaseTravelInsurance::PurchaseTravelInsurance(int userId, QWidget *parent) :
    QDialog(parent),
    currentUserId(userId),
    ui(new Ui::PurchaseTravelInsurance)
{
    ui->setupUi(this);
    QVBoxLayout *layout = new QVBoxLayout(this);
    startCalendar = new QCalendarWidget();
    startCalendar->setVisible(false);
    endCalendar = new QCalendarWidget();
    endCalendar->setVisible(false);
    startCalendar->hide();
    endCalendar->hide();
    ui->verticalLayout_3->addWidget(startCalendar);
    ui->verticalLayout_3->addWidget(endCalendar);
    connect(startCalendar, &QCalendarWidget::activated, this, &PurchaseTravelInsurance::on_startCalendar_activated);
    connect(endCalendar, &QCalendarWidget::activated, this, &PurchaseTravelInsurance::on_endCalendar_activated);
    foreach (QPushButton *button, findChildren<QPushButton *>()) {
        button->setCursor(Qt::PointingHandCursor);
    }
}

PurchaseTravelInsurance::~PurchaseTravelInsurance()
{
    delete ui;
}

void PurchaseTravelInsurance::on_startDatePb_clicked()
{
    endCalendar->setVisible(false);
    endCalendar->hide();
    startCalendar->setVisible(true);
    startCalendar->show();
}

void PurchaseTravelInsurance::on_endDatePb_clicked()
{
    startCalendar->setVisible(false);
    startCalendar->hide();
    endCalendar->setVisible(true);
    endCalendar->show();

}

void PurchaseTravelInsurance::on_purchasePb_clicked()
{

    if (startDate < QDate::currentDate() || endDate < QDate::currentDate()) {
        QMessageBox::warning(this, "Error in inputing", "Are you sure that start date is ["+startDate.toString()+"] and end date is ["+endDate.toString()+"] ?\n\tChosen date cannot be in the past.");
    }
    else{

    travelDirection = ui->travelDirectionCb->currentText();
    travelPurpose = ui->travelPurposeCb->currentText();
    coverageAmount = ui->coverageAmountCb->currentText();

    travelDirectionIndex = ui->travelDirectionCb->currentIndex();
    travelPurposeIndex = ui->travelPurposeCb->currentIndex();
    coverageAmountIndex = ui->coverageAmountCb->currentIndex();
    int daysDifference = startDate.daysTo(endDate);

    if(travelDirectionIndex == 0 && travelPurposeIndex == 0 && coverageAmountIndex == 0){
        price = 79 * daysDifference;
    }

    if(travelDirectionIndex == 1 && travelPurposeIndex == 0 && coverageAmountIndex == 0){
        price = 58 * daysDifference;
    }

    if(travelDirectionIndex == 2 && travelPurposeIndex == 0 && coverageAmountIndex == 0){
        price = 145 * daysDifference;
    }

    if(travelDirectionIndex == 3 && travelPurposeIndex == 0 && coverageAmountIndex == 0){
        price = 188 * daysDifference;
    }



    if(travelDirectionIndex == 0 && travelPurposeIndex == 1 && coverageAmountIndex == 0){
        price = 202 * daysDifference;
    }

    if(travelDirectionIndex == 1 && travelPurposeIndex == 1 && coverageAmountIndex == 0){
        price = 191 * daysDifference;
    }

    if(travelDirectionIndex == 2 && travelPurposeIndex == 1 && coverageAmountIndex == 0){
        price = 335 * daysDifference;
    }

    if(travelDirectionIndex == 3 && travelPurposeIndex == 1 && coverageAmountIndex == 0){
        price = 354 * daysDifference;
    }


    if(travelDirectionIndex == 0 && travelPurposeIndex == 2 && coverageAmountIndex == 0){
        price = 154 * daysDifference;
    }

    if(travelDirectionIndex == 1 && travelPurposeIndex == 2 && coverageAmountIndex == 0){
        price = 145 * daysDifference;
    }

    if(travelDirectionIndex == 2 && travelPurposeIndex == 2 && coverageAmountIndex == 0){
        price = 295 * daysDifference;
    }

    if(travelDirectionIndex == 3 && travelPurposeIndex == 2 && coverageAmountIndex == 0){
        price = 370 * daysDifference;
    }



    if(travelDirectionIndex == 0 && travelPurposeIndex == 0 && coverageAmountIndex == 1){
        price = 139 * daysDifference;
    }

    if(travelDirectionIndex == 1 && travelPurposeIndex == 0 && coverageAmountIndex == 1){
        price = 102 * daysDifference;
    }

    if(travelDirectionIndex == 2 && travelPurposeIndex == 0 && coverageAmountIndex == 1){
        price = 255 * daysDifference;
    }

    if(travelDirectionIndex == 3 && travelPurposeIndex == 0 && coverageAmountIndex == 1){
        price = 332 * daysDifference;
    }



    if(travelDirectionIndex == 0 && travelPurposeIndex == 1 && coverageAmountIndex == 1){
        price = 357 * daysDifference;
    }

    if(travelDirectionIndex == 1 && travelPurposeIndex == 1 && coverageAmountIndex == 1){
        price = 269 * daysDifference;
    }

    if(travelDirectionIndex == 2 && travelPurposeIndex == 1 && coverageAmountIndex == 1){
        price = 592 * daysDifference;
    }

    if(travelDirectionIndex == 3 && travelPurposeIndex == 1 && coverageAmountIndex == 1){
        price = 623 * daysDifference;
    }


    if(travelDirectionIndex == 0 && travelPurposeIndex == 2 && coverageAmountIndex == 1){
        price = 272 * daysDifference;
    }

    if(travelDirectionIndex == 1 && travelPurposeIndex == 2 && coverageAmountIndex == 1){
        price = 256 * daysDifference;
    }

    if(travelDirectionIndex == 2 && travelPurposeIndex == 2 && coverageAmountIndex == 1){
        price = 522 * daysDifference;
    }

    if(travelDirectionIndex == 3 && travelPurposeIndex == 2 && coverageAmountIndex == 1){
        price = 654 * daysDifference;
    }
    srand(time(NULL));
    int randomPolicy = 0;
    for (int i = 0; i < 10; ++i) {
        randomPolicy = (randomPolicy * 10) + (rand() % 10);
    }
    if (randomPolicy < 0) randomPolicy *= -1;
    int result = QMessageBox::question(
        this,
        "Confirm purchasing",
        QString("Do you want to buy this travel insurance?\nCoverage amount = %1\nCalculated price of insurance = %2₴")
            .arg(coverageAmount)
            .arg(price),
        QMessageBox::Yes | QMessageBox::No
        );
    if(result == QMessageBox::Yes){

        this->hide();
        ConfirmPurchasingTravel *confirm = new ConfirmPurchasingTravel(currentUserId, travelDirection, travelPurpose, coverageAmount, randomPolicy, price, startDate, endDate, this);
        connect(confirm, &ConfirmPurchasingTravel::closed, this, &PurchaseTravelInsurance::onDialogClosed);
        confirm->setModal(true);
        confirm->exec();

//        ConfirmPurchasingTravel confirm(currentUserId, travelDirection, travelPurpose, coverageAmount, randomPolicy, price, startDate, endDate, this);
//        confirm.setModal(true);
//        confirm.exec();
    }

    }

}

void PurchaseTravelInsurance::on_startCalendar_activated(const QDate &date)
{
    startDate = date;
    startYear = startDate.year();
    startMonth = startDate.month();
    startDay = startDate.day();
    startCalendar->setVisible(false);
    startCalendar->hide();
}

void PurchaseTravelInsurance::on_endCalendar_activated(const QDate &date)
{
    endDate = date;
    endYear = endDate.year();
    endMonth = endDate.month();
    endDay = endDate.day();
    endCalendar->setVisible(false);
    endCalendar->hide();
}

void PurchaseTravelInsurance::closeEvent(QCloseEvent *event)
{
    QDialog::closeEvent(event);
    emit closed();
}

void PurchaseTravelInsurance::onDialogClosed()
{
    show();
}



