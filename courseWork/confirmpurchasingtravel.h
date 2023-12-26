#ifndef CONFIRMPURCHASINGTRAVEL_H
#define CONFIRMPURCHASINGTRAVEL_H

#include <QDialog>
#include "purchasetravelinsurance.h"
#include "User.h"
#include <QMessageBox>
#include "manageinsurances.h"
#include "savereceiptpdf.h"
#include "myaccount.h"

namespace Ui {
class ConfirmPurchasingTravel;
}

class ConfirmPurchasingTravel : public QDialog
{
    Q_OBJECT

public:

    explicit ConfirmPurchasingTravel(int currentUserId, QString travelDirection, QString travelPurpose, QString coverageAmount, int randomPolicy, int price, QDate startDate, QDate endDate, QWidget *parent = nullptr);
    ~ConfirmPurchasingTravel();

private slots:
    void on_confirmPb_clicked();
public slots:
    void onDialogClosed();
signals:
    void closed();
protected:
    void closeEvent(QCloseEvent *event) override;

private:
    Ui::ConfirmPurchasingTravel *ui;
    int startYear, startMonth, startDay, endYear, endMonth, endDay, numOfPeople, price, insurancePolicy, currentUserId, randomPolicy, newBalance;
    QString travelDirection, travelPurpose, coverageAmount, travelDirectionIndex, travelPurposeIndex, coverageAmountIndex, passport, email, city,  birthDate;
    QCalendarWidget *startCalendar, *endCalendar;
    QDate startDate, endDate;
};

#endif // CONFIRMPURCHASINGTRAVEL_H
