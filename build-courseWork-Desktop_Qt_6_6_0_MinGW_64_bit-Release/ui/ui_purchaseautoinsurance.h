/********************************************************************************
** Form generated from reading UI file 'purchaseautoinsurance.ui'
**
** Created by: Qt User Interface Compiler version 6.6.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PURCHASEAUTOINSURANCE_H
#define UI_PURCHASEAUTOINSURANCE_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_PurchaseAutoInsurance
{
public:
    QGridLayout *gridLayout;
    QSpacerItem *horizontalSpacer;
    QSpacerItem *verticalSpacer_14;
    QSpacerItem *verticalSpacer_3;
    QSpacerItem *verticalSpacer_6;
    QSpacerItem *verticalSpacer_5;
    QSpacerItem *verticalSpacer_4;
    QSpacerItem *verticalSpacer_15;
    QWidget *verticalWidget;
    QGridLayout *gridLayout_2;
    QSpacerItem *horizontalSpacer_4;
    QSpacerItem *verticalSpacer_10;
    QSpacerItem *verticalSpacer_11;
    QLineEdit *technicalPassportLn;
    QSpacerItem *verticalSpacer_8;
    QSpacerItem *verticalSpacer_9;
    QLabel *label;
    QSpacerItem *verticalSpacer_17;
    QComboBox *insuranceTypeCb;
    QComboBox *autoTypeCb;
    QSpacerItem *horizontalSpacer_3;
    QVBoxLayout *verticalLayoutSimple;
    QPushButton *purchasePb;
    QSpacerItem *horizontalSpacer_2;
    QSpacerItem *verticalSpacer_12;
    QSpacerItem *verticalSpacer_2;
    QSpacerItem *verticalSpacer_7;
    QSpacerItem *verticalSpacer;
    QSpacerItem *verticalSpacer_13;
    QSpacerItem *verticalSpacer_16;

    void setupUi(QDialog *PurchaseAutoInsurance)
    {
        if (PurchaseAutoInsurance->objectName().isEmpty())
            PurchaseAutoInsurance->setObjectName("PurchaseAutoInsurance");
        PurchaseAutoInsurance->resize(450, 483);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/img/car-insurance.png"), QSize(), QIcon::Normal, QIcon::Off);
        PurchaseAutoInsurance->setWindowIcon(icon);
        PurchaseAutoInsurance->setStyleSheet(QString::fromUtf8("QDialog {\n"
"                    background:qlineargradient(x1:0, y1:0, x2:0, y2:1, \n"
"                          stop:0.03 rgba(184,193,201,1), \n"
"                          stop:0.27 rgba(107,150,191,1), \n"
"                          stop:0.92 rgba(245,39,39,1));\n"
"	font-family: \"Franklin Gothic Heavy\";\n"
"	font-size:14pt;\n"
"}\n"
" \n"
"QMessageBox{\n"
"	background-color: rgb(255, 255, 255);\n"
"	color:rgb(25, 25, 25);\n"
"	font: 350 12pt \"Bahnschrift SemiLight SemiConde\";\n"
"}        \n"
"   "));
        gridLayout = new QGridLayout(PurchaseAutoInsurance);
        gridLayout->setObjectName("gridLayout");
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer, 5, 0, 1, 1);

        verticalSpacer_14 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer_14, 7, 1, 1, 1);

        verticalSpacer_3 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer_3, 0, 1, 1, 1);

        verticalSpacer_6 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer_6, 1, 1, 1, 1);

        verticalSpacer_5 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer_5, 6, 1, 1, 1);

        verticalSpacer_4 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer_4, 11, 1, 1, 1);

        verticalSpacer_15 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer_15, 2, 1, 1, 1);

        verticalWidget = new QWidget(PurchaseAutoInsurance);
        verticalWidget->setObjectName("verticalWidget");
        verticalWidget->setStyleSheet(QString::fromUtf8("QWidget{\n"
"	background-color:rgb(245, 245, 245);\n"
"	border:0px solid;\n"
"	border-radius:20px;\n"
"}\n"
"\n"
"QComboBox{\n"
"	background-color:rgb(110, 151, 190);\n"
"	font: 350 13pt \"Bahnschrift SemiLight SemiConde\";\n"
"	color:rgb(1, 1, 1);\n"
"	border:0px;\n"
"	border-radius:15px;\n"
"}\n"
"\n"
"QComboBox:hover{\n"
"	background-color:rgb(83, 107, 135);\n"
"	font: 350 13pt \"Bahnschrift SemiLight SemiConde\";\n"
"	color:rgb(1, 1, 1);\n"
"	border:0px solid rgb(0, 0, 0);\n"
"	border-radius:15px;\n"
"}\n"
"\n"
"QLineEdit{\n"
"	background-color:rgb(110, 151, 190);\n"
"	font: 350 13pt \"Bahnschrift SemiLight SemiConde\";\n"
"	color:rgb(1, 1, 1);\n"
"	border:0px;\n"
"	border-radius:15px;\n"
"}\n"
"\n"
"QLineEdit:focus{\n"
"	background-color:rgb(83, 107, 135);\n"
"	font: 350 13pt \"Bahnschrift SemiLight SemiConde\";\n"
"	color:rgb(1, 1, 1);\n"
"	border:2px solid rgb(0, 0, 0);\n"
"	border-radius:15px;\n"
"}"));
        gridLayout_2 = new QGridLayout(verticalWidget);
        gridLayout_2->setObjectName("gridLayout_2");
        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_2->addItem(horizontalSpacer_4, 2, 2, 1, 1);

        verticalSpacer_10 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_2->addItem(verticalSpacer_10, 5, 1, 1, 1);

        verticalSpacer_11 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_2->addItem(verticalSpacer_11, 7, 1, 1, 1);

        technicalPassportLn = new QLineEdit(verticalWidget);
        technicalPassportLn->setObjectName("technicalPassportLn");
        technicalPassportLn->setMinimumSize(QSize(185, 35));

        gridLayout_2->addWidget(technicalPassportLn, 4, 1, 1, 1);

        verticalSpacer_8 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_2->addItem(verticalSpacer_8, 1, 1, 1, 1);

        verticalSpacer_9 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_2->addItem(verticalSpacer_9, 3, 1, 1, 1);

        label = new QLabel(verticalWidget);
        label->setObjectName("label");
        QFont font;
        font.setFamilies({QString::fromUtf8("Franklin Gothic Heavy")});
        font.setPointSize(18);
        label->setFont(font);
        label->setStyleSheet(QString::fromUtf8("QLabel{\n"
"color:rgba(245,39,39,1);\n"
"border:0px;\n"
"margin-top:5px;\n"
"};"));
        label->setTextFormat(Qt::RichText);
        label->setAlignment(Qt::AlignCenter);

        gridLayout_2->addWidget(label, 0, 1, 1, 1);

        verticalSpacer_17 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_2->addItem(verticalSpacer_17, 9, 1, 1, 1);

        insuranceTypeCb = new QComboBox(verticalWidget);
        insuranceTypeCb->addItem(QString());
        insuranceTypeCb->addItem(QString());
        insuranceTypeCb->setObjectName("insuranceTypeCb");
        insuranceTypeCb->setMinimumSize(QSize(0, 35));
        insuranceTypeCb->setStyleSheet(QString::fromUtf8(""));

        gridLayout_2->addWidget(insuranceTypeCb, 2, 1, 1, 1);

        autoTypeCb = new QComboBox(verticalWidget);
        autoTypeCb->addItem(QString());
        autoTypeCb->addItem(QString());
        autoTypeCb->addItem(QString());
        autoTypeCb->addItem(QString());
        autoTypeCb->addItem(QString());
        autoTypeCb->setObjectName("autoTypeCb");
        autoTypeCb->setMinimumSize(QSize(0, 35));

        gridLayout_2->addWidget(autoTypeCb, 6, 1, 1, 1);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_2->addItem(horizontalSpacer_3, 2, 0, 1, 1);

        verticalLayoutSimple = new QVBoxLayout();
        verticalLayoutSimple->setObjectName("verticalLayoutSimple");

        gridLayout_2->addLayout(verticalLayoutSimple, 8, 1, 1, 1);


        gridLayout->addWidget(verticalWidget, 5, 1, 1, 1);

        purchasePb = new QPushButton(PurchaseAutoInsurance);
        purchasePb->setObjectName("purchasePb");
        purchasePb->setMinimumSize(QSize(0, 40));
        QFont font1;
        font1.setFamilies({QString::fromUtf8("Bahnschrift SemiCondensed")});
        font1.setPointSize(14);
        purchasePb->setFont(font1);
        purchasePb->setStyleSheet(QString::fromUtf8("\n"
"\n"
"QPushButton{\n"
"border: solid 0px #ffffff;\n"
"background-color: rgb(83, 144, 190);;\n"
"border-radius:18px;\n"
"margin-left:63px;\n"
"margin-right:63px;\n"
"color:rgb(255, 255, 255);\n"
"}\n"
"\n"
"QPushButton:hover{\n"
"border: 1.5px inset rgb(1, 1, 1);\n"
"background-color: rgb(59, 104, 136);\n"
"border-radius:18px;\n"
"}"));

        gridLayout->addWidget(purchasePb, 8, 1, 1, 1);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_2, 5, 2, 1, 1);

        verticalSpacer_12 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer_12, 13, 1, 1, 1);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer_2, 9, 1, 1, 1);

        verticalSpacer_7 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer_7, 10, 1, 1, 1);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer, 4, 1, 1, 1);

        verticalSpacer_13 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer_13, 3, 1, 1, 1);

        verticalSpacer_16 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer_16, 12, 1, 1, 1);


        retranslateUi(PurchaseAutoInsurance);

        QMetaObject::connectSlotsByName(PurchaseAutoInsurance);
    } // setupUi

    void retranslateUi(QDialog *PurchaseAutoInsurance)
    {
        PurchaseAutoInsurance->setWindowTitle(QCoreApplication::translate("PurchaseAutoInsurance", "Insurance for auto", nullptr));
        technicalPassportLn->setPlaceholderText(QCoreApplication::translate("PurchaseAutoInsurance", "City by technical passport:", nullptr));
        label->setText(QCoreApplication::translate("PurchaseAutoInsurance", "AUTO INSURANCE", nullptr));
        insuranceTypeCb->setItemText(0, QCoreApplication::translate("PurchaseAutoInsurance", "Compulsory Insurance", nullptr));
        insuranceTypeCb->setItemText(1, QCoreApplication::translate("PurchaseAutoInsurance", "All-inclusive Insurance", nullptr));

        insuranceTypeCb->setPlaceholderText(QCoreApplication::translate("PurchaseAutoInsurance", "Type of insurance:", nullptr));
        autoTypeCb->setItemText(0, QCoreApplication::translate("PurchaseAutoInsurance", "Car", nullptr));
        autoTypeCb->setItemText(1, QCoreApplication::translate("PurchaseAutoInsurance", "Truck", nullptr));
        autoTypeCb->setItemText(2, QCoreApplication::translate("PurchaseAutoInsurance", "Motorcycle", nullptr));
        autoTypeCb->setItemText(3, QCoreApplication::translate("PurchaseAutoInsurance", "Bus", nullptr));
        autoTypeCb->setItemText(4, QCoreApplication::translate("PurchaseAutoInsurance", "Trailer", nullptr));

        autoTypeCb->setPlaceholderText(QCoreApplication::translate("PurchaseAutoInsurance", "Type of auto:", nullptr));
        purchasePb->setText(QCoreApplication::translate("PurchaseAutoInsurance", "Purchase", nullptr));
    } // retranslateUi

};

namespace Ui {
    class PurchaseAutoInsurance: public Ui_PurchaseAutoInsurance {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PURCHASEAUTOINSURANCE_H
