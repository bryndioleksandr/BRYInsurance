#ifndef CONFIRMPURCHASINGAUTO_H
#define CONFIRMPURCHASINGAUTO_H

#include <QDialog>
#include <purchaseautoinsurance.h>
#include <QMessageBox>
#include <QPdfWriter>
#include <QPainter>
#include <QFileDialog>
#include "manageinsurances.h"
#include "savereceiptpdf.h"
#include <QIntValidator>
#include "User.h"
#include <QDate>
#include "myaccount.h"

namespace Ui {
class ConfirmPurchasingAuto;
}

class ConfirmPurchasingAuto : public QDialog
{
    Q_OBJECT

public:
    explicit ConfirmPurchasingAuto(QString& insuranceType, QString& technicalPassport, int& coverageAmount, int& price, QString& autoType, QString& autoCubicCapacity, QString& carryingCapacity, QString& motoCubicCapacity, QString& numOfPassengers, QString& trailerFor,int& currentUserId, int& randomPolicy, QWidget *parent = nullptr);
    ~ConfirmPurchasingAuto();

private slots:
    void on_confirmPurchasingPb_clicked();

signals:
    void closed();
protected:
    void closeEvent(QCloseEvent *event) override;

private:
    Ui::ConfirmPurchasingAuto *ui;
    QString surname, name, phoneNumber, username;
    QString autoNumber, autoBrand, autoModel, autoPrice, autoYear, insurancePolicy, insuranceType,  autoCubicCapacity,    autoType,  thisUserId, carryingCapacity, technicalPassport, trailerFor, motoCubicCapacity, numOfPassengers;
    time_t warrantyStartDate, warrantyEndDate;
    int currentUserId, insuranceTypeIndex, autoCubicCapacityIndex, autoTypeIndex, carryingCapacityIndex, price, coverageAmount, randomPolicy, newBalance;
    QComboBox *cubicCapacityCb, *carryingCapacityCb;
    QLineEdit *autoBrandLn, *autoPriceLn, *autoModelLn, *autoYearLn, *autoNumberLn;
};

#endif // CONFIRMPURCHASINGAUTO_H
