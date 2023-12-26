#include "purchasegadgetinsurance.h"
#include "ui_purchasegadgetinsurance.h"
#include <QIntValidator>

PurchaseGadgetInsurance::PurchaseGadgetInsurance(int userId, QWidget *parent) :
    QDialog(parent),
    currentUserId(userId),
    ui(new Ui::PurchaseGadgetInsurance)
{
    ui->setupUi(this);
    foreach (QPushButton *button, findChildren<QPushButton *>()) {
        button->setCursor(Qt::PointingHandCursor);
    }
}

PurchaseGadgetInsurance::~PurchaseGadgetInsurance()
{
    delete ui;
}

void PurchaseGadgetInsurance::on_purchasePb_clicked()
{
    insuranceType = ui->insuranceTypeCb->currentText();
    longevity = ui->longevityCb->currentText();
    insuranceTypeIndex = ui->insuranceTypeCb->currentIndex();
    longevityIndex = ui->longevityCb->currentIndex();
    QIntValidator *validator = new QIntValidator(this);
    ui->gadgetPriceLn->setValidator(validator);
    QString priceText = ui->gadgetPriceLn->text();

    // Конвертуємо текст в ціле число
    bool conversionOk;
    gadgetPrice = priceText.toInt(&conversionOk);
    srand(time(NULL));
    int randomPolicy = 0;
    for (int i = 0; i < 10; ++i) {
        randomPolicy = (randomPolicy * 10) + (rand() % 10);
    }
    if (randomPolicy < 0) randomPolicy *= -1;

    switch(insuranceTypeIndex){
    case 0: coverageType = "Premium";
        switch(longevityIndex){
        case 0: price = (gadgetPrice/5)/2; break;
        case 1: price = (gadgetPrice/5); break;
        case 2: price = (gadgetPrice/5)*2; break;
        } break;
    case 1: coverageType = "Medium";
        switch(longevityIndex){
        case 0: price = (gadgetPrice/10)/2; break;
        case 1: price = (gadgetPrice/10); break;
        case 2: price = (gadgetPrice/10)*2; break;
        } break;
    case 2: coverageType = "Low";
        switch(longevityIndex){
        case 0: price = (gadgetPrice/15)/2; break;
        case 1: price = (gadgetPrice/15); break;
        case 2: price = (gadgetPrice/15)*2; break;
        } break;
    }

    int result = QMessageBox::question(
        this,
        "Confirm purchasing",
        QString("Do you want to buy this insurance?\nCoverage type of this package = %1\nCalculated price of insurance = %2₴")
            .arg(coverageType)
            .arg(price),
        QMessageBox::Yes | QMessageBox::No
        );
    if(result == QMessageBox::Yes){

        this->hide();
        ConfirmPurchasingGadget *confirm = new ConfirmPurchasingGadget(insuranceType, longevityIndex, coverageType, price, gadgetPrice, currentUserId, randomPolicy, this);
        connect(confirm, &ConfirmPurchasingGadget::closed, this, &PurchaseGadgetInsurance::onDialogClosed);
        confirm->setModal(true);
        confirm->exec();
    }
}

void PurchaseGadgetInsurance::closeEvent(QCloseEvent *event)
{
    QDialog::closeEvent(event);
    emit closed();
}

void PurchaseGadgetInsurance::onDialogClosed()
{
    show();
}
