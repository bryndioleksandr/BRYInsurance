#include "myinsurances.h"
#include "ui_myinsurances.h"


MyInsurances::MyInsurances(int userId, QWidget *parent) :
    QDialog(parent),
    currentUserId(userId),
    ui(new Ui::MyInsurances)
{
    ui->setupUi(this);
    QVBoxLayout* vehicle = new QVBoxLayout(ui->scrollAreaWidgetContents_2);
    QVBoxLayout* travel = new QVBoxLayout(ui->scrollAreaWidgetContents_3);
    QVBoxLayout* gadget = new QVBoxLayout(ui->scrollAreaWidgetContents_4);
    addInsuranceType("AutoInsurance", "autoType", vehicle);
    addInsuranceType("TravelInsurance", "travel_direction", travel);
    addInsuranceType("GadgetInsurance", "gadgetBrand", gadget);
    ui->scrollArea->setWidgetResizable(true);
    foreach (QPushButton *button, findChildren<QPushButton *>()) {
        button->setCursor(Qt::PointingHandCursor);
    }

}
void MyInsurances::addInsuranceType(QString tableName, QString typeName, QVBoxLayout* layout)
{
    QSqlQuery query;
    int i = 1;
    query.prepare(QString("SELECT * FROM %1 WHERE user_id = :userId").arg(tableName));
    query.bindValue(":userId", currentUserId);

    if (query.exec()) {
        while (query.next()) {
            typeGroupBox = new QGroupBox(tableName +" №"+ QString::number(i));

            typeLayout = new QVBoxLayout(typeGroupBox);
            QVBoxLayout* buttonsLayout = new QVBoxLayout;

            QString insuranceType = query.value(typeName).toString();
            int insurancePolicy = query.value("insurancePolicy").toInt();
            QString startDate = query.value("start_date").toString();
            QString endDate = query.value("end_date").toString();

            QLabel* policyLabel = new QLabel("Insurance policy: " + QString::number(insurancePolicy));
            QLabel* typeLabel = new QLabel(typeName + ": " + insuranceType);
            QLabel* startLabel = new QLabel("Warranty start date: " + startDate);
            QLabel* endLabel = new QLabel("Warranty end date: " + endDate);

            typeLayout->addWidget(policyLabel);
            typeLayout->addWidget(typeLabel);
            typeLayout->addWidget(startLabel);
            typeLayout->addWidget(endLabel);
            typeLayout->addLayout(buttonsLayout);
            QSpacerItem *horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);
            buttonsLayout->addItem(horizontalSpacer);

            QPushButton* openReceiptButton = new QPushButton("Check out receipt", this);
            QPushButton* deleteInsuranceButton = new QPushButton("Delete Insurance", this);
            buttonsLayout->addWidget(openReceiptButton);
            buttonsLayout->addWidget(deleteInsuranceButton);
            connect(openReceiptButton, &QPushButton::clicked, [this, tableName, insurancePolicy]() {
                on_downloadPb_clicked(tableName, insurancePolicy);
            });
            connect(deleteInsuranceButton, &QPushButton::clicked, [this, tableName, insurancePolicy]() {
                on_deletePb_clicked(tableName, insurancePolicy);
            });

            layout->addWidget(typeGroupBox);
            i++;
        }
    }
}

void MyInsurances::on_deletePb_clicked(QString tableName, int insurancePolicy)
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
        QMessageBox::StandardButton reply;
        reply = QMessageBox::information(this, "Deleting insurance", "Are you sure you want to delete this insurance? \n\tIt will not be restored.", QMessageBox::Yes | QMessageBox::No);
        if(reply == QMessageBox::Yes){
        if (deleteQuery.exec()) {
            QSqlQuery queryDeletedAuto, queryDeletedTravel, queryDeletedGadget;
            if (tableName == "AutoInsurance") {
                SaveReceiptPDF replace;
                replace.moveReceiptToClosed(QString::number(insurancePolicy), tableName);
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
                SaveReceiptPDF replace;
                replace.moveReceiptToClosed(QString::number(insurancePolicy), tableName);
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
                SaveReceiptPDF replace;
                replace.moveReceiptToClosed(QString::number(insurancePolicy), tableName);
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
                    // Запит виконано успішно
                } else {
                    // Помилка виконання запиту
                    qWarning() << "Failed to execute queryDeletedGadget:" << queryDeletedGadget.lastError().text();
                }
            }

        }
        QMessageBox::information(this, "Delete", "Insurance has been deleted successful");
        }
    }
}

void MyInsurances::on_downloadPb_clicked(QString tableName, int insurancePolicy)
{
    QString folderPath = "C:/courseWork/Insurances/active/"+tableName+"/";
    QString fileName = QString::number(insurancePolicy)+".pdf";

    QDir folder(folderPath);
    if (folder.exists()) {
        QString filePath = folder.filePath(fileName);

        QFile file(filePath);
        if (file.exists()) {
            QDesktopServices::openUrl(QUrl::fromLocalFile(filePath));
        } else {
            qDebug() << "Файл не існує:" << filePath;
        }
    } else {
        qDebug() << "Папка не існує:" << folderPath;
    }
}

MyInsurances::~MyInsurances()
{
    delete ui;
}

void MyInsurances::on_fullAutoPb_clicked()
{
    ui->travelGb->hide();
    ui->gadgetGb->hide();
    ui->fullAutoPb->hide();
    closeAutoPb = new QPushButton();
    closeAutoPb->setText("Close");
    typeLayout->addWidget(closeAutoPb);
    closeAutoPb->setVisible(true);
    closeAutoPb->show();
    connect(closeAutoPb, &QPushButton::clicked,  this, &MyInsurances::on_closeAutoClicked);


}


void MyInsurances::on_fullTravelPb_clicked()
{
    ui->autoGb->hide();
    ui->gadgetGb->hide();
    ui->fullTravelPb->hide();
    closeTravelPb = new QPushButton();
    closeTravelPb->setText("Close");
    typeLayout->addWidget(closeTravelPb);
    closeTravelPb->setVisible(true);
    closeTravelPb->show();
    connect(closeTravelPb, &QPushButton::clicked,  this, &MyInsurances::on_closeTravelClicked);

}


void MyInsurances::on_fullGadgetPb_clicked()
{
    ui->travelGb->hide();
    ui->autoGb->hide();
    ui->fullGadgetPb->hide();
    closeGadgetPb = new QPushButton();
    closeGadgetPb->setText("Close");
    typeLayout->addWidget(closeGadgetPb);
    closeGadgetPb->setVisible(true);
    closeGadgetPb->show();
    connect(closeGadgetPb, &QPushButton::clicked,  this, &MyInsurances::on_closeGadgetClicked);

}

void MyInsurances::on_closeAutoClicked(){
    ui->fullAutoPb->show();
    ui->autoGb->show();
    ui->gadgetGb->show();
    ui->travelGb->show();
    closeAutoPb->hide();
}

void MyInsurances::on_closeTravelClicked(){
    ui->fullTravelPb->show();
    ui->autoGb->show();
    ui->gadgetGb->show();
    ui->travelGb->show();
    closeTravelPb->hide();
}

void MyInsurances::on_closeGadgetClicked(){
     ui->fullGadgetPb->show();
    ui->autoGb->show();
    ui->gadgetGb->show();
    ui->travelGb->show();
    closeGadgetPb->hide();
}

void MyInsurances::closeEvent(QCloseEvent *event)
{
    QDialog::closeEvent(event);
    emit closed();
}

