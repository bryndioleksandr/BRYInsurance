#ifndef SAVERECEIPTPDF_H
#define SAVERECEIPTPDF_H
#include "autoinsurance.h"
#include "travelinsurance.h"
#include "gadgetinsurance.h"
#include "User.h"
#include <QPainter>
#include <QString>
#include "mysqldbmanager.h"
#include <QPdfWriter>
#include <QSqlQuery>
#include <QFont>
#include <QFileDialog>

class SaveReceiptPDF
{
public:
    SaveReceiptPDF();
    void generateReceipt(AutoInsurance&, User&);
    void generateReceipt(TravelInsurance&, User&);
    void generateReceipt(GadgetInsurance&, User&);
    void drawText(QPainter &painter, int x, int y, const QString &text);
    void deleteReceipt(const QString& insurancePolicy, const QString& tableName);
    void moveReceiptToClosed(const QString& insurancePolicy, const QString& tableName);


private:

};

#endif // SAVERECEIPTPDF_H
