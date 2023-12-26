#include "myaccount.h"
#include "ui_myaccount.h"


MyAccount::MyAccount(int userId, QWidget *parent) :
    QDialog(parent),
    currentUserId(userId),
    ui(new Ui::MyAccount)
{
    ui->setupUi(this);
    MySqlDBManager* db = MySqlDBManager::getInstance();
    ui->nameSurnameLb->setText(db->select("surname", currentUserId) + " " + db->select("name", currentUserId));
    ui->phoneNumLb->setText(db->select("phoneNumber", currentUserId));
    ui->usernameLb->setText(db->select("username", currentUserId));
    ui->balanceSb->setValue((db->select("balance", currentUserId)).toInt());
    foreach (QPushButton *button, findChildren<QPushButton *>()) {
        button->setCursor(Qt::PointingHandCursor);
    }
}

MyAccount::~MyAccount()
{
    delete ui;
}



void MyAccount::on_deleteAccountPb_clicked()
{
    MySqlDBManager* db = MySqlDBManager::getInstance();
    QMessageBox::StandardButton reply;
    reply = QMessageBox::warning(this, "Deleting insurance", "Are you sure you want to delete account? \n\tIt will not be restored.", QMessageBox::Yes | QMessageBox::No);
    if(reply == QMessageBox::Yes){
        db->deleteUser(currentUserId);
        QMessageBox::StandardButton reply2;
        reply2 = QMessageBox::information(this, "Deleting account", "Your account has been deleted successful \n\tDo you want to create new account?", QMessageBox::Yes | QMessageBox::No);
        if(reply2 == QMessageBox::Yes){
            this->close();
            Registr openNext;
            openNext.setModal(true);
            openNext.exec();
        }
    }
}


void MyAccount::on_changePasswordPb_clicked()
{
    QSqlQuery query;
    query.exec("SELECT username FROM Users WHERE user_id = "+QString::number(currentUserId));
    if(query.next()){username = query.value(0).toString();
        ForgotPw openNext(username);
        openNext.setModal(true);
        openNext.exec();
        this->close();}
}



void MyAccount::on_replenishBalancePb_clicked()
{
    MySqlDBManager* db = MySqlDBManager::getInstance();
    QSqlQuery query;
    query.exec("SELECT username FROM Users WHERE user_id = "+QString::number(currentUserId));
    if(query.next())username = query.value(0).toString();
    ui->balanceSb->setRange((db->select("balance", currentUserId)).toInt(), 1000000);
    balance = ui->balanceSb->value();
    if(db->updateBalance(balance, currentUserId)){
        QMessageBox::about(this, "Balance changed", username + ", your balance was changed successfully!");
    }
    else QMessageBox::warning(this, "Error", username + ", your balance wasn't changed.");
}


void MyAccount::on_logoutPb_clicked()
{
    MySqlDBManager* db = MySqlDBManager::getInstance();
    this->hide();
    Login openNext(db);
    openNext.setModal(true);
    openNext.exec();
}

void MyAccount::closeEvent(QCloseEvent *event)
{
    QDialog::closeEvent(event);
    emit closed();
}

