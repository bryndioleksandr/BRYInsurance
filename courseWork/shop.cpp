#include "shop.h"
#include "ui_secondmainwindow.h"

Shop::Shop(int userId, QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Shop),
    currentUserId(userId)
{
    ui->setupUi(this);
    foreach (QPushButton *button, findChildren<QPushButton *>()) {
        button->setCursor(Qt::PointingHandCursor);
    }
}

Shop::~Shop()
{
    delete ui;
}

void Shop::on_autoInsurancePb_clicked()
{
    this->hide();
    PurchaseAutoInsurance *autos = new PurchaseAutoInsurance(currentUserId);
    connect(autos, &PurchaseAutoInsurance::closed, this, &Shop::onDialogClosed);
    autos->setModal(true);
    autos->exec();
}


void Shop::on_travelInsurancePb_clicked()
{
    this->hide();
    PurchaseTravelInsurance *travel = new PurchaseTravelInsurance(currentUserId);
    connect(travel, &PurchaseTravelInsurance::closed, this, &Shop::onDialogClosed);
    travel->setModal(true);
    travel->exec();
}


void Shop::on_gadgetInsurancePb_clicked()
{
    this->hide();
    PurchaseGadgetInsurance *gadget = new PurchaseGadgetInsurance(currentUserId);
    connect(gadget, &PurchaseGadgetInsurance::closed, this, &Shop::onDialogClosed);
    gadget->setModal(true);
    gadget->exec();
}

void Shop::closeEvent(QCloseEvent *event)
{
    QDialog::closeEvent(event);
    emit closed();
}

void Shop::onDialogClosed()
{
    show();
}


