#ifndef RESETPASSWORD_H
#define RESETPASSWORD_H

#include <QDialog>
#include <QSqlQuery>
#include <QMessageBox>
#include <QCryptographicHash>

namespace Ui {
class ResetPassword;
}

class ResetPassword : public QDialog
{
    Q_OBJECT

public:
    explicit ResetPassword(QString username, QWidget *parent = nullptr);
    ~ResetPassword();

private slots:
    void on_confirmPb_clicked();

    void on_checkBox_stateChanged(int arg1);

private:
    Ui::ResetPassword *ui;
    QString username, password;
};

#endif // RESETPASSWORD_H
