#include "resetpassword.h"
#include "ui_resetpassword.h"


ResetPassword::ResetPassword(QString username, QWidget *parent) :
    QDialog(parent),
    username(username),
    ui(new Ui::ResetPassword)
{
    ui->setupUi(this);
    foreach (QPushButton *button, findChildren<QPushButton *>()) {
        button->setCursor(Qt::PointingHandCursor);
    }

    ui->resetPasswordLn->setEchoMode(QLineEdit::Password);

}

ResetPassword::~ResetPassword()
{
    delete ui;
}

void ResetPassword::on_confirmPb_clicked()
{
    password = ui->resetPasswordLn->text();

    QByteArray bytesi = QCryptographicHash::hash(password.toUtf8(), QCryptographicHash::Sha256);
    QString oute = QString(bytesi.toHex());

    QString queryStr = QString("UPDATE Users SET password = '%1' WHERE username = '%2'")
                           .arg(oute.toStdString().c_str())
                           .arg(username);
    QSqlQuery query;
    query.prepare(queryStr);
    if(query.exec() && query.numRowsAffected() > 0){
        QMessageBox::about(this, "Password changed", username + ", your password was changed successfully!");
    }
    else {
        QMessageBox::warning(this, "Error", username + ", your password wasn't changed.");
    }

}


void ResetPassword::on_checkBox_stateChanged(int arg1)
{
    if (arg1 == Qt::Checked) {
        ui->resetPasswordLn->setEchoMode(QLineEdit::Normal);
    } else {
        ui->resetPasswordLn->setEchoMode(QLineEdit::Password);
    }
}

