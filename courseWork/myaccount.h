#ifndef MYACCOUNT_H
#define MYACCOUNT_H

#include <QDialog>
#include "mysqldbmanager.h"
#include <QMessageBox>
#include "registr.h"
#include "forgotpw.h"
#include <QIntValidator>
#include "login.h"

namespace Ui {
class MyAccount;
}

class MyAccount : public QDialog
{
    Q_OBJECT

public:
    explicit MyAccount(int userId, QWidget *parent = nullptr);
    ~MyAccount();

private slots:
    void on_deleteAccountPb_clicked();
    void on_changePasswordPb_clicked();
    void on_replenishBalancePb_clicked();
    void on_logoutPb_clicked();
signals:
    void closed();
protected:
    void closeEvent(QCloseEvent *event) override;

private:
    Ui::MyAccount *ui;
    int currentUserId, balance;
    QString username;
};

#endif // MYACCOUNT_H
