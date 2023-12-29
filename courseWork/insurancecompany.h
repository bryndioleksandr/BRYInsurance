#ifndef INSURANCECOMPANY_H
#define INSURANCECOMPANY_H

#include <QDialog>
#include "shop.h"
#include "myinsurances.h"
#include "insuranceevents.h"
#include "myaccount.h"
#include "shop.h"
#include "login.h"
#include <QCloseEvent>

namespace Ui {
class InsuranceCompany;
}

class InsuranceCompany : public QDialog
{
    Q_OBJECT

public:
    explicit InsuranceCompany(int userId, QWidget *parent = nullptr);
    ~InsuranceCompany();

private slots:
    void on_insuranceMarketPb_clicked();
    void on_managePoliciesPb_clicked();
    void on_insuranceEvents_clicked();
    void on_accountPb_clicked();
    void onMarketClosed();
    void on_actionStorePb_clicked();
    void on_actionEventsPb_clicked();
    void on_actionManagePb_clicked();
    void on_actionAccountPb_clicked();
public slots:
    void onDialogClosed();
signals:
    void closed();
protected:
    void closeEvent(QCloseEvent *event) override;
private:
    Ui::InsuranceCompany *ui;
    int currentUserId;
};

#endif // INSURANCECOMPANY_H
