#ifndef FORGOTPW_H
#define FORGOTPW_H

#include <QDialog>
#include "resetpassword.h"
#include <QSqlQuery>
#include <QMessageBox>


namespace Ui {
class ForgotPw;
}

class ForgotPw : public QDialog
{
    Q_OBJECT

public:
    explicit ForgotPw(QString usernameThis, QWidget *parent = nullptr);
    ~ForgotPw();

private slots:
    void on_confirmPb_clicked();

    void on_confirmPb_2_clicked();

private:
    Ui::ForgotPw *ui;
    QString username, answer;
};

#endif // FORGOTPW_H
