#ifndef DBMANAGER_H
#define DBMANAGER_H

#include <QtSql/QSqlTableModel>
#include <QtSql/QSqlQuery>
#include <QVariantList>
#include <User.h>
#include "AutoInsurance.h"
#include "travelinsurance.h"
#include "gadgetinsurance.h"
#include <QSqlRelationalTableModel>
#include <QSqlRelation>
#include <QByteArray>
#include <QSqlQuery>

class DBManager
{
public:
    virtual void connectToDataBase() = 0;
    virtual QSqlDatabase getDB() = 0;
    virtual bool insertIntoTableUser(User& user) = 0;
    virtual bool insertIntoTableAuto(AutoInsurance& autoInsurance) = 0;
    virtual bool insertIntoTableTravel(TravelInsurance& travelInsurance, User &userInfo) = 0;
    virtual bool insertIntoTableGadget(GadgetInsurance& gadgetInsurance) = 0;
    virtual QSqlQuery sortTable(QString tableName, QString field, QString sortType, int userId) = 0;
    virtual QSqlQuery sortTable(QString tableName, QString field, QString sortType) = 0;
    virtual QSqlQuery findInTable(QString tableName, int userId, QString findField) = 0;
    virtual QSqlQuery findInTable(QString tableName, QString findField) = 0;
    virtual QSqlQuery findInTable(QString tableName, QString findField, QString byField) = 0;
    virtual QString select(QString selectField, int userId) = 0;
    virtual bool deleteExpiredInsuranceData(const QString &tableName) = 0;
    virtual bool updateBalance(int balance, int userId) = 0;
    virtual bool clearTable(const QString &tableName) = 0;
    virtual bool deleteInsurance(const QString &tableName, int insurancePolicyDelete) = 0;
    virtual bool deleteUser(int userId) = 0;
    virtual bool insertAdmin() = 0;
};

#endif // DBMANAGER_H
