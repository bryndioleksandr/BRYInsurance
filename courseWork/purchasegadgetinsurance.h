#ifndef PURCHASEGADGETINSURANCE_H
#define PURCHASEGADGETINSURANCE_H

#include <QDialog>
#include <QMessageBox>
#include "gadgetinsurance.h"
#include "mysqldbmanager.h"
#include "confirmpurchasinggadget.h"

namespace Ui {
class PurchaseGadgetInsurance;
}

class PurchaseGadgetInsurance : public QDialog
{
    Q_OBJECT

public:
    explicit PurchaseGadgetInsurance(int userId, QWidget *parent = nullptr);
    ~PurchaseGadgetInsurance();

private slots:
    void on_purchasePb_clicked();

public slots:
    void onDialogClosed();

signals:
    void closed();
protected:
    void closeEvent(QCloseEvent *event) override;

private:
    Ui::PurchaseGadgetInsurance *ui;
    int insuranceTypeIndex, longevityIndex, currentUserId, price, randomPolicy, gadgetPrice;
    QString insuranceType, longevity, coverageType;
};

#endif // PURCHASEGADGETINSURANCE_H
