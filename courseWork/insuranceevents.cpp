#include "insuranceevents.h"
#include "ui_insuranceevents.h"
#include <QPushButton>

InsuranceEvents::InsuranceEvents(int userId, QWidget *parent) :
    QDialog(parent),
    currentUserId(userId),
    ui(new Ui::InsuranceEvents)
{
    ui->setupUi(this);
    foreach (QPushButton *button, findChildren<QPushButton *>()) {
        button->setCursor(Qt::PointingHandCursor);
    }
}

InsuranceEvents::~InsuranceEvents()
{
    delete ui;
}

void InsuranceEvents::on_autoEventPb_clicked()
{
    ShowEvents openNext(currentUserId, "AutoInsurance");
    openNext.setModal(true);
    openNext.exec();
}


void InsuranceEvents::on_travelEventPb_clicked()
{
    ShowEvents openNext(currentUserId, "TravelInsurance");
    openNext.setModal(true);
    openNext.exec();
}


void InsuranceEvents::on_gadgetEventPb_clicked()
{
    ShowEvents openNext(currentUserId, "GadgetInsurance");
    openNext.setModal(true);
    openNext.exec();
}

void InsuranceEvents::closeEvent(QCloseEvent *event)
{
    QDialog::closeEvent(event);
    emit closed();
}

