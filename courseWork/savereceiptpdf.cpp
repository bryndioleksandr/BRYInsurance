#include "savereceiptpdf.h"

SaveReceiptPDF::SaveReceiptPDF()
{

}


void SaveReceiptPDF::drawText(QPainter &painter, int x, int y, const QString &text)
{
    painter.drawText(x, y, text);
}


void SaveReceiptPDF::generateReceipt(AutoInsurance &insurance, User &user){
    QString defaultPath = "C:/courseWork/Insurances/active/AutoInsurance/";
    QString fileName = defaultPath + QString("%1.pdf").arg(insurance.getInsurancePolicy());
    if (!fileName.isEmpty()) {
        QPdfWriter pdfWriter(fileName);
        QPainter painter(&pdfWriter);

        QSqlQuery query;
        query.prepare("SELECT Users.*, AutoInsurance.* FROM Users JOIN AutoInsurance ON Users.user_id = AutoInsurance.user_id WHERE AutoInsurance.insurancePolicy = :insPolicy");
        query.bindValue(":insPolicy", insurance.getInsurancePolicy());

        if (query.exec() && query.next()) {
            QFont font1("Courier new", 18);
            painter.setFont(font1);
            drawText(painter, 3000, 3300, "Insurance Confirmation Receipt");

            QFont font("Courier new", 14);
            painter.setFont(font);
            drawText(painter, 2000, 3700, QString("Insurance Type: %1").arg(QString::fromStdString(insurance.getInsuranceType())));
            drawText(painter, 2000, 4100, QString("Technical Passport: %1").arg(QString::fromStdString(insurance.getTechnicalPassport())));
            drawText(painter, 2000, 4500, QString("Surname: %1").arg(QString::fromStdString(user.getSurname())));
            drawText(painter, 2000, 4900, QString("Name: %1").arg(QString::fromStdString(user.getName())));
            drawText(painter, 2000, 5300, QString("Phone number: %1").arg(QString::fromStdString(user.getPhoneNumber())));
            drawText(painter, 2000, 5700, QString("Username: %1").arg(QString::fromStdString(user.getUsername())));
            drawText(painter, 2000, 6100, QString("Insurance policy: %1").arg(QString::number(insurance.getInsurancePolicy())));
            drawText(painter, 2000, 6500, QString("autoType: %1").arg(QString::fromStdString(insurance.getAutoType())));
            drawText(painter, 2000, 6900, QString("autoNumber: %1").arg(QString::fromStdString(insurance.getCarNumber())));
            drawText(painter, 2000, 7300, QString("autoBrand: %1").arg(QString::fromStdString(insurance.getCarBrand())));
            drawText(painter, 2000, 7700, QString("autoModel: %1").arg(QString::fromStdString(insurance.getCarModel())));

            if (QString::fromStdString(insurance.getAutoType()) == "Car")
                drawText(painter, 2000, 8100, QString("Cubic capacity: %1").arg(QString::fromStdString(insurance.getCarCubicCapacity())));
            else if (QString::fromStdString(insurance.getAutoType()) == "Truck")
                drawText(painter, 2000, 8100, QString("Carrying capacity: %1").arg(QString::fromStdString(insurance.getCarryingCapacity())));
            else if (QString::fromStdString(insurance.getAutoType()) == "Motorcycle")
                drawText(painter, 2000, 8100, QString("Moto cubic capacity: %1").arg(QString::fromStdString(insurance.getMotoCubicCapacity())));
            else if (QString::fromStdString(insurance.getAutoType()) == "Bus")
                drawText(painter, 2000, 8100, QString("Number of passengers: %1").arg(QString::fromStdString(insurance.getNumOfPassengers())));
            else if (QString::fromStdString(insurance.getAutoType()) == "Trailer")
                drawText(painter, 2000, 8100, QString("Trailer for: %1").arg(QString::fromStdString(insurance.getTrailerFor())));

            drawText(painter, 2000, 8500, QString("Auto price: %1%2").arg(QString::number(insurance.getCarPrice())).arg("$"));
            drawText(painter, 2000, 8900, QString("Auto year: %1").arg(QString::number(insurance.getCarYear())));
            drawText(painter, 2000, 9300, QString("Warranty start date: %1").arg((QDateTime::fromSecsSinceEpoch(insurance.getWarrantyStartDate(), Qt::UTC)).toString("yyyy-MM-dd hh:mm:ss")));
            drawText(painter, 2000, 9700, QString("Warranty end date: %1").arg((QDateTime::fromSecsSinceEpoch(insurance.getWarrantyEndDate(), Qt::UTC)).toString("yyyy-MM-dd hh:mm:ss")));

            QFont font2("Courier new", 15);
            font2.setWeight(QFont::Bold);
            painter.setFont(font2);
            drawText(painter, 2000, 10100, QString("Coverage amount: %1%2").arg(QString::number(insurance.getCoverageAmount())).arg("₴"));
            drawText(painter, 2000, 10500, QString("Price to pay: %1%2").arg(QString::number(insurance.getPrice())).arg("₴"));
            painter.end();
        }
    }

}

void SaveReceiptPDF::generateReceipt(TravelInsurance &insurance, User &user){
    QString defaultPath = "C:/courseWork/Insurances/active/TravelInsurance/";
    QString fileName = defaultPath + QString("%1.pdf").arg(insurance.getInsurancePolicy());
    if (!fileName.isEmpty()) {
        QPdfWriter pdfWriter(fileName);
        QPainter painter(&pdfWriter);

        QSqlQuery query;
        query.prepare("SELECT Users.*, TravelInsurance.* FROM Users JOIN TravelInsurance ON Users.user_id = TravelInsurance.user_id WHERE TravelInsurance.insurancePolicy = :insPolicy");
        query.bindValue(":insPolicy", insurance.getInsurancePolicy());

        if (query.exec() && query.next()) {
            QFont font1("Courier new", 18);
            painter.setFont(font1);
            drawText(painter, 2500, 3500, "Travel Insurance Confirmation Receipt");

            QFont font("Courier new", 14);
            painter.setFont(font);
            drawText(painter, 2000, 4100, QString("Travel direction: %1").arg(QString::fromStdString(insurance.getInsuranceType())));
            drawText(painter, 2000, 4500, QString("Activities: %1").arg(QString::fromStdString(insurance.getTravelPurpose())));
            drawText(painter, 2000, 4900, QString("Surname: %1").arg(QString::fromStdString(user.getSurname())));
            drawText(painter, 2000, 5300, QString("Name: %1").arg(QString::fromStdString(user.getName())));
            drawText(painter, 2000, 5700, QString("Phone number: %1").arg(QString::fromStdString(user.getPhoneNumber())));
            drawText(painter, 2000, 6100, QString("Username: %1").arg(QString::fromStdString(user.getUsername())));
            drawText(painter, 2000, 6500, QString("Insurance policy: %1").arg(QString::number(insurance.getInsurancePolicy())));

            drawText(painter, 2000, 6900, QString("Warranty start date: %1").arg(QString::fromStdString(insurance.getWarrantyStartDate())));
            drawText(painter, 2000, 7300, QString("Warranty end date: %1").arg(QString::fromStdString(insurance.getWarrantyEndDate())));

            QFont font2("Courier new", 15);
            font2.setWeight(QFont::Bold);
            painter.setFont(font2);
            drawText(painter, 2000, 7800, QString("Coverage amount: %1%2").arg(QString::fromStdString(insurance.getCoverageAmount())).arg(""));
            drawText(painter, 2000, 8200, QString("Price to pay: %1%2").arg(QString::number(insurance.getPrice())).arg("₴"));

            painter.end();
        }
    }
}

void SaveReceiptPDF::generateReceipt(GadgetInsurance &insurance, User &user){
    QString defaultPath = "C:/courseWork/Insurances/active/GadgetInsurance/";
    QString fileName = defaultPath + QString("%1.pdf").arg(insurance.getInsurancePolicy());
    if (!fileName.isEmpty()) {
        QPdfWriter pdfWriter(fileName);
        QPainter painter(&pdfWriter);

        QSqlQuery query;
        query.prepare("SELECT Users.*, GadgetInsurance.* FROM Users JOIN GadgetInsurance ON Users.user_id = GadgetInsurance.user_id WHERE GadgetInsurance.insurancePolicy = :insPolicy");
        query.bindValue(":insPolicy", insurance.getInsurancePolicy());

        if (query.exec() && query.next()) {
            QFont font1("Courier new", 18);
            painter.setFont(font1);
            drawText(painter, 1500, 2900, "Gadget Insurance Confirmation Receipt");

            QFont font("Courier new", 14);
            painter.setFont(font);
            drawText(painter, 2000, 3300, QString("Insurance Type: %1").arg(QString::fromStdString(insurance.getInsuranceType())));
            drawText(painter, 2000, 3700, QString("Gadget brand: %1").arg(QString::fromStdString(insurance.getGadgetBrand())));
            drawText(painter, 2000, 4100, QString("Gadget model: %1").arg(QString::fromStdString(insurance.getGadgetModel())));
            drawText(painter, 2000, 4500, QString("Gadget price: %1%2").arg(QString::number(insurance.getGadgetPrice())).arg("₴"));
            drawText(painter, 2000, 4900, QString("Surname: %1").arg(QString::fromStdString(user.getSurname())));
            drawText(painter, 2000, 5300, QString("Name: %1").arg(QString::fromStdString(user.getName())));
            drawText(painter, 2000, 5700, QString("Username: %1").arg(QString::fromStdString(user.getUsername())));
            drawText(painter, 2000, 6100,  QString("Phone number: %1").arg(QString::fromStdString(insurance.getPhoneInsuranceNumber())));
            drawText(painter, 2000, 6500, QString("Insurance policy: %1").arg(QString::number(insurance.getInsurancePolicy())));

            drawText(painter, 2000, 6900, QString("Warranty start date: %1").arg(QString::fromStdString(insurance.getWarrantyStartDate())));
            drawText(painter, 2000, 7300, QString("Warranty end date: %1").arg(QString::fromStdString(insurance.getWarrantyEndDate())));

            QFont font2("Courier new", 15);
            font2.setWeight(QFont::Bold);
            painter.setFont(font2);
            drawText(painter, 2000, 7700, QString("Coverage type: %1%2").arg(QString::fromStdString(insurance.getCoverageType())).arg(""));
            drawText(painter, 2000, 8100, QString("Price to pay: %1%2").arg(QString::number(insurance.getInsurancePrice())).arg("₴"));

            painter.end();
        }
    }
}

void SaveReceiptPDF::deleteReceipt(const QString& insurancePolicy, const QString& tableName) {
    QString defaultPath = "C:/courseWork/Insurances/active/"+tableName+"/";
    QString fileName = defaultPath + QString("%1.pdf").arg(insurancePolicy);

    if (QFile::exists(fileName)) {
        if (QFile::remove(fileName)) {
            qDebug() << "Receipt deleted successfully.";
        } else {
            qWarning() << "Failed to delete receipt.";
        }
    } else {
        qWarning() << "Receipt file does not exist.";
    }
}

void SaveReceiptPDF::moveReceiptToClosed(const QString& insurancePolicy, const QString& tableName) {
    QString sourcePath = "C:/courseWork/Insurances/active/"+tableName+"/";
    QString destPath = "C:/courseWork/Insurances/closed/"+tableName+"/";

    QString sourceFileName = sourcePath + QString("%1.pdf").arg(insurancePolicy);
    QString destFileName = destPath + QString("%1.pdf").arg(insurancePolicy);

    if (QFile::exists(sourceFileName)) {
        if (QFile::rename(sourceFileName, destFileName)) {
            qDebug() << "Receipt moved to 'closed' folder successfully.";
        } else {
            qWarning() << "Failed to move receipt to 'closed' folder.";
        }
    } else {
        qWarning() << "Receipt file does not exist in 'active' folder.";
    }
}
