#include "insurancecompany.h"
#include "ui_insurancecompany.h"


InsuranceCompany::InsuranceCompany(int userId, QWidget *parent) :
    QDialog(parent),
    currentUserId(userId),
    ui(new Ui::InsuranceCompany)
{
    ui->setupUi(this);
    QStringList insuranceTables = {"AutoInsurance", "TravelInsurance", "GadgetInsurance"};
    MySqlDBManager *db = MySqlDBManager::getInstance();
    foreach (const QString &tableName, insuranceTables) {
        QSqlQuery query;
        query.prepare("SELECT * FROM " + tableName);
        if (query.exec()) {
            while (query.next()) {
                if(db->deleteExpiredInsuranceData(tableName)){

                }
            }
        }
    }

//    foreach (QString tableName, insuranceTables) {
//        QSqlQuery query;
//        query.prepare("SELECT * FROM " + tableName + " WHERE user_id = "+QString::number(currentUserId));
//        int i = 0;
//        if (query.exec()) {
//            while (query.next()) {
//                if(db->notificateExpiring(tableName, currentUserId)){
//                    i++;
//                    QMessageBox::warning(this, "Expiring insurance #" + QString::number(i), "Check out your insurances\nSome of them is expiring in less than 4 days!");
//                }
//            }
//        }
//    }

    QSet<QString> notifiedInsuranceTypes;
    QSet<int> notifiedInsurancePolicies;

    foreach (QString tableName, insuranceTables) {
        QSqlQuery query;
        query.prepare("SELECT * FROM " + tableName + " WHERE user_id = " + QString::number(currentUserId));

        if (query.exec()) {
            while (query.next()) {
                int policyId = query.value("insurancePolicy").toInt();

                if (db->notificateExpiring(tableName, currentUserId) &&
                    !notifiedInsuranceTypes.contains(tableName) &&
                    !notifiedInsurancePolicies.contains(policyId))
                {
                    notifiedInsuranceTypes.insert(tableName);
                    notifiedInsurancePolicies.insert(policyId);

                    QMessageBox::warning(this, "Expiring insurance", "Check out your " + tableName + " insurances\nSome of them are expiring in less than 5 days!");
                }
            }
        }
    }

    ui->welcomeLb->setText(QString("Hello, ")+db->select("name", currentUserId).at(0).toUpper()+db->select("name", currentUserId).mid(1).toLower());


    foreach (QPushButton *button, findChildren<QPushButton *>()) {
        button->setCursor(Qt::PointingHandCursor);
    }
}

void InsuranceCompany::onMarketClosed() {
    this->show();
}

InsuranceCompany::~InsuranceCompany()
{
    delete ui;
}

void InsuranceCompany::on_insuranceMarketPb_clicked()
{
    this->hide();
    Shop *openNext = new Shop(currentUserId);
    connect(openNext, &Shop::closed, this, &InsuranceCompany::onDialogClosed);
    openNext->setModal(true);
    openNext->exec();
}


void InsuranceCompany::on_managePoliciesPb_clicked()
{    
    this->hide();
    MyInsurances *openNext = new MyInsurances(currentUserId);
    connect(openNext, &MyInsurances::closed, this, &InsuranceCompany::onDialogClosed);
    openNext->setModal(true);
    openNext->exec();

}


void InsuranceCompany::on_insuranceEvents_clicked()
{
    this->hide();
    InsuranceEvents *openNext = new InsuranceEvents(currentUserId);
    connect(openNext, &InsuranceEvents::closed, this, &InsuranceCompany::onDialogClosed);
    openNext->setModal(true);
    openNext->exec();
}


void InsuranceCompany::on_accountPb_clicked()
{   
    this->hide();
    MyAccount *openNext = new MyAccount(currentUserId);
    connect(openNext, &MyAccount::closed, this, &InsuranceCompany::onDialogClosed);
    openNext->setModal(true);
    openNext->exec();
}


void InsuranceCompany::on_actionStorePb_clicked()
{
    InsuranceCompany::on_insuranceMarketPb_clicked();
}


void InsuranceCompany::on_actionEventsPb_clicked()
{
    InsuranceCompany::on_insuranceEvents_clicked();
}


void InsuranceCompany::on_actionManagePb_clicked()
{
    InsuranceCompany::on_managePoliciesPb_clicked();
}


void InsuranceCompany::on_actionAccountPb_clicked()
{
    InsuranceCompany::on_accountPb_clicked();
}

void InsuranceCompany::closeEvent(QCloseEvent *event)
{
    QDialog::closeEvent(event);
    emit closed();
}

void InsuranceCompany::onDialogClosed()
{
    show();
}

