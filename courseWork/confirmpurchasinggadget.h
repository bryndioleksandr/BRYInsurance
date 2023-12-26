#ifndef CONFIRMPURCHASINGGADGET_H
#define CONFIRMPURCHASINGGADGET_H

#include <QDialog>
#include <ctime>
#include <QDate>
#include "purchasegadgetinsurance.h"
#include <QDate>
#include "manageinsurances.h"
#include "savereceiptpdf.h"
#include "myaccount.h"

namespace Ui {
class ConfirmPurchasingGadget;
}

class ConfirmPurchasingGadget : public QDialog
{
    Q_OBJECT

public:
    explicit ConfirmPurchasingGadget(QString insuranceType, int longevityIndex, QString coverageType, int price, int gadgetPrice,  int currentUserId, int randomPolicy, QWidget *parent = nullptr);
    ~ConfirmPurchasingGadget();

private slots:
    void on_purchasePb_clicked();

signals:
    void closed();
protected:
    void closeEvent(QCloseEvent *event) override;

private:
    Ui::ConfirmPurchasingGadget *ui;
    QString gadgetBrand, gadgetModel, phoneNumber, insuranceType, coverageType;
    QDate startWarrantyDate, endWarrantyDate;
    int longevityIndex, currentUserId, randomPolicy, price, gadgetPrice, newBalance;
};

#endif // CONFIRMPURCHASINGGADGET_H
