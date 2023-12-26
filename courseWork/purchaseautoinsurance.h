#ifndef PURCHASEAUTOINSURANCE_H
#define PURCHASEAUTOINSURANCE_H

#include <QDialog>
#include <QComboBox>
#include "AutoInsurance.h"
#include "mysqldbmanager.h"
#include <QLineEdit>
#include <QMessageBox>
#include <QLineEdit>
#include <QVBoxLayout>
#include "confirmpurchasingauto.h"

namespace Ui {
class PurchaseAutoInsurance;
}

class PurchaseAutoInsurance : public QDialog
{
    Q_OBJECT

public:
    explicit PurchaseAutoInsurance(int userId, QWidget *parent = nullptr);
    ~PurchaseAutoInsurance();
    bool checkFields();

private slots:
    void on_purchasePb_clicked();

    void on_autoTypeCb_textActivated(const QString &arg1);

public slots:
    void onDialogClosed();

signals:
    void closed();
protected:
    void closeEvent(QCloseEvent *event) override;

private:
    Ui::PurchaseAutoInsurance *ui;
    QString autoNumber, autoBrand, autoModel, autoPrice, autoYear, insurancePolicy, insuranceType, autoCubicCapacity, autoType, thisUserId, carryingCapacity, technicalPassport, trailerFor, motoCubicCapacity, numOfPassengers;
    time_t warrantyStartDate, warrantyEndDate;
    int currentUserId, insuranceTypeIndex, autoCubicCapacityIndex, autoTypeIndex, carryingCapacityIndex, trailerForIndex, motoCubicCapacityIndex, numOfPassengersIndex, price, coverageAmount;
    QComboBox *cubicCapacityCb, *carryingCapacityCb, *motoCubicCapacityCb, *trailerForCb, *numOfPassengersCb;
    QLineEdit *autoBrandLn, *autoPriceLn, *autoModelLn, *autoYearLn, *autoNumberLn;
};

#endif // PURCHASEAUTOINSURANCE_H
