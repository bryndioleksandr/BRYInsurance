#ifndef LOGIN_H
#define LOGIN_H

#include <QDialog>
#include <QMainWindow>
#include <QMessageBox>
#include <QLabel>
#include <QLayout>
#include <QPushButton>
#include <QCryptographicHash>
#include <QCheckBox>
#include <QLineEdit>
#include <QWidget>
#include "User.h"
#include "forgotpw.h"
#include "mysqldbmanager.h"
#include "insurancecompany.h"
#include "registr.h"
#include <QCloseEvent>
#include <QMenu>
#include <QSqlError>
#include "admintools.h"

namespace Ui {
class Login;
}

class QSqlTableModel;
class DBManager;

class Login : public QDialog
{
    Q_OBJECT

public:
    explicit Login(DBManager* dbManager, QWidget *parent = nullptr);
    ~Login();

private slots:
    void on_loginPb_clicked();


    void on_forgotPb_clicked();

    void on_checkBoxPassword_stateChanged(int arg1);

    void on_signUpPb_clicked();
public slots:
    void onDialogClosed();
//signals:
//    void closed();
//protected:
//    void closeEvent(QCloseEvent *event) override;

private:
    Ui::Login *ui;
    QString username, password;
    bool checkFields();
    DBManager *db;
    QSqlTableModel  *model;
    QString hashedUsername, hashedPassword;
};

#endif // LOGIN_H
