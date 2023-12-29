#ifndef DATABASE_H
#define DATABASE_H

#include <QtSql/QSqlTableModel>
#include <QVariantList>
#include <QObject>
#include <QtSql/QSqlQuery>
#include <QtSql/QSqlError>
#include <QFile>
#include <QDate>
#include <QCryptographicHash>
#include <QDebug>

#include <dbmanager.h>

//#define DATABASE_HOSTNAME   "localname"
//#define DATABASE_NAME       "DataBase.sqlite"

#define DATABASE_HOST_NAME  "127.0.0.1"
#define DATABASE_PORT       3306
#define DATABASE_NAME       "BRY_Insurance"
#define DATABASE_USER_NAME  "root"
#define DATABASE_PASSWORD   "Bryndio7&11"

#define TABLE_USERS                 "Users"
#define TABLE_USERNAME "username"
#define TABLE_PASSWORD "password"
#define TABLE_QUESTION "question"
#define TABLE_ANSWEAR "answear"
#define ADMIN_USERNAME "0680970382"
#define ADMIN_PASSWORD "admin_bryndio"

class MySqlDBManager : public DBManager {

public:
    static MySqlDBManager* getInstance();

    void connectToDataBase();
    QSqlDatabase getDB();
    bool insertIntoTableUser(User& user);
    bool insertIntoTableAuto(AutoInsurance& autoInsurance);
    bool insertIntoTableTravel(TravelInsurance& travelInsurance, User &userInfo);
    bool insertIntoTableGadget(GadgetInsurance& gadgetInsurance);
    QSqlQuery sortTable(QString tableName, QString field, QString sortType, int userId);
    QSqlQuery sortTable(QString tableName, QString field, QString sortType);
    QSqlQuery findInTable(QString tableName, QString findField);
    QSqlQuery findInTable(QString tableName, int userId, QString findField);
    QSqlQuery findInTable(QString tableName, QString findField, QString byField);
    bool deleteExpiredInsuranceData(const QString &tableName);
    bool deleteUser(int userId);
    bool updateBalance(int balance, int userId);
    QString select(QString selectField, int userId);
    bool notificateExpiring(QString tableName, int userId);
    bool insertAdmin();
    bool deleteInsurance(const QString &tableName, int insurancePolicyDelete);
    bool clearTable(const QString &tableName);

private:
    QSqlDatabase db;
    static MySqlDBManager* instance;
    MySqlDBManager();
    bool openDataBase();
    bool restoreDataBase();
    void closeDataBase();
    bool createTables();
};



#endif // DATABASE_H
