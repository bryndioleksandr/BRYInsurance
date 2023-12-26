#ifndef PURCHASETRAVELINSURANCE_H
#define PURCHASETRAVELINSURANCE_H

#include <QDialog>
#include <QVBoxLayout>
#include <QCalendarWidget>
#include <QWidget>
#include "travelinsurance.h"
#include "mysqldbmanager.h"
#include "confirmpurchasingtravel.h"
#include <QDate>
#include <QComboBox>
#include <QMessageBox>



namespace Ui {
class PurchaseTravelInsurance;
}

class PurchaseTravelInsurance : public QDialog
{
    Q_OBJECT

public:
    explicit PurchaseTravelInsurance(int userId, QWidget *parent = nullptr);
    ~PurchaseTravelInsurance();

private slots:
    void on_startDatePb_clicked();

    void on_endDatePb_clicked();

    void on_purchasePb_clicked();

    void on_startCalendar_activated(const QDate &date);
    void on_endCalendar_activated(const QDate &date);

public slots:
    void onDialogClosed();

signals:
    void closed();
protected:
    void closeEvent(QCloseEvent *event) override;

private:
    Ui::PurchaseTravelInsurance *ui;
    int startYear, startMonth, startDay, endYear, endMonth, endDay, numOfPeople, price, insurancePolicy, currentUserId, travelDirectionIndex, travelPurposeIndex, coverageAmountIndex;
    QString travelDirection, travelPurpose, coverageAmount;
    QCalendarWidget *startCalendar, *endCalendar;
    QDate startDate, endDate;
};

#endif // PURCHASETRAVELINSURANCE_H
