#include "forgotpw.h"
#include "ui_forgotpw.h"

ForgotPw::ForgotPw(QString usernameThis, QWidget *parent) :
    QDialog(parent),
    username(usernameThis),
    ui(new Ui::ForgotPw)
{
    ui->setupUi(this);
    QString queryStr = QString("SELECT question FROM Users WHERE username = '%1';")
                           .arg(username);
    QSqlQuery query;
    query.prepare(queryStr);
    if (query.exec()) {
        if (query.next()) {
            QString question = query.value(0).toString();
            ui->keyQuestionLb->setText(question);
        } else {
            ui->answerLn->hide();
            ui->confirmPb->hide();
            ui->label->hide();
            ui->keyQuestionLb->setText("Username not found");
        }
    }
    foreach (QPushButton *button, findChildren<QPushButton *>()) {
        button->setCursor(Qt::PointingHandCursor);
    }
}

ForgotPw::~ForgotPw()
{
    delete ui;
}

void ForgotPw::on_confirmPb_2_clicked()
{

}


void ForgotPw::on_confirmPb_clicked()
{
    answer = ui->answerLn->text();
    QString queryStr = QString("SELECT answear FROM Users WHERE answear = '%1';")
                           .arg(answer.toStdString().c_str());
    QSqlQuery query;
    query.exec(queryStr);
    if(query.next()){
        QMessageBox::information(this, "Success", "Successful!!!");
        ResetPassword reset(username);
        reset.setModal(true);
        reset.exec();
    }
    else {
        QMessageBox::warning(this, "Error due to input data :(", "Invalid answear!");
    }

}



