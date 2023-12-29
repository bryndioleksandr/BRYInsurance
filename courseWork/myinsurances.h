#ifndef MYINSURANCES_H
#define MYINSURANCES_H

#include <QDialog>
#include <QVBoxLayout>
#include <QLabel>
#include <QGroupBox>
#include <mysqldbmanager.h>
#include "manageinsurances.h"
#include <QPushButton>
#include <QDate>
#include "mysqldbmanager.h"
#include <QSqlError>
#include "savereceiptpdf.h"
#include <QMessageBox>
#include <QDir>
#include <QFile>
#include <QDesktopServices>
#include <QUrl>
#include <QHBoxLayout>
#include <QSpacerItem>

namespace Ui {
class MyInsurances;
}

class MyInsurances : public QDialog
{
    Q_OBJECT

public:
    explicit MyInsurances(int userId, QWidget *parent = nullptr);
    ~MyInsurances();

private slots:
    void addInsuranceType(QString tableName, QString typeName, QVBoxLayout* layout);
    void on_downloadPb_clicked(QString tableName, int insurancePolicy);
    void on_deletePb_clicked(QString tableName, int insurancePolicy);
    void on_fullAutoPb_clicked();
    void on_fullTravelPb_clicked();
    void on_fullGadgetPb_clicked();
    void on_closeAutoClicked();
    void on_closeTravelClicked();
    void on_closeGadgetClicked();
signals:
    void closed();
protected:
    void closeEvent(QCloseEvent *event) override;

private:
    Ui::MyInsurances *ui;
    int currentUserId;
    QString tableName, autoType, insuranceType, autoNumber, autoBrand, autoModel, cubicCapacity, carryingCapacity, motoCubic, city, numOfPassengers, trailer_for, startAuto;
    QString phoneNumberGadget, gadgetBrand, gadgetModel, insuranceTypeGadget, coverageType, startGadget;
    QString travelActivity, travelDirection, coverageAmountTravel, startTravel;
    int insurancePolicy, autoYear, autoPrice, coverageAmount, priceAutoIns, priceGadgetIns, priceTravelIns, userId;
    QDate endTravel, endGadget;
    time_t endAuto;
    QPushButton* closeAutoPb, *closeTravelPb, *closeGadgetPb;
    QVBoxLayout *typeLayout;
    QGroupBox* typeGroupBox;
};

#endif // MYINSURANCES_H
