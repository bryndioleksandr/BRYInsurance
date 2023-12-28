/********************************************************************************
** Form generated from reading UI file 'purchasegadgetinsurance.ui'
**
** Created by: Qt User Interface Compiler version 6.6.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PURCHASEGADGETINSURANCE_H
#define UI_PURCHASEGADGETINSURANCE_H

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
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_PurchaseGadgetInsurance
{
public:
    QGridLayout *gridLayout_2;
    QPushButton *purchasePb;
    QSpacerItem *verticalSpacer_9;
    QSpacerItem *verticalSpacer_8;
    QWidget *verticalWidget;
    QGridLayout *gridLayout;
    QSpacerItem *verticalSpacer_3;
    QComboBox *longevityCb;
    QComboBox *insuranceTypeCb;
    QLabel *label;
    QLineEdit *gadgetPriceLn;
    QSpacerItem *horizontalSpacer;
    QSpacerItem *verticalSpacer_5;
    QSpacerItem *horizontalSpacer_2;
    QSpacerItem *verticalSpacer;
    QSpacerItem *verticalSpacer_4;
    QSpacerItem *verticalSpacer_7;
    QSpacerItem *horizontalSpacer_3;
    QSpacerItem *horizontalSpacer_4;

    void setupUi(QDialog *PurchaseGadgetInsurance)
    {
        if (PurchaseGadgetInsurance->objectName().isEmpty())
            PurchaseGadgetInsurance->setObjectName("PurchaseGadgetInsurance");
        PurchaseGadgetInsurance->resize(493, 514);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/img/gadget.png"), QSize(), QIcon::Normal, QIcon::Off);
        PurchaseGadgetInsurance->setWindowIcon(icon);
        PurchaseGadgetInsurance->setStyleSheet(QString::fromUtf8("QDialog{ \n"
"   background: qlineargradient(x1:0, y1:0, x2:0, y2:1, \n"
"                                 stop:0.03 rgba(205,212,219,1), \n"
"                                 stop:0.27 rgba(161,37,214,1), \n"
"                                 stop:0.79 rgba(51,55,148,1));\n"
"}\n"
"\n"
"QMessageBox{\n"
"	background-color: rgb(255, 255, 255);\n"
"	color:rgb(25, 25, 25);\n"
"	font: 350 12pt \"Bahnschrift SemiLight SemiConde\";\n"
"}"));
        gridLayout_2 = new QGridLayout(PurchaseGadgetInsurance);
        gridLayout_2->setObjectName("gridLayout_2");
        purchasePb = new QPushButton(PurchaseGadgetInsurance);
        purchasePb->setObjectName("purchasePb");
        purchasePb->setMinimumSize(QSize(0, 40));
        QFont font;
        font.setFamilies({QString::fromUtf8("Franklin Gothic Heavy")});
        font.setPointSize(14);
        purchasePb->setFont(font);
        purchasePb->setStyleSheet(QString::fromUtf8("\n"
"\n"
"QPushButton{\n"
"border: solid 0px #ffffff;\n"
"background-color: rgb(150, 39, 207);\n"
"border-radius:18px;\n"
"margin-left:63px;\n"
"margin-right:63px;\n"
"color:rgb(255, 255, 255);\n"
"}\n"
"\n"
"QPushButton:hover{\n"
"border: 1.5px inset rgb(1, 1, 1);\n"
"background-color: rgb(109, 29, 152);\n"
"border-radius:18px;\n"
"}"));

        gridLayout_2->addWidget(purchasePb, 3, 1, 1, 1);

        verticalSpacer_9 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_2->addItem(verticalSpacer_9, 2, 1, 1, 1);

        verticalSpacer_8 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_2->addItem(verticalSpacer_8, 4, 1, 1, 1);

        verticalWidget = new QWidget(PurchaseGadgetInsurance);
        verticalWidget->setObjectName("verticalWidget");
        verticalWidget->setStyleSheet(QString::fromUtf8("QWidget{\n"
"	background-color:rgb(245, 245, 245);\n"
"	border:0px solid;\n"
"	border-radius:20px;\n"
"}\n"
"\n"
"QComboBox{\n"
"	background-color:rgb(51, 55, 148);\n"
"	font: 350 13pt \"Bahnschrift SemiLight SemiConde\";\n"
"	color:rgb(255, 255, 255);\n"
"	border:0px;\n"
"	border-radius:15px;\n"
"	padding-left:15px;\n"
"	\n"
"}\n"
"\n"
"QComboBox:hover{\n"
"	background-color:rgb(28, 94, 156);\n"
"	font: 350 13pt \"Bahnschrift SemiLight SemiConde\";\n"
"	padding-left:15px;\n"
"	border:0px solid rgb(0, 0, 0);\n"
"	border-radius:15px;\n"
"}\n"
"\n"
"QLineEdit{\n"
"	background-color:rgb(51, 55, 148);\n"
"	font: 350 13pt \"Bahnschrift SemiLight SemiConde\";\n"
"	color:rgb(255, 255, 255);\n"
"	border:0px;\n"
"	padding-left:15px;\n"
"	border-radius:15px;\n"
"}\n"
"\n"
"QLineEdit:focus{\n"
"	background-color:rgb(67, 73, 194);\n"
"	border:2px solid rgb(0, 0, 0);\n"
"	border-radius:15px;\n"
"}\n"
"\n"
"\n"
"\n"
"QPushButton{\n"
"border: solid 0px #ffffff;\n"
"background-color: rgb(36, 126, 210);\n"
"border-radius:18px;"
                        "\n"
"color:rgb(255, 255, 255);\n"
"}\n"
"\n"
"QPushButton:hover{\n"
"border: 1.5px inset rgb(1, 1, 1);\n"
"background-color: rgb(59, 104, 136);\n"
"border-radius:18px;\n"
"}"));
        gridLayout = new QGridLayout(verticalWidget);
        gridLayout->setObjectName("gridLayout");
        verticalSpacer_3 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer_3, 3, 1, 1, 1);

        longevityCb = new QComboBox(verticalWidget);
        longevityCb->addItem(QString());
        longevityCb->addItem(QString());
        longevityCb->addItem(QString());
        longevityCb->setObjectName("longevityCb");
        longevityCb->setMinimumSize(QSize(0, 35));

        gridLayout->addWidget(longevityCb, 6, 1, 1, 1);

        insuranceTypeCb = new QComboBox(verticalWidget);
        insuranceTypeCb->addItem(QString());
        insuranceTypeCb->addItem(QString());
        insuranceTypeCb->addItem(QString());
        insuranceTypeCb->setObjectName("insuranceTypeCb");
        insuranceTypeCb->setMinimumSize(QSize(0, 35));

        gridLayout->addWidget(insuranceTypeCb, 2, 1, 1, 1);

        label = new QLabel(verticalWidget);
        label->setObjectName("label");
        QFont font1;
        font1.setFamilies({QString::fromUtf8("Franklin Gothic Heavy")});
        font1.setPointSize(18);
        label->setFont(font1);
        label->setStyleSheet(QString::fromUtf8("QLabel{\n"
"color:rgb(51, 55, 148);\n"
"border:0px;\n"
"margin-top:5px;\n"
"};"));
        label->setTextFormat(Qt::RichText);
        label->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label, 0, 1, 1, 1);

        gadgetPriceLn = new QLineEdit(verticalWidget);
        gadgetPriceLn->setObjectName("gadgetPriceLn");
        gadgetPriceLn->setMinimumSize(QSize(0, 35));

        gridLayout->addWidget(gadgetPriceLn, 4, 1, 1, 1);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer, 4, 0, 1, 1);

        verticalSpacer_5 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer_5, 7, 1, 1, 1);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_2, 4, 2, 1, 1);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer, 1, 1, 1, 1);

        verticalSpacer_4 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer_4, 5, 1, 1, 1);


        gridLayout_2->addWidget(verticalWidget, 1, 1, 1, 1);

        verticalSpacer_7 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_2->addItem(verticalSpacer_7, 0, 1, 1, 1);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_2->addItem(horizontalSpacer_3, 1, 0, 1, 1);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_2->addItem(horizontalSpacer_4, 1, 2, 1, 1);


        retranslateUi(PurchaseGadgetInsurance);

        QMetaObject::connectSlotsByName(PurchaseGadgetInsurance);
    } // setupUi

    void retranslateUi(QDialog *PurchaseGadgetInsurance)
    {
        PurchaseGadgetInsurance->setWindowTitle(QCoreApplication::translate("PurchaseGadgetInsurance", "Insurance for gadget", nullptr));
        purchasePb->setText(QCoreApplication::translate("PurchaseGadgetInsurance", "Purchase", nullptr));
        longevityCb->setItemText(0, QCoreApplication::translate("PurchaseGadgetInsurance", "6 months", nullptr));
        longevityCb->setItemText(1, QCoreApplication::translate("PurchaseGadgetInsurance", "1 year", nullptr));
        longevityCb->setItemText(2, QCoreApplication::translate("PurchaseGadgetInsurance", "2 years", nullptr));

        longevityCb->setPlaceholderText(QCoreApplication::translate("PurchaseGadgetInsurance", "Longevity:", nullptr));
        insuranceTypeCb->setItemText(0, QCoreApplication::translate("PurchaseGadgetInsurance", "Premium All-inclusive package", nullptr));
        insuranceTypeCb->setItemText(1, QCoreApplication::translate("PurchaseGadgetInsurance", "Medium-quality package", nullptr));
        insuranceTypeCb->setItemText(2, QCoreApplication::translate("PurchaseGadgetInsurance", "Low-quality and cheap package", nullptr));

        insuranceTypeCb->setPlaceholderText(QCoreApplication::translate("PurchaseGadgetInsurance", "Insurance type:", nullptr));
        label->setText(QCoreApplication::translate("PurchaseGadgetInsurance", "GADGET INSURANCE", nullptr));
        gadgetPriceLn->setPlaceholderText(QCoreApplication::translate("PurchaseGadgetInsurance", "Gadget price(\342\202\264):", nullptr));
    } // retranslateUi

};

namespace Ui {
    class PurchaseGadgetInsurance: public Ui_PurchaseGadgetInsurance {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PURCHASEGADGETINSURANCE_H
