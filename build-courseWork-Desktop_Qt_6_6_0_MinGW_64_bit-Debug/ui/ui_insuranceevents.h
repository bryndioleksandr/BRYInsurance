/********************************************************************************
** Form generated from reading UI file 'insuranceevents.ui'
**
** Created by: Qt User Interface Compiler version 6.6.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_INSURANCEEVENTS_H
#define UI_INSURANCEEVENTS_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_InsuranceEvents
{
public:
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QHBoxLayout *horizontalLayout;
    QPushButton *autoEventPb;
    QPushButton *travelEventPb;
    QPushButton *gadgetEventPb;

    void setupUi(QDialog *InsuranceEvents)
    {
        if (InsuranceEvents->objectName().isEmpty())
            InsuranceEvents->setObjectName("InsuranceEvents");
        InsuranceEvents->resize(684, 316);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/img/calendar.png"), QSize(), QIcon::Normal, QIcon::Off);
        InsuranceEvents->setWindowIcon(icon);
        InsuranceEvents->setStyleSheet(QString::fromUtf8("QDialog{\n"
"	background-color:rgb(250, 250, 254);\n"
"}"));
        verticalLayout = new QVBoxLayout(InsuranceEvents);
        verticalLayout->setObjectName("verticalLayout");
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(50);
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        label = new QLabel(InsuranceEvents);
        label->setObjectName("label");
        label->setStyleSheet(QString::fromUtf8(""));
        label->setPixmap(QPixmap(QString::fromUtf8(":/img/cool_red_ferrari_car_2018-wallpaper-1024x1024 (1).jpg")));

        horizontalLayout_2->addWidget(label);

        label_2 = new QLabel(InsuranceEvents);
        label_2->setObjectName("label_2");
        label_2->setPixmap(QPixmap(QString::fromUtf8(":/img/green_mountains_2-wallpaper-1280x1280 (1).jpg")));

        horizontalLayout_2->addWidget(label_2);

        label_3 = new QLabel(InsuranceEvents);
        label_3->setObjectName("label_3");
        label_3->setPixmap(QPixmap(QString::fromUtf8(":/img/iphone_13_apple_camera_smartphone-wallpaper-1024x1024 (1).jpg")));

        horizontalLayout_2->addWidget(label_3);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(50);
        horizontalLayout->setObjectName("horizontalLayout");
        autoEventPb = new QPushButton(InsuranceEvents);
        autoEventPb->setObjectName("autoEventPb");
        autoEventPb->setMinimumSize(QSize(0, 100));
        QFont font;
        font.setFamilies({QString::fromUtf8("Bahnschrift SemiBold")});
        font.setPointSize(16);
        font.setBold(true);
        autoEventPb->setFont(font);
        autoEventPb->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	background-color:rgba(236, 9, 30, 214);\n"
"	color:rgb(0, 0, 0);\n"
"	border:0px solid;\n"
"	border-radius: 25px;\n"
"}\n"
"\n"
"QPushButton:hover{\n"
"	background-color:rgba(154, 31, 43, 214);\n"
"	border:2px dashed rgb(0, 0, 0);\n"
"}\n"
""));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/img/car-insurance.png"), QSize(), QIcon::Normal, QIcon::Off);
        autoEventPb->setIcon(icon1);
        autoEventPb->setIconSize(QSize(70, 55));

        horizontalLayout->addWidget(autoEventPb);

        travelEventPb = new QPushButton(InsuranceEvents);
        travelEventPb->setObjectName("travelEventPb");
        travelEventPb->setMinimumSize(QSize(0, 100));
        travelEventPb->setFont(font);
        travelEventPb->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	background-color:rgba(112, 200, 19, 214);\n"
"	color:rgb(0, 0, 0);\n"
"	border:0px solid;\n"
"	border-radius: 25px;\n"
"	margin-top:0px;\n"
"}\n"
"\n"
"QPushButton:hover{\n"
"	background-color:rgba(81, 126, 34, 214);\n"
"	border:2px dashed rgb(0, 0, 0);\n"
"}"));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/img/travel-insurance.png"), QSize(), QIcon::Normal, QIcon::Off);
        travelEventPb->setIcon(icon2);
        travelEventPb->setIconSize(QSize(70, 55));

        horizontalLayout->addWidget(travelEventPb);

        gadgetEventPb = new QPushButton(InsuranceEvents);
        gadgetEventPb->setObjectName("gadgetEventPb");
        gadgetEventPb->setMinimumSize(QSize(0, 100));
        gadgetEventPb->setFont(font);
        gadgetEventPb->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	background-color:rgba(171, 199, 221, 215);\n"
"	color:rgb(0, 0, 0);\n"
"	border:0px solid;\n"
"	border-radius: 25px;\n"
"}\n"
"\n"
"QPushButton:hover{\n"
"	background-color:rgba(118, 134, 145, 214);\n"
"	border:2px dashed rgb(0, 0, 0);\n"
"}"));
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/img/gadget.png"), QSize(), QIcon::Normal, QIcon::Off);
        gadgetEventPb->setIcon(icon3);
        gadgetEventPb->setIconSize(QSize(70, 55));

        horizontalLayout->addWidget(gadgetEventPb);


        verticalLayout->addLayout(horizontalLayout);


        retranslateUi(InsuranceEvents);

        QMetaObject::connectSlotsByName(InsuranceEvents);
    } // setupUi

    void retranslateUi(QDialog *InsuranceEvents)
    {
        InsuranceEvents->setWindowTitle(QCoreApplication::translate("InsuranceEvents", "Insurance Events", nullptr));
        label->setText(QString());
        label_2->setText(QString());
        label_3->setText(QString());
        autoEventPb->setText(QCoreApplication::translate("InsuranceEvents", "Auto\n"
"Insurances", nullptr));
        travelEventPb->setText(QCoreApplication::translate("InsuranceEvents", "Travel\n"
"Insurances", nullptr));
        gadgetEventPb->setText(QCoreApplication::translate("InsuranceEvents", "Gadget\n"
"Insurances", nullptr));
    } // retranslateUi

};

namespace Ui {
    class InsuranceEvents: public Ui_InsuranceEvents {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_INSURANCEEVENTS_H
