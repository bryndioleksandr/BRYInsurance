#include "mysqldbmanager.h"

MySqlDBManager* MySqlDBManager::instance = nullptr;

MySqlDBManager::MySqlDBManager(){
}

MySqlDBManager* MySqlDBManager::getInstance()
{
    if(instance == nullptr){
        instance = new MySqlDBManager();
    }
    return instance;
}

void MySqlDBManager::connectToDataBase()
{
    try{
        if (QFile(DATABASE_NAME).exists()) this->openDataBase();
        else this->restoreDataBase();
    }catch(const std::exception &ex){throw;}
}

QSqlDatabase MySqlDBManager::getDB()
{
    return db;
}


bool MySqlDBManager::restoreDataBase()
{
    try {
        if (this->openDataBase()) {
            if (!this->createTables()) {
                return false;
            } else {
                return true;
            }
        } else {
            throw std::runtime_error("Failed to restore database");
        }
    } catch(const std::exception &ex) {
        throw;
    }
}

bool MySqlDBManager::openDataBase()
{
//    db = QSqlDatabase::addDatabase("QSQLITE");
//    db.setHostName(DATABASE_HOSTNAME);
//    db.setDatabaseName(DATABASE_NAME);
    db = QSqlDatabase::addDatabase("QMYSQL");
    db.setHostName(DATABASE_HOST_NAME);
    db.setPort(DATABASE_PORT);
    db.setDatabaseName(DATABASE_NAME);
    db.setUserName(DATABASE_USER_NAME);
    db.setPassword(DATABASE_PASSWORD);

    if (!db.isValid()) {
        qCritical() << "Недійсні параметри підключення до бази даних.";
        return false;
    }

    if (db.open()) {
        return true;
    } else {
        qCritical() << "Не вдалося відкрити базу даних:" << db.lastError().text();
            return false;
    }
}

void MySqlDBManager::closeDataBase()
{
    db.close();
}

bool MySqlDBManager::createTables()
{
    QSqlQuery queryAdmin, query, query2, queryTravel, queryGadget, queryDeletedAuto, queryDeletedTravel, queryDeletedGadget;
    bool success = true;

    if (!queryAdmin.exec("CREATE TABLE Administrator("
                    "admin_username TEXT NOT NULL, "
                    "admin_password TEXT NOT NULL "
                    " )"))
    {
            throw std::runtime_error("Error in creating Administrator");
            success = false;
    }

    if (!query.exec("CREATE TABLE " TABLE_USERS "("
                    "user_id INTEGER PRIMARY KEY AUTO_INCREMENT, "
                    "balance INTEGER, "
                    "username VARCHAR(255) NOT NULL, "
                    "question VARCHAR(255) NOT NULL, "
                    "answear VARCHAR(255) NOT NULL, "
                    "password VARCHAR(255) NOT NULL, "
                    "surname VARCHAR(255) NOT NULL, "
                    "name VARCHAR(255) NOT NULL, "
                    "phoneNumber VARCHAR(255) NOT NULL, "
                    "birthDate DATE, "
                    "passport VARCHAR(255), "
                    "email VARCHAR(255), "
                    "city VARCHAR(255)"
                    " )"))
    {
        throw std::runtime_error("Error in creating TABLE_USERS");
        success = false;
    }

    if (!query2.exec("CREATE TABLE AutoInsurance("
                     "user_id INTEGER, "
                     "insurancePolicy BIGINT, "
                     "autoType CHAR(50),"
                     "insuranceType CHAR(50), "
                     "coverageAmount INTEGER, "
                     "insurancePrice INTEGER, "
                     "autoNumber CHAR(50), "
                     "autoBrand CHAR(50), "
                     "autoModel CHAR(50), "
                     "cubicCapacity CHAR(20), "
                     "carryingCapacity CHAR(20), "
                     "motoCubic CHAR(20), "
                     "city CHAR(40), "
                     "num_of_passengers INTEGER, "
                     "trailer_for CHAR(20), "
                     "autoYear INTEGER, "
                     "autoPrice INTEGER, "
                     "start_date DATETIME, "
                     "end_date DATETIME, "
                     "FOREIGN KEY (user_id) REFERENCES Users(user_id) ON UPDATE CASCADE ON DELETE CASCADE"
                     " )"))
    {
        throw std::runtime_error("Error in creating AutoInsurance");
        success = false;
    }

    if (!queryGadget.exec("CREATE TABLE GadgetInsurance("
                          "user_id INTEGER, "
                          "insurancePolicy BIGINT, "
                          "phoneNumber CHAR(80),"
                          "gadgetBrand CHAR(80), "
                          "gadgetModel CHAR(80), "
                          "gadgetPrice INTEGER, "
                          "insuranceType CHAR(80), "
                          "coverageType CHAR(80), "
                          "insurancePrice INTEGER, "
                          "start_date DATE, "
                          "end_date DATE, "
                          "FOREIGN KEY (user_id) REFERENCES Users(user_id) ON UPDATE CASCADE ON DELETE CASCADE"
                          " )"))
    {
        throw std::runtime_error("Error in creating GadgetInsurance");
        success = false;
    }

    if(!queryTravel.exec("CREATE TABLE TravelInsurance("
                         "user_id INTEGER, "
                         "insurancePolicy BIGINT, "
                         "travel_direction CHAR(80),"
                         "travel_activities CHAR(80), "
                         "coverageAmount INTEGER, "
                         "insurancePrice INTEGER, "
                         "start_date DATE, "
                         "end_date DATE, "
                         "FOREIGN KEY (user_id) REFERENCES Users(user_id) ON UPDATE CASCADE ON DELETE CASCADE"
                         " )"))
    {
        throw std::runtime_error("Error in creating TravelInsurance");
        success = false;
    }



    if (!queryDeletedAuto.exec("CREATE TABLE DeletedAutoInsurance("
                     "user_id INTEGER, "
                     "insurancePolicy BIGINT, "
                     "autoType CHAR(50),"
                     "insuranceType CHAR(50), "
                     "coverageAmount INTEGER, "
                     "insurancePrice INTEGER, "
                     "autoNumber CHAR(50), "
                     "autoBrand CHAR(50), "
                     "autoModel CHAR(50), "
                     "cubicCapacity CHAR(20), "
                     "carryingCapacity CHAR(20), "
                     "motoCubic CHAR(20), "
                     "city CHAR(40), "
                     "num_of_passengers INTEGER, "
                     "trailer_for CHAR(20), "
                     "autoYear INTEGER, "
                     "autoPrice INTEGER, "
                     "start_date DATETIME, "
                     "end_date DATETIME, "
                     "FOREIGN KEY (user_id) REFERENCES Users(user_id) ON UPDATE CASCADE ON DELETE CASCADE"
                     " )"))
    {
        throw std::runtime_error("Error in creating DeletedAutoInsurance");
        success = false;
    }

    if (!queryDeletedGadget.exec("CREATE TABLE DeletedGadgetInsurance("
                          "user_id INTEGER, "
                          "insurancePolicy BIGINT, "
                          "phoneNumber CHAR(80),"
                          "gadgetBrand CHAR(80), "
                          "gadgetModel CHAR(80), "
                          "gadgetPrice INTEGER, "
                          "insuranceType CHAR(80), "
                          "coverageType CHAR(80), "
                          "insurancePrice INTEGER, "
                          "start_date DATE, "
                          "end_date DATE, "
                          "FOREIGN KEY (user_id) REFERENCES Users(user_id) ON UPDATE CASCADE ON DELETE CASCADE"
                          " )"))
    {
        throw std::runtime_error("Error in creating DeletedGadgetInsurance");
        success = false;
    }

    if(!queryDeletedTravel.exec("CREATE TABLE DeletedTravelInsurance("
                          "user_id INTEGER, "
                          "insurancePolicy BIGINT, "
                          "travel_direction CHAR(80),"
                          "travel_activities CHAR(80), "
                          "coverageAmount INTEGER, "
                          "insurancePrice INTEGER, "
                          "start_date DATE, "
                          "end_date DATE, "
                          "FOREIGN KEY (user_id) REFERENCES Users(user_id) ON UPDATE CASCADE ON DELETE CASCADE"
                          " )"))
    {
        throw std::runtime_error("Error in creating DeletedTravelInsurance");
        success = false;
    }



    return success;
}
bool MySqlDBManager::insertIntoTableUser(User& user)
{
    QSqlQuery query;
    qInfo() << TABLE_USERS<<" table\n";
    query.prepare("INSERT INTO " TABLE_USERS " ("
                  "balance, "
                  TABLE_USERNAME ", "
                  TABLE_QUESTION ", "
                  TABLE_ANSWEAR ", "
                  TABLE_PASSWORD ", "
                  "surname, "
                  "name, "
                  "phoneNumber) "
                  "VALUES(:balance, :username, :question, :answear, :password, :surname, :name, :phoneNumber)");
    query.bindValue(":balance", QString::number(user.getBalance()));
    query.bindValue(":username", QString::fromStdString(user.getUsername()));
    query.bindValue(":password", QString::fromStdString(user.getPassword()));
    query.bindValue(":question", QString::fromStdString(user.getQuestion()));
    query.bindValue(":answear", QString::fromStdString(user.getAnswear()));
    query.bindValue(":surname", QString::fromStdString(user.getSurname()));
    query.bindValue(":name", QString::fromStdString(user.getName()));
    query.bindValue(":phoneNumber", QString::fromStdString(user.getPhoneNumber()));

    if (!query.exec()) {
        throw std::runtime_error("Error inserting into Users` table");
        return false;
    } else
        return true;
}

bool MySqlDBManager::insertIntoTableAuto(AutoInsurance& insurance)
{
    QSqlQuery query;
    qInfo() <<"AutoInsurance table\n";
    query.prepare("INSERT INTO AutoInsurance(user_id, insurancePolicy, autoType, insuranceType, coverageAmount, insurancePrice, autoNumber, autoBrand, autoModel, cubicCapacity, carryingCapacity, motoCubic, city, num_of_passengers, trailer_for, autoPrice,  autoYear, start_date, end_date)VALUES(:user_id, :insurancePolicy, :autoType, :insuranceType, :coverageAmount, :insurancePrice, :autoNumber, :autoBrand, :autoModel, :cubicCapacity, :carryingCapacity, :motoCubic, :city, :num_of_passengers, :trailer_for, :autoPrice,  :autoYear,  :start_date, :end_date)");
    query.bindValue(":user_id", insurance.getUserId());
    query.bindValue(":insurancePolicy", insurance.getInsurancePolicy());
    query.bindValue(":autoType", QString::fromStdString(insurance.getAutoType()));
    query.bindValue(":insuranceType", QString::fromStdString(insurance.getInsuranceType()));
    query.bindValue(":coverageAmount", insurance.getCoverageAmount());
    query.bindValue(":insurancePrice",  insurance.getPrice());
    query.bindValue(":autoNumber", QString::fromStdString(insurance.getCarNumber()));
    query.bindValue(":autoBrand", QString::fromStdString(insurance.getCarBrand()));
    query.bindValue(":autoModel", QString::fromStdString(insurance.getCarModel()));
    query.bindValue(":cubicCapacity",  QString::fromStdString(insurance.getCarCubicCapacity()));
    query.bindValue(":carryingCapacity",  QString::fromStdString(insurance.getCarryingCapacity()));
    query.bindValue(":motoCubic",  QString::fromStdString(insurance.getMotoCubicCapacity()));
    query.bindValue(":city",  QString::fromStdString(insurance.getTechnicalPassport()));
    query.bindValue(":num_of_passengers", QString::fromStdString(insurance.getNumOfPassengers()));
    query.bindValue(":trailer_for",  QString::fromStdString(insurance.getTrailerFor()));
    query.bindValue(":autoPrice", insurance.getCarPrice());
    query.bindValue(":autoYear", insurance.getCarYear());
    query.bindValue(":start_date", (QDateTime::fromSecsSinceEpoch(insurance.getWarrantyStartDate())).toString("yyyy-MM-dd HH:mm:ss"));
    query.bindValue(":end_date",(QDateTime::fromSecsSinceEpoch(insurance.getWarrantyEndDate())).toString("yyyy-MM-dd HH:mm:ss"));
    if (!query.exec()) {
        throw std::runtime_error("Error inserting into Auto`s table");
        return false;
    } else
        return true;
}

bool MySqlDBManager::insertIntoTableTravel(TravelInsurance &travelInsurance, User &userInfo){
    QSqlQuery query, query2;
    qInfo() << "TravelInsurance table\n";
    try {
        query.prepare("INSERT INTO TravelInsurance(user_id, insurancePolicy, travel_direction, travel_activities, coverageAmount, insurancePrice, start_date, end_date)VALUES(:user_id, :insurancePolicy, :travel_direction, :travel_activities, :coverageAmount, :insurancePrice, date(:start_date), date(:end_date))");
        query.bindValue(":user_id", travelInsurance.getUserId());
        query.bindValue(":insurancePolicy", travelInsurance.getInsurancePolicy());
        query.bindValue(":travel_direction", QString::fromStdString(travelInsurance.getInsuranceType()));
        query.bindValue(":travel_activities", QString::fromStdString(travelInsurance.getTravelPurpose()));
        query.bindValue(":coverageAmount",  QString::fromStdString(travelInsurance.getCoverageAmount()));
        query.bindValue(":insurancePrice",  travelInsurance.getPrice());
        query.bindValue(":start_date", QDate::fromString(QString::fromStdString(travelInsurance.getWarrantyStartDate()), "ddd MMM d yyyy"));
        query.bindValue(":end_date", QDate::fromString(QString::fromStdString(travelInsurance.getWarrantyEndDate()), "ddd MMM d yyyy"));

        if (!query.exec()) {
            throw std::runtime_error("Error inserting into Travel's table");
        }

        query2.prepare("UPDATE Users SET birthDate = :birthDate, passport = :passport, email = :email, city = :city WHERE user_id = :user_id");
        query2.bindValue(":user_id", travelInsurance.getUserId());
        query2.bindValue(":birthDate", QDate::fromString(QString::fromStdString(userInfo.getBirthDate()), "dd.MM.yyyy"));
        query2.bindValue(":passport", QString::fromStdString(userInfo.getPassport()));
        query2.bindValue(":email", QString::fromStdString(userInfo.getEmail()));
        query2.bindValue(":city",  QString::fromStdString(userInfo.getCity()));

        if (!query2.exec()){
            throw std::runtime_error("Error updating User's table");
        }

        return true;
    } catch (const std::exception &ex) {
        qCritical() << "Exception in insertIntoTableTravel: " << ex.what();
        return false;
    }
}

bool MySqlDBManager::insertIntoTableGadget(GadgetInsurance &gadgetInsurance){
    QSqlQuery query;
    qInfo() << "GadgetInsurance table\n";
    query.prepare("INSERT INTO GadgetInsurance(user_id, insurancePolicy, phoneNumber, gadgetBrand, gadgetModel, gadgetPrice, insuranceType, coverageType, insurancePrice, start_date, end_date)VALUES(:user_id, :insurancePolicy, :phoneNumber, :gadgetBrand, :gadgetModel, :gadgetPrice, :insuranceType, :coverageType, :insurancePrice, :start_date, :end_date)");
    query.bindValue(":user_id", gadgetInsurance.getUserId());
    query.bindValue(":insurancePolicy", gadgetInsurance.getInsurancePolicy());
    query.bindValue(":phoneNumber", QString::fromStdString(gadgetInsurance.getPhoneInsuranceNumber()));
    query.bindValue(":gadgetBrand", QString::fromStdString(gadgetInsurance.getGadgetBrand()));
    query.bindValue(":gadgetModel", QString::fromStdString(gadgetInsurance.getGadgetModel()));
    query.bindValue(":gadgetPrice", QString::number(gadgetInsurance.getGadgetPrice()));
    query.bindValue(":insuranceType",  QString::fromStdString(gadgetInsurance.getInsuranceType()));
    query.bindValue(":coverageType", QString::fromStdString(gadgetInsurance.getCoverageType()));
    query.bindValue(":insurancePrice", gadgetInsurance.getInsurancePrice());
    query.bindValue(":start_date", QDate::fromString(QString::fromStdString(gadgetInsurance.getWarrantyStartDate())));
    query.bindValue(":end_date",   QDate::fromString(QString::fromStdString(gadgetInsurance.getWarrantyEndDate())));
    if (!query.exec()) {
        throw std::runtime_error("Error inserting into Gadget`s table");
        return false;
    } else
        return true;
}


QSqlQuery MySqlDBManager::sortTable(QString tableName, QString field, QString sortType, int userId){
    QSqlQuery query;
    qInfo()<<"Sorting table "<<tableName;

    query.prepare("SELECT * FROM "+tableName+" WHERE user_id = "+QString::number(userId)+" ORDER BY "+field+" "+sortType+";");
    if (!query.exec()) {
        throw std::runtime_error("Error in sorting table");
    } else
        return query;
}

bool MySqlDBManager::deleteUser(int userId){
    QSqlQuery query;
    qInfo() << "Deleting user #" << userId;
    query.prepare("DELETE FROM Users WHERE user_id = "+QString::number(userId));
    if (!query.exec()) {
        throw std::runtime_error("Error in deleting user");
        return false;
    } else
        return true;
}

QSqlQuery MySqlDBManager::findInTable(QString tableName, int userId, QString findField) {
    QSqlQuery query;
    qInfo() << "Finding in table " << tableName;

    if (tableName == "AutoInsurance" || tableName == "DeletedAutoInsurance") {
        query.prepare("SELECT * FROM " + tableName +
                      " WHERE user_id = :userId AND (insurancePolicy LIKE :findField OR autoType LIKE :findField OR insuranceType LIKE :findField OR coverageAmount LIKE :findField OR insurancePrice LIKE :findField OR autoNumber LIKE :findField OR autoBrand LIKE :findField OR autoModel LIKE :findField OR cubicCapacity LIKE :findField OR carryingCapacity LIKE :findField OR motoCubic LIKE :findField OR city LIKE :findField OR num_of_passengers LIKE :findField OR trailer_for LIKE :findField OR autoPrice LIKE :findField OR autoYear LIKE :findField OR start_date LIKE :findField OR end_date LIKE :findField)");

        query.bindValue(":userId", userId);
        query.bindValue(":findField", "%" + findField + "%");

        if (!query.exec()) {
            throw std::runtime_error("Error in finding");
        } else {
            return query;
        }
    } else if (tableName == "TravelInsurance" || tableName == "DeletedTravelInsurance") {
        query.prepare("SELECT * FROM " + tableName +
                      " WHERE user_id = :userId AND (insurancePolicy LIKE :findField OR travel_direction LIKE :findField OR travel_activities LIKE :findField OR coverageAmount LIKE :findField OR insurancePrice LIKE :findField OR start_date LIKE :findField OR end_date LIKE :findField)");

        query.bindValue(":userId", userId);
        query.bindValue(":findField", "%" + findField + "%");

        if (!query.exec()) {
            throw std::runtime_error("Error in finding");
        } else {
            return query;
        }
    } else if (tableName == "GadgetInsurance" || tableName == "DeletedGadgetInsurance") {
        query.prepare("SELECT * FROM " + tableName +
                      " WHERE user_id = :userId AND (insurancePolicy LIKE :findField OR phoneNumber LIKE :findField OR gadgetBrand LIKE :findField OR gadgetModel LIKE :findField OR gadgetPrice LIKE :findField OR insuranceType LIKE :findField OR coverageType LIKE :findField OR insurancePrice LIKE :findField OR start_date LIKE :findField OR end_date LIKE :findField)");

        query.bindValue(":userId", userId);
        query.bindValue(":findField", "%" + findField + "%");

        if (!query.exec()) {
            throw std::runtime_error("Error in finding");
        } else {
            return query;
        }
    }
}

QString MySqlDBManager::select(QString selectField, int userId){
    QString queryStr = QString("SELECT %1 FROM Users WHERE user_id = '%2';")
                           .arg(selectField)
                           .arg(userId);
    QSqlQuery query;
    query.prepare(queryStr);
    if (query.exec()) {
        if (query.next()) {
            QString value = query.value(0).toString();
            return value;
        }
        else return "undefined";
    }

}

bool MySqlDBManager::updateBalance(int balance, int userId){
    QString queryStr = QString("UPDATE Users SET balance = '%1' WHERE user_id = '%2'")
                           .arg(balance)
                           .arg(userId);
    QSqlQuery query;
    query.prepare(queryStr);
    if(query.exec() && query.numRowsAffected() > 0){
        return true;
    }
    else {
        return false;
    }
}

bool MySqlDBManager::insertAdmin(){
    QSqlQuery query;
    qInfo() << "Admin table\n";

    QByteArray bytesUsername = QCryptographicHash::hash(QByteArray(ADMIN_USERNAME), QCryptographicHash::Sha256);
    QString hashedUsername = QString(bytesUsername.toHex());

    QByteArray bytesPassword = QCryptographicHash::hash(QByteArray(ADMIN_PASSWORD), QCryptographicHash::Sha256);
    QString hashedPassword= QString(bytesPassword.toHex());
    qInfo()<<"Username: "<<hashedUsername<<"\n";
    qInfo()<<"Password: "<<hashedPassword;

    query.prepare("INSERT INTO Administrator(admin_username, admin_password)VALUES(:admin_username, :admin_password)");
    query.bindValue(":admin_username", hashedUsername);
    query.bindValue(":admin_password", hashedPassword);

    if (!query.exec()) {
        throw std::runtime_error("Error inserting into Admin`s table");
    } else
        return true;
}

QSqlQuery MySqlDBManager::sortTable(QString tableName, QString field, QString sortType){
    QSqlQuery query;
    qInfo()<<"Sorting table "<<tableName;

    query.prepare("SELECT * FROM "+tableName+" ORDER BY "+field+" "+sortType+";");
    if (!query.exec()) {
        throw std::runtime_error("Error in sorting table");
    } else
        return query;
}

QSqlQuery MySqlDBManager::findInTable(QString tableName, QString findField){
    QSqlQuery query;
    qInfo() << "Finding in table " << tableName;

    if(tableName == "Users"){
        query.prepare("SELECT * FROM " + tableName +
                      " WHERE user_id LIKE :findField OR balance LIKE :findField OR question LIKE :findField OR answear LIKE :findField OR username LIKE :findField OR surname LIKE :findField OR name LIKE :findField OR phoneNumber LIKE :findField;");

        query.bindValue(":findField", "%" + findField + "%");

        if (!query.exec()) {
            throw std::runtime_error("Error in finding");
        } else {
            return query;
        }
    }

    else if (tableName == "AutoInsurance" || tableName == "DeletedAutoInsurance") {
        query.prepare("SELECT * FROM " + tableName +
                      " WHERE user_id LIKE :findField OR insurancePolicy LIKE :findField OR autoType LIKE :findField OR insuranceType LIKE :findField OR coverageAmount LIKE :findField OR insurancePrice LIKE :findField OR autoNumber LIKE :findField OR autoBrand LIKE :findField OR autoModel LIKE :findField OR cubicCapacity LIKE :findField OR carryingCapacity LIKE :findField OR motoCubic LIKE :findField OR city LIKE :findField OR num_of_passengers LIKE :findField OR trailer_for LIKE :findField OR autoPrice LIKE :findField OR autoYear LIKE :findField OR start_date LIKE :findField OR end_date LIKE :findField");

        query.bindValue(":findField", "%" + findField + "%");

        if (!query.exec()) {
            throw std::runtime_error("Error in finding");
        } else {
            return query;
        }
    } else if (tableName == "TravelInsurance" || tableName == "DeletedTravelInsurance") {
        query.prepare("SELECT * FROM " + tableName +
                      " WHERE user_id LIKE :findField OR insurancePolicy LIKE :findField OR travel_direction LIKE :findField OR travel_activities LIKE :findField OR coverageAmount LIKE :findField OR insurancePrice LIKE :findField OR start_date LIKE :findField OR end_date LIKE :findField");

        query.bindValue(":findField", "%" + findField + "%");

        if (!query.exec()) {
            throw std::runtime_error("Error in finding");
        } else {
            return query;
        }
    } else if (tableName == "GadgetInsurance" || tableName == "DeletedGadgetInsurance") {
        query.prepare("SELECT * FROM " + tableName +
                      " WHERE user_id LIKE :findField OR insurancePolicy LIKE :findField OR phoneNumber LIKE :findField OR gadgetBrand LIKE :findField OR gadgetModel LIKE :findField OR gadgetPrice LIKE :findField OR insuranceType LIKE :findField OR coverageType LIKE :findField OR insurancePrice LIKE :findField OR start_date LIKE :findField OR end_date LIKE :findField");

        query.bindValue(":findField", "%" + findField + "%");

        if (!query.exec()) {
            throw std::runtime_error("Error in finding");
        } else {
            return query;
        }
    }
}


QSqlQuery MySqlDBManager::findInTable(QString tableName, QString findField, QString byField) {
    QSqlQuery query;
    qInfo() << "Sorting table " << tableName;
    if (tableName == "Users") {
        if (byField == "user_id") {
            query.prepare("SELECT * FROM " + tableName + " WHERE user_id LIKE :findField;");
            query.bindValue(":findField", "%" + findField + "%");
        } else if (byField == "balance") {
            query.prepare("SELECT * FROM " + tableName + " WHERE balance LIKE :findField;");
            query.bindValue(":findField", "%" + findField + "%");
        } else if (byField == "username") {
            query.prepare("SELECT * FROM " + tableName + " WHERE username LIKE :findField;");
            query.bindValue(":findField", "%" + findField + "%");
        } else if (byField == "surname") {
            query.prepare("SELECT * FROM " + tableName + " WHERE surname LIKE :findField;");
            query.bindValue(":findField", "%" + findField + "%");
        } else if (byField == "name") {
            query.prepare("SELECT * FROM " + tableName + " WHERE name LIKE :findField;");
            query.bindValue(":findField", "%" + findField + "%");
        } else if (byField == "phoneNumber") {
            query.prepare("SELECT * FROM " + tableName + " WHERE phoneNumber LIKE :findField;");
            query.bindValue(":findField", "%" + findField + "%");
        }

        if (!query.exec()) {
            throw std::runtime_error("Error in finding");
        } else {
            return query;
        }
    } else if (tableName == "AutoInsurance" || tableName == "DeletedAutoInsurance") {
        if (byField == "user_id") {
            query.prepare("SELECT * FROM " + tableName + " WHERE user_id LIKE :findField;");
            query.bindValue(":findField", "%" + findField + "%");
        } else if (byField == "insurancePolicy") {
            query.prepare("SELECT * FROM " + tableName + " WHERE insurancePolicy LIKE :findField;");
            query.bindValue(":findField", "%" + findField + "%");
        } else if (byField == "autoType") {
            query.prepare("SELECT * FROM " + tableName + " WHERE autoType LIKE :findField;");
            query.bindValue(":findField", "%" + findField + "%");
        } else if (byField == "insuranceType") {
            query.prepare("SELECT * FROM " + tableName + " WHERE insuranceType LIKE :findField;");
            query.bindValue(":findField", "%" + findField + "%");
        } else if (byField == "coverageAmount") {
            query.prepare("SELECT * FROM " + tableName + " WHERE coverageAmount LIKE :findField;");
            query.bindValue(":findField", "%" + findField + "%");
        } else if (byField == "autoNumber") {
            query.prepare("SELECT * FROM " + tableName + " WHERE autoNumber LIKE :findField;");
            query.bindValue(":findField", "%" + findField + "%");
        } else if (byField == "autoBrand") {
            query.prepare("SELECT * FROM " + tableName + " WHERE autoBrand LIKE :findField;");
            query.bindValue(":findField", "%" + findField + "%");
        } else if (byField == "autoModel") {
            query.prepare("SELECT * FROM " + tableName + " WHERE autoModel LIKE :findField;");
            query.bindValue(":findField", "%" + findField + "%");
        } else if (byField == "city") {
            query.prepare("SELECT * FROM " + tableName + " WHERE city LIKE :findField;");
            query.bindValue(":findField", "%" + findField + "%");
        } else if (byField == "autoYear") {
            query.prepare("SELECT * FROM " + tableName + " WHERE autoYear LIKE :findField;");
            query.bindValue(":findField", "%" + findField + "%");
        }

        if (!query.exec()) {
            throw std::runtime_error("Error in finding");
        } else {
            return query;
        }
    } else if (tableName == "TravelInsurance" || tableName == "DeletedTravelInsurance") {
        if (byField == "user_id") {
            query.prepare("SELECT * FROM " + tableName + " WHERE user_id LIKE :findField;");
            query.bindValue(":findField", "%" + findField + "%");
        } else if (byField == "insurancePolicy") {
            query.prepare("SELECT * FROM " + tableName + " WHERE insurancePolicy LIKE :findField;");
            query.bindValue(":findField", "%" + findField + "%");
        } else if (byField == "travel_direction") {
            query.prepare("SELECT * FROM " + tableName + " WHERE travel_direction LIKE :findField;");
            query.bindValue(":findField", "%" + findField + "%");
        } else if (byField == "travel_activities") {
            query.prepare("SELECT * FROM " + tableName + " WHERE travel_activities LIKE :findField;");
            query.bindValue(":findField", "%" + findField + "%");
        } else if (byField == "coverageAmount") {
            query.prepare("SELECT * FROM " + tableName + " WHERE coverageAmount LIKE :findField;");
            query.bindValue(":findField", "%" + findField + "%");
        } else if (byField == "insurancePrice") {
            query.prepare("SELECT * FROM " + tableName + " WHERE insurancePrice LIKE :findField;");
            query.bindValue(":findField", "%" + findField + "%");
        }

        if (!query.exec()) {
            throw std::runtime_error("Error in finding");
        } else {
            return query;
        }
    } else if (tableName == "GadgetInsurance" || tableName == "DeletedGadgetInsurance") {
        if (byField == "user_id") {
            query.prepare("SELECT * FROM " + tableName + " WHERE user_id LIKE :findField;");
            query.bindValue(":findField", "%" + findField + "%");
        } else if (byField == "insurancePolicy") {
            query.prepare("SELECT * FROM " + tableName + " WHERE insurancePolicy LIKE :findField;");
            query.bindValue(":findField", "%" + findField + "%");
        } else if (byField == "phoneNumber") {
            query.prepare("SELECT * FROM " + tableName + " WHERE phoneNumber LIKE :findField;");
            query.bindValue(":findField", "%" + findField + "%");
        } else if (byField == "gadgetBrand") {
            query.prepare("SELECT * FROM " + tableName + " WHERE gadgetBrand LIKE :findField;");
            query.bindValue(":findField", "%" + findField + "%");
        } else if (byField == "gadgetModel") {
            query.prepare("SELECT * FROM " + tableName + " WHERE gadgetModel LIKE :findField;");
            query.bindValue(":findField", "%" + findField + "%");
        } else if (byField == "gadgetPrice") {
            query.prepare("SELECT * FROM " + tableName + " WHERE gadgetPrice LIKE :findField;");
            query.bindValue(":findField", "%" + findField + "%");
        } else if (byField == "coverageType") {
            query.prepare("SELECT * FROM " + tableName + " WHERE coverageType LIKE :findField;");
            query.bindValue(":findField", "%" + findField + "%");
        }

        if (!query.exec()) {
            throw std::runtime_error("Error in finding");
        } else {
            return query;
        }
    }

}

bool MySqlDBManager::deleteExpiredInsuranceData(const QString &tableName) {


    QString autoType, insuranceType, autoNumber, autoBrand, autoModel, cubicCapacity, carryingCapacity, motoCubic, city, numOfPassengers, trailer_for, startAuto;
    QString phoneNumberGadget, gadgetBrand, gadgetModel, insuranceTypeGadget, coverageType, startGadget;
    QString travelActivity, travelDirection, coverageAmountTravel, startTravel;
    int insurancePolicy, autoYear, autoPrice, coverageAmount, priceAutoIns, priceGadgetIns, priceTravelIns, userId;
    QDate endTravel, endGadget;
    time_t endAuto;

    QSqlQuery selectQuery;
    selectQuery.prepare(QString("SELECT * FROM %1 WHERE ((julianday(end_date) - julianday('now')) < 0);").arg(tableName));
    if (selectQuery.exec() && selectQuery.next()) {
        if(tableName == "AutoInsurance"){
            userId = selectQuery.value("user_id").toInt();
            autoType = selectQuery.value("autoType").toString();
            insuranceType = selectQuery.value("insuranceType").toString();
            autoNumber = selectQuery.value("autoNumber").toString();
            autoBrand = selectQuery.value("autoBrand").toString();
            autoModel = selectQuery.value("autoModel").toString();
            cubicCapacity = selectQuery.value("cubicCapacity").toString();
            carryingCapacity = selectQuery.value("carryingCapacity").toString();
            motoCubic = selectQuery.value("motoCubic").toString();
            city = selectQuery.value("city").toString();
            autoYear = selectQuery.value("autoYear").toInt();
            autoPrice = selectQuery.value("autoPrice").toInt();
            coverageAmount = selectQuery.value("coverageAmount").toInt();
            priceAutoIns = selectQuery.value("insurancePrice").toInt();
            insurancePolicy = selectQuery.value("insurancePolicy").toInt();
            numOfPassengers = selectQuery.value("num_of_passengers").toString();
            trailer_for = selectQuery.value("trailer_for").toString();
            startAuto = selectQuery.value("start_date").toString();
        }
        else if(tableName == "TravelInsurance"){
            userId = selectQuery.value("user_id").toInt();
            travelActivity = selectQuery.value("travel_activities").toString();
            insurancePolicy = selectQuery.value("insurancePolicy").toInt();
            travelDirection = selectQuery.value("travel_direction").toString();
            coverageAmountTravel = selectQuery.value("coverageAmount").toString();
            priceTravelIns = selectQuery.value("insurancePrice").toInt();
            startTravel = selectQuery.value("start_date").toString();
            endTravel = QDate::currentDate();
        }

        else if(tableName == "GadgetInsurance"){
            userId = selectQuery.value("user_id").toInt();
            phoneNumberGadget = selectQuery.value("phoneNumber").toString();
            gadgetBrand = selectQuery.value("gadgetBrand").toString();
            gadgetModel = selectQuery.value("gadgetModel").toString();
            insuranceTypeGadget = selectQuery.value("insuranceType").toString();
            coverageType = selectQuery.value("coverageType").toString();
            priceGadgetIns = selectQuery.value("insurancePrice").toInt();
            startGadget = selectQuery.value("start_date").toString();
            endGadget = QDate::currentDate();
            insurancePolicy = selectQuery.value("insurancePolicy").toInt();
        }




        QSqlQuery query;

        query.prepare("DELETE FROM " + tableName + " WHERE ((julianday(end_date) - julianday('now')) < 0);");
            if (query.exec()) {
                QSqlQuery queryDeletedAuto, queryDeletedTravel, queryDeletedGadget;
                if (tableName == "AutoInsurance") {
                    queryDeletedAuto.prepare("INSERT INTO DeletedAutoInsurance (user_id, insurancePolicy, autoType, insuranceType, autoNumber, autoBrand, autoModel, cubicCapacity, carryingCapacity, motoCubic, city, autoYear, autoPrice, coverageAmount, insurancePrice, num_of_passengers, trailer_for, start_date, end_date) "
                                             "VALUES (:user_id, :insurancePolicy, :autoType, :insuranceType, :autoNumber, :autoBrand, :autoModel, :cubicCapacity, :carryingCapacity, :motoCubic, :city, :autoYear, :autoPrice, :coverageAmount, :insurancePrice, :num_of_passengers, :trailer_for, :start_date, datetime(:end_date, 'unixepoch'))");

                    queryDeletedAuto.bindValue(":user_id", userId);
                    queryDeletedAuto.bindValue(":insurancePolicy", insurancePolicy);
                    queryDeletedAuto.bindValue(":autoType", autoType);
                    queryDeletedAuto.bindValue(":insuranceType", insuranceType);
                    queryDeletedAuto.bindValue(":autoNumber",autoNumber);
                    queryDeletedAuto.bindValue(":autoBrand",autoBrand);
                    queryDeletedAuto.bindValue(":autoModel", autoModel);
                    queryDeletedAuto.bindValue(":cubicCapacity", cubicCapacity);
                    queryDeletedAuto.bindValue(":carryingCapacity", carryingCapacity);
                    queryDeletedAuto.bindValue(":motoCubic",motoCubic);
                    queryDeletedAuto.bindValue(":city", city);
                    queryDeletedAuto.bindValue(":autoYear", autoYear);
                    queryDeletedAuto.bindValue(":autoPrice", autoPrice);
                    queryDeletedAuto.bindValue(":coverageAmount", coverageAmount);
                    queryDeletedAuto.bindValue(":insurancePrice", priceAutoIns);
                    queryDeletedAuto.bindValue(":num_of_passengers", numOfPassengers);
                    queryDeletedAuto.bindValue(":trailer_for", trailer_for);
                    queryDeletedAuto.bindValue(":start_date", startAuto);
                    queryDeletedAuto.bindValue(":end_date", time(&endAuto));

                    if (queryDeletedAuto.exec()) {
                    }
                    else {
                        throw std::runtime_error("Error in deleting expired insurance");
                    }
                }
                else if (tableName == "TravelInsurance") {
                    queryDeletedTravel.prepare("INSERT INTO DeletedTravelInsurance (user_id, insurancePolicy, travel_activities, travel_direction, coverageAmount, insurancePrice, start_date, end_date) "
                                               "VALUES (:user_id, :insurancePolicy, :travel_activities, :travel_direction, :coverageAmount, :insurancePrice, :start_date, :end_date)");

                    queryDeletedTravel.bindValue(":user_id", userId);
                    queryDeletedTravel.bindValue(":insurancePolicy", insurancePolicy);
                    queryDeletedTravel.bindValue(":travel_activities", travelActivity);
                    queryDeletedTravel.bindValue(":travel_direction", travelDirection);
                    queryDeletedTravel.bindValue(":coverageAmount", coverageAmountTravel);
                    queryDeletedTravel.bindValue(":insurancePrice", priceTravelIns);
                    queryDeletedTravel.bindValue(":start_date",  QDate::fromString(startTravel));
                    queryDeletedTravel.bindValue(":end_date",  endTravel);

                    if (queryDeletedTravel.exec()) {
                    } else {
                        throw std::runtime_error("Error in deleting expired insurance");
                    }
                }

                else if (tableName == "GadgetInsurance") {
                    queryDeletedGadget.prepare("INSERT INTO DeletedGadgetInsurance (user_id, insurancePolicy, phoneNumber, gadgetBrand, gadgetModel, insuranceType, coverageType, insurancePrice, start_date, end_date) "
                                               "VALUES (:user_id, :insurancePolicy, :phoneNumber, :gadgetBrand, :gadgetModel, :insuranceType, :coverageType, :insurancePrice, :start_date, :end_date)");
                    queryDeletedGadget.bindValue(":user_id", userId);
                    queryDeletedGadget.bindValue(":insurancePolicy", insurancePolicy);
                    queryDeletedGadget.bindValue(":phoneNumber", phoneNumberGadget);
                    queryDeletedGadget.bindValue(":gadgetBrand", gadgetBrand);
                    queryDeletedGadget.bindValue(":gadgetModel", gadgetModel);
                    queryDeletedGadget.bindValue(":insuranceType", insuranceTypeGadget);
                    queryDeletedGadget.bindValue(":coverageType", coverageType);
                    queryDeletedGadget.bindValue(":insurancePrice", priceGadgetIns);
                    queryDeletedGadget.bindValue(":start_date",  QDate::fromString(startGadget));
                    queryDeletedGadget.bindValue(":end_date", endGadget);

                    if (queryDeletedGadget.exec()) {
                    } else {
                       throw std::runtime_error("Error in deleting expired insurance");
                    }
                }

}
            return true;
    }
    }


bool MySqlDBManager::clearTable(const QString &tableName){
    QSqlQuery query;
    query.prepare("DELETE FROM " + tableName);
    if (!query.exec()) {
            throw std::runtime_error("Error in deleting table "+tableName.toStdString());
    }
    else {
            return true;
    }
}

bool MySqlDBManager::deleteInsurance(const QString &tableName, int insurancePolicyDelete){
    QSqlQuery query;
    query.prepare("DELETE FROM " + tableName + " WHERE insurancePolicy = "+QString::number(insurancePolicyDelete));
    if (!query.exec()) {
            throw std::runtime_error("Error in deleting table "+tableName.toStdString());
    }
    else {
            return true;
    }
}




