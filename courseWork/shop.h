#ifndef SHOP_H
#define SHOP_H

#include <QDialog>
#include "purchaseautoinsurance.h"
#include "purchasetravelinsurance.h"
#include "purchasegadgetinsurance.h"

namespace Ui {
class Shop;
}

class Shop : public QDialog
{
    Q_OBJECT

public:
    explicit Shop(int userId, QWidget *parent = nullptr);
    ~Shop();

private slots:
    void on_autoInsurancePb_clicked();

    void on_travelInsurancePb_clicked();

    void on_gadgetInsurancePb_clicked();
public slots:
    void onDialogClosed();
signals:
    void closed();
protected:
    void closeEvent(QCloseEvent *event) override;

private:
    Ui::Shop *ui;
    int currentUserId;
};

#endif // SHOP_H
