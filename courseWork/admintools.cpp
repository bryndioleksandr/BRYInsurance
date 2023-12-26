#include "admintools.h"
#include "ui_admintools.h"


AdminTools::AdminTools(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::AdminTools)
{
    ui->setupUi(this);
    foreach (QPushButton *button, findChildren<QPushButton *>()) {
        button->setCursor(Qt::PointingHandCursor);
    }
}

AdminTools::~AdminTools()
{
    delete ui;
}

void AdminTools::on_checkInsurancesPb_clicked()
{
    tableName = ui->checkCb->currentText();
    this->hide();
    AllInsurances *openNext = new AllInsurances(tableName);
    connect(openNext, &AllInsurances::closed, this, &AdminTools::onDialogClosed);
    openNext->setModal(true);
    openNext->exec();

//    AllInsurances openNext(tableName);
//    openNext.setModal(true);
//    openNext.exec();

}


void AdminTools::on_clearTablesPb_clicked()
{
    MySqlDBManager *db = MySqlDBManager::getInstance();
    tableNameToDelete = ui->deleteCb->currentText();
    int result = QMessageBox::question(
        this,
        "Deleting "+tableNameToDelete,
        QString("Do you want to permanently delete all the data from "+tableNameToDelete+"?"),
        QMessageBox::Yes | QMessageBox::No
        );
    if(result == QMessageBox::Yes){
        try{
            if(db->clearTable(tableNameToDelete)){QMessageBox::information(this, "Deleting", tableNameToDelete + " has been deleted successfully!");}
        }catch(const std::exception &ex){
            qCritical()<<"Exception in: "<<ex.what();
        }
    }

}


void AdminTools::on_deleteUserPb_clicked()
{
    MySqlDBManager *db = MySqlDBManager::getInstance();
    userIdDelete = ui->userIdLn->text();
    int result = QMessageBox::question(
        this,
        "Removing user",
        QString("Do you want to permanently remove all the data about user?"),
        QMessageBox::Yes | QMessageBox::No
        );
    if(result == QMessageBox::Yes){
        try{
            if(db->deleteUser(userIdDelete.toInt())){QMessageBox::information(this, "Deleting", "User has been removed successfully!");}
            else QMessageBox::warning(this, "Deleting", "User probably is not found:(");
        }catch(const std::exception &ex){
            qCritical()<<"Exception in: "<<ex.what();
        }
    }
}

void AdminTools::closeEvent(QCloseEvent *event)
{
    QDialog::closeEvent(event);
    emit closed();
}

void AdminTools::onDialogClosed()
{
    show();
}

