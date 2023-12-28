/********************************************************************************
** Form generated from reading UI file 'secondmainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.6.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SHOP_H
#define UI_SHOP_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>

QT_BEGIN_NAMESPACE

class Ui_Shop
{
public:
    QGridLayout *gridLayout;
    QSpacerItem *horizontalSpacer_2;
    QSpacerItem *horizontalSpacer_6;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QSpacerItem *horizontalSpacer_5;
    QHBoxLayout *horizontalLayout;
    QPushButton *autoInsurancePb;
    QPushButton *travelInsurancePb;
    QPushButton *gadgetInsurancePb;
    QSpacerItem *horizontalSpacer_3;
    QSpacerItem *horizontalSpacer_4;
    QSpacerItem *horizontalSpacer_7;
    QSpacerItem *horizontalSpacer;
    QSpacerItem *horizontalSpacer_8;

    void setupUi(QDialog *Shop)
    {
        if (Shop->objectName().isEmpty())
            Shop->setObjectName("Shop");
        Shop->resize(752, 323);
        gridLayout = new QGridLayout(Shop);
        gridLayout->setObjectName("gridLayout");
        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_2, 0, 5, 1, 1);

        horizontalSpacer_6 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_6, 0, 6, 1, 1);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(50);
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        label = new QLabel(Shop);
        label->setObjectName("label");
        label->setStyleSheet(QString::fromUtf8(""));
        label->setPixmap(QPixmap(QString::fromUtf8(":/img/cool_red_ferrari_car_2018-wallpaper-1024x1024 (1).jpg")));

        horizontalLayout_2->addWidget(label);

        label_2 = new QLabel(Shop);
        label_2->setObjectName("label_2");
        label_2->setPixmap(QPixmap(QString::fromUtf8(":/img/green_mountains_2-wallpaper-1280x1280 (1).jpg")));

        horizontalLayout_2->addWidget(label_2);

        label_3 = new QLabel(Shop);
        label_3->setObjectName("label_3");
        label_3->setPixmap(QPixmap(QString::fromUtf8(":/img/iphone_13_apple_camera_smartphone-wallpaper-1024x1024 (1).jpg")));

        horizontalLayout_2->addWidget(label_3);


        gridLayout->addLayout(horizontalLayout_2, 0, 4, 1, 1);

        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_5, 0, 1, 1, 1);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(50);
        horizontalLayout->setObjectName("horizontalLayout");
        autoInsurancePb = new QPushButton(Shop);
        autoInsurancePb->setObjectName("autoInsurancePb");
        autoInsurancePb->setMinimumSize(QSize(0, 100));
        QFont font;
        font.setFamilies({QString::fromUtf8("Bahnschrift SemiBold")});
        font.setPointSize(16);
        font.setBold(true);
        autoInsurancePb->setFont(font);
        autoInsurancePb->setStyleSheet(QString::fromUtf8("QPushButton{\n"
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
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/img/car-insurance.png"), QSize(), QIcon::Normal, QIcon::Off);
        autoInsurancePb->setIcon(icon);
        autoInsurancePb->setIconSize(QSize(70, 55));

        horizontalLayout->addWidget(autoInsurancePb);

        travelInsurancePb = new QPushButton(Shop);
        travelInsurancePb->setObjectName("travelInsurancePb");
        travelInsurancePb->setMinimumSize(QSize(0, 100));
        travelInsurancePb->setFont(font);
        travelInsurancePb->setStyleSheet(QString::fromUtf8("QPushButton{\n"
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
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/img/travel-insurance.png"), QSize(), QIcon::Normal, QIcon::Off);
        travelInsurancePb->setIcon(icon1);
        travelInsurancePb->setIconSize(QSize(70, 55));

        horizontalLayout->addWidget(travelInsurancePb);

        gadgetInsurancePb = new QPushButton(Shop);
        gadgetInsurancePb->setObjectName("gadgetInsurancePb");
        gadgetInsurancePb->setMinimumSize(QSize(0, 100));
        gadgetInsurancePb->setFont(font);
        gadgetInsurancePb->setStyleSheet(QString::fromUtf8("QPushButton{\n"
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
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/img/gadget.png"), QSize(), QIcon::Normal, QIcon::Off);
        gadgetInsurancePb->setIcon(icon2);
        gadgetInsurancePb->setIconSize(QSize(70, 55));

        horizontalLayout->addWidget(gadgetInsurancePb);


        gridLayout->addLayout(horizontalLayout, 1, 4, 1, 1);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_3, 0, 3, 1, 1);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_4, 0, 2, 1, 1);

        horizontalSpacer_7 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_7, 0, 7, 1, 1);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer, 0, 0, 1, 1);

        horizontalSpacer_8 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_8, 0, 8, 1, 1);


        retranslateUi(Shop);

        QMetaObject::connectSlotsByName(Shop);
    } // setupUi

    void retranslateUi(QDialog *Shop)
    {
        Shop->setWindowTitle(QCoreApplication::translate("Shop", "Shop", nullptr));
        label->setText(QString());
        label_2->setText(QString());
        label_3->setText(QString());
        autoInsurancePb->setText(QCoreApplication::translate("Shop", "Purchase\n"
"Auto\n"
"Insurance", nullptr));
        travelInsurancePb->setText(QCoreApplication::translate("Shop", "Purchase\n"
"Travel\n"
"Insurances", nullptr));
        gadgetInsurancePb->setText(QCoreApplication::translate("Shop", "Purchase\n"
"Gadget\n"
"Insurances", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Shop: public Ui_Shop {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_Shop_H
