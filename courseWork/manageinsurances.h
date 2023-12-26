#ifndef MANAGEINSURANCES_H
#define MANAGEINSURANCES_H

#include <QDialog>
#include <QDate>
#include <ctime>
#include "autoinsurance.h"
#include "travelinsurance.h"
#include "gadgetinsurance.h"
#include "User.h"
#include <QDate>
#include "mysqldbmanager.h"
#include <QSqlError>
#include "savereceiptpdf.h"
#include <QMessageBox>
#include <QDir>
#include <QFile>
#include <QDesktopServices>
#include <QUrl>

namespace Ui {
class ManageInsurances;
}

class ManageInsurances : public QDialog
{
    Q_OBJECT

public:
    explicit ManageInsurances(QString tableName, int insurancePolicy, QWidget *parent = nullptr);
    ~ManageInsurances();
    void setAutoInsurance(AutoInsurance &insurance);
    void setTravelInsurance(TravelInsurance &insurance);
    void setGadgetInsurance(GadgetInsurance &insurance);
    void setUser(User &user);

signals:
    void closed();
protected:
    void closeEvent(QCloseEvent *event) override;

private slots:

    void on_deletePb_clicked();

    void on_downloadPb_clicked();

private:
    Ui::ManageInsurances *ui;
    QString tableName, autoType, insuranceType, autoNumber, autoBrand, autoModel, cubicCapacity, carryingCapacity, motoCubic, city, numOfPassengers, trailer_for, startAuto;
    QString phoneNumberGadget, gadgetBrand, gadgetModel, insuranceTypeGadget, coverageType, startGadget;
    QString travelActivity, travelDirection, coverageAmountTravel, startTravel;
    int insurancePolicy, autoYear, autoPrice, coverageAmount, priceAutoIns, priceGadgetIns, priceTravelIns, userId;
    QDate endTravel, endGadget;
    time_t endAuto;

    AutoInsurance autoInsurance;
    TravelInsurance travelInsurance;
    GadgetInsurance gadgetInsurance;
    User user;

};

#endif // MANAGEINSURANCES_H
