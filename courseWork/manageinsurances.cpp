#include "manageinsurances.h"
#include "ui_manageinsurances.h"


ManageInsurances::ManageInsurances(QString tableName, int insurancePolicy, QWidget *parent) :
    QDialog(parent),
    tableName(tableName),
    insurancePolicy(insurancePolicy),
    ui(new Ui::ManageInsurances)
{
    ui->setupUi(this);
    foreach (QPushButton *button, findChildren<QPushButton *>()) {
        button->setCursor(Qt::PointingHandCursor);
    }
}

ManageInsurances::~ManageInsurances()
{
    delete ui;
}


void ManageInsurances::on_deletePb_clicked()
{
    QSqlQuery selectQuery;
    selectQuery.prepare(QString("SELECT * FROM %1 WHERE insurancePolicy = :insurancePolicy").arg(tableName));
    selectQuery.bindValue(":insurancePolicy", insurancePolicy);
    if (selectQuery.exec() && selectQuery.next()) {
        // Взяти дані перед видаленням
        //auto:
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
            // Отримати дані для TravelInsurance
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
            // Отримати дані для GadgetInsurance
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


        QSqlQuery deleteQuery;
        deleteQuery.prepare(QString("DELETE FROM %1 WHERE insurancePolicy = :insurancePolicy").arg(tableName));
        deleteQuery.bindValue(":insurancePolicy", insurancePolicy);
        if (deleteQuery.exec()) {
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
                } else {
                    qWarning() << "Failed to execute queryDeletedAuto:" << queryDeletedAuto.lastError().text();
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
                    qWarning() << "Failed to execute queryDeletedTravel:" << queryDeletedTravel.lastError().text();
                }
            }

            // Перевірка, чи обрано таблицю GadgetInsurance
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

                // Виконання запиту
                if (queryDeletedGadget.exec()) {
                    qDebug()<<"Inserting in delete gadget successfully";
                } else {
                    // Помилка виконання запиту
                    qWarning() << "Failed to execute queryDeletedGadget:" << queryDeletedGadget.lastError().text();
                }
            }

}
    }
}

void ManageInsurances::setAutoInsurance(AutoInsurance &insurance){
    autoInsurance = insurance;
}

void ManageInsurances::setTravelInsurance(TravelInsurance &insurance){
    travelInsurance = insurance;
}

void ManageInsurances::setGadgetInsurance(GadgetInsurance &insurance){
    gadgetInsurance = insurance;
}

void ManageInsurances::setUser(User &user){
    this->user = user;
}

void ManageInsurances::on_downloadPb_clicked()
{
    QString folderPath = "C:/Insurances/";  // Встановіть шлях до вашої папки
    QString fileName = QString::number(insurancePolicy)+".pdf";  // Встановіть ім'я вашого PDF-файлу

    // Перевіряємо, чи папка і файл існують
    QDir folder(folderPath);
    if (folder.exists()) {
QString filePath = folder.filePath(fileName);

QFile file(filePath);
if (file.exists()) {
            // Відкриваємо файл за допомогою стандартного переглядача PDF
            QDesktopServices::openUrl(QUrl::fromLocalFile(filePath));
} else {
            qDebug() << "Файл не існує:" << filePath;
}
    } else {
qDebug() << "Папка не існує:" << folderPath;
    }
}

void ManageInsurances::closeEvent(QCloseEvent *event)
{
    QDialog::closeEvent(event);
    emit closed();
}

