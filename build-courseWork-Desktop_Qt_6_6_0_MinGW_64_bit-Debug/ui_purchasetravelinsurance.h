/********************************************************************************
** Form generated from reading UI file 'purchasetravelinsurance.ui'
**
** Created by: Qt User Interface Compiler version 6.6.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PURCHASETRAVELINSURANCE_H
#define UI_PURCHASETRAVELINSURANCE_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_PurchaseTravelInsurance
{
public:
    QGridLayout *gridLayout;
    QSpacerItem *horizontalSpacer_3;
    QSpacerItem *verticalSpacer_5;
    QPushButton *purchasePb;
    QSpacerItem *horizontalSpacer_2;
    QSpacerItem *verticalSpacer_6;
    QWidget *verticalWidget_2;
    QVBoxLayout *verticalLayout_2;
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QSpacerItem *verticalSpacer_2;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer_4;
    QPushButton *startDatePb;
    QSpacerItem *horizontalSpacer_5;
    QPushButton *endDatePb;
    QSpacerItem *horizontalSpacer;
    QVBoxLayout *verticalLayout_3;
    QSpacerItem *verticalSpacer;
    QComboBox *travelDirectionCb;
    QSpacerItem *verticalSpacer_4;
    QComboBox *travelPurposeCb;
    QSpacerItem *verticalSpacer_3;
    QComboBox *coverageAmountCb;
    QSpacerItem *verticalSpacer_7;
    QSpacerItem *verticalSpacer_8;

    void setupUi(QDialog *PurchaseTravelInsurance)
    {
        if (PurchaseTravelInsurance->objectName().isEmpty())
            PurchaseTravelInsurance->setObjectName("PurchaseTravelInsurance");
        PurchaseTravelInsurance->resize(522, 591);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/img/travel-insurance.png"), QSize(), QIcon::Normal, QIcon::Off);
        PurchaseTravelInsurance->setWindowIcon(icon);
        PurchaseTravelInsurance->setStyleSheet(QString::fromUtf8("QDialog{\n"
"background: qlineargradient(x1:0, y1:0, x2:0, y2:1, \n"
"                                 stop:0.03 rgba(205,212,219,1), \n"
"                                 stop:0.32 rgba(37,128,214,1), \n"
"                                 stop:0.85 rgba(9,186,44,1));\n"
"}"));
        gridLayout = new QGridLayout(PurchaseTravelInsurance);
        gridLayout->setObjectName("gridLayout");
        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_3, 1, 2, 1, 1);

        verticalSpacer_5 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer_5, 4, 1, 1, 1);

        purchasePb = new QPushButton(PurchaseTravelInsurance);
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
"background-color: rgb(37, 128, 213);\n"
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

        gridLayout->addWidget(purchasePb, 3, 1, 1, 1);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_2, 1, 0, 1, 1);

        verticalSpacer_6 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer_6, 0, 1, 1, 1);

        verticalWidget_2 = new QWidget(PurchaseTravelInsurance);
        verticalWidget_2->setObjectName("verticalWidget_2");
        verticalWidget_2->setStyleSheet(QString::fromUtf8("QWidget{\n"
"	background-color:rgb(245, 245, 245);\n"
"	border:0px solid;\n"
"	border-radius:20px;\n"
"}\n"
"\n"
"QComboBox{\n"
"	background-color:rgb(37, 128, 213);\n"
"	font: 350 13pt \"Bahnschrift SemiLight SemiConde\";\n"
"	color:rgb(1, 1, 1);\n"
"	border:0px;\n"
"	border-radius:15px;\n"
"	padding-left:15px;\n"
"	margin-left:25px;\n"
"	margin-right:25px;\n"
"}\n"
"\n"
"QComboBox:hover{\n"
"	background-color:rgb(28, 94, 156);\n"
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
"}\n"
"\n"
"\n"
"\n"
"QPushButton{\n"
""
                        "border: solid 0px #ffffff;\n"
"background-color: rgb(36, 126, 210);\n"
"border-radius:18px;\n"
"color:rgb(255, 255, 255);\n"
"}\n"
"\n"
"QPushButton:hover{\n"
"border: 1.5px inset rgb(1, 1, 1);\n"
"background-color: rgb(59, 104, 136);\n"
"border-radius:18px;\n"
"}"));
        verticalLayout_2 = new QVBoxLayout(verticalWidget_2);
        verticalLayout_2->setObjectName("verticalLayout_2");
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName("verticalLayout");
        label = new QLabel(verticalWidget_2);
        label->setObjectName("label");
        QFont font1;
        font1.setFamilies({QString::fromUtf8("Franklin Gothic Heavy")});
        font1.setPointSize(20);
        label->setFont(font1);
        label->setStyleSheet(QString::fromUtf8("color:rgb(10, 184, 49);"));
        label->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(label);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer_2);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_4);

        startDatePb = new QPushButton(verticalWidget_2);
        startDatePb->setObjectName("startDatePb");
        startDatePb->setMinimumSize(QSize(80, 35));
        QFont font2;
        font2.setFamilies({QString::fromUtf8("Bahnschrift SemiLight SemiConde")});
        font2.setPointSize(11);
        startDatePb->setFont(font2);

        horizontalLayout->addWidget(startDatePb);

        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_5);

        endDatePb = new QPushButton(verticalWidget_2);
        endDatePb->setObjectName("endDatePb");
        endDatePb->setMinimumSize(QSize(80, 35));
        endDatePb->setFont(font2);

        horizontalLayout->addWidget(endDatePb);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);


        verticalLayout->addLayout(horizontalLayout);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName("verticalLayout_3");

        verticalLayout->addLayout(verticalLayout_3);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        travelDirectionCb = new QComboBox(verticalWidget_2);
        travelDirectionCb->addItem(QString());
        travelDirectionCb->addItem(QString());
        travelDirectionCb->addItem(QString());
        travelDirectionCb->addItem(QString());
        travelDirectionCb->setObjectName("travelDirectionCb");
        travelDirectionCb->setMinimumSize(QSize(0, 35));

        verticalLayout->addWidget(travelDirectionCb);

        verticalSpacer_4 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer_4);

        travelPurposeCb = new QComboBox(verticalWidget_2);
        travelPurposeCb->addItem(QString());
        travelPurposeCb->addItem(QString());
        travelPurposeCb->addItem(QString());
        travelPurposeCb->setObjectName("travelPurposeCb");
        travelPurposeCb->setMinimumSize(QSize(0, 35));

        verticalLayout->addWidget(travelPurposeCb);

        verticalSpacer_3 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer_3);

        coverageAmountCb = new QComboBox(verticalWidget_2);
        coverageAmountCb->addItem(QString());
        coverageAmountCb->addItem(QString());
        coverageAmountCb->setObjectName("coverageAmountCb");
        coverageAmountCb->setMinimumSize(QSize(0, 35));

        verticalLayout->addWidget(coverageAmountCb);

        verticalSpacer_7 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer_7);


        verticalLayout_2->addLayout(verticalLayout);


        gridLayout->addWidget(verticalWidget_2, 1, 1, 1, 1);

        verticalSpacer_8 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer_8, 2, 1, 1, 1);


        retranslateUi(PurchaseTravelInsurance);

        QMetaObject::connectSlotsByName(PurchaseTravelInsurance);
    } // setupUi

    void retranslateUi(QDialog *PurchaseTravelInsurance)
    {
        PurchaseTravelInsurance->setWindowTitle(QCoreApplication::translate("PurchaseTravelInsurance", "Insurance for travel", nullptr));
        purchasePb->setText(QCoreApplication::translate("PurchaseTravelInsurance", "Purchase", nullptr));
        label->setText(QCoreApplication::translate("PurchaseTravelInsurance", "<html><head/><body><p>TRAVEL INSURANCE</p></body></html>", nullptr));
        startDatePb->setText(QCoreApplication::translate("PurchaseTravelInsurance", "Start Date", nullptr));
        endDatePb->setText(QCoreApplication::translate("PurchaseTravelInsurance", "End Date", nullptr));
        travelDirectionCb->setItemText(0, QCoreApplication::translate("PurchaseTravelInsurance", "Europe (Schengen), Great Britain, Ireland", nullptr));
        travelDirectionCb->setItemText(1, QCoreApplication::translate("PurchaseTravelInsurance", "Europe, Egypt, Tunisia, Turkey", nullptr));
        travelDirectionCb->setItemText(2, QCoreApplication::translate("PurchaseTravelInsurance", "All countries(except USA, Canada, rf and rb)", nullptr));
        travelDirectionCb->setItemText(3, QCoreApplication::translate("PurchaseTravelInsurance", "All countries(except rf and rb)", nullptr));

        travelDirectionCb->setPlaceholderText(QCoreApplication::translate("PurchaseTravelInsurance", "Travel direction:", nullptr));
        travelPurposeCb->setItemText(0, QCoreApplication::translate("PurchaseTravelInsurance", "Without any activities", nullptr));
        travelPurposeCb->setItemText(1, QCoreApplication::translate("PurchaseTravelInsurance", "Active leisure", nullptr));
        travelPurposeCb->setItemText(2, QCoreApplication::translate("PurchaseTravelInsurance", "Amator sport activities", nullptr));

        travelPurposeCb->setPlaceholderText(QCoreApplication::translate("PurchaseTravelInsurance", "Activities:", nullptr));
        coverageAmountCb->setItemText(0, QCoreApplication::translate("PurchaseTravelInsurance", "30000\342\202\254", nullptr));
        coverageAmountCb->setItemText(1, QCoreApplication::translate("PurchaseTravelInsurance", "50000\342\202\254", nullptr));

        coverageAmountCb->setPlaceholderText(QCoreApplication::translate("PurchaseTravelInsurance", "Coverage amount:", nullptr));
    } // retranslateUi

};

namespace Ui {
    class PurchaseTravelInsurance: public Ui_PurchaseTravelInsurance {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PURCHASETRAVELINSURANCE_H
