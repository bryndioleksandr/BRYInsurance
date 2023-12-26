/********************************************************************************
** Form generated from reading UI file 'myinsurances.ui'
**
** Created by: Qt User Interface Compiler version 6.6.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MYINSURANCES_H
#define UI_MYINSURANCES_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MyInsurances
{
public:
    QVBoxLayout *verticalLayout;
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents;
    QVBoxLayout *verticalLayout_2;
    QGroupBox *autoGb;
    QVBoxLayout *verticalLayout_3;
    QPushButton *fullAutoPb;
    QScrollArea *scrollAreaAuto;
    QWidget *scrollAreaWidgetContents_2;
    QGroupBox *travelGb;
    QVBoxLayout *verticalLayout_4;
    QPushButton *fullTravelPb;
    QScrollArea *scrollAreaTravel;
    QWidget *scrollAreaWidgetContents_3;
    QGroupBox *gadgetGb;
    QVBoxLayout *verticalLayout_5;
    QPushButton *fullGadgetPb;
    QScrollArea *scrollArea_2;
    QWidget *scrollAreaWidgetContents_4;

    void setupUi(QDialog *MyInsurances)
    {
        if (MyInsurances->objectName().isEmpty())
            MyInsurances->setObjectName("MyInsurances");
        MyInsurances->resize(748, 640);
        QFont font;
        font.setFamilies({QString::fromUtf8("Bahnschrift SemiLight SemiConde")});
        font.setPointSize(13);
        font.setBold(false);
        font.setItalic(false);
        MyInsurances->setFont(font);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/img/planning.png"), QSize(), QIcon::Normal, QIcon::Off);
        MyInsurances->setWindowIcon(icon);
        MyInsurances->setStyleSheet(QString::fromUtf8("QDialog{\n"
"	background-color:rgb(29, 29, 29);\n"
"}\n"
"\n"
"\n"
"QPushButton{\n"
"border: solid 0px #ffffff;\n"
"background-color: #c38200;\n"
"border-radius:15px;\n"
"font: 350 13pt \"Bahnschrift SemiLight SemiConde\";\n"
"margin-left:130px;\n"
"margin-right:130px;\n"
"color:rgb(255, 255, 255);\n"
"\n"
"}\n"
"\n"
"QPushButton:hover{\n"
"background-color:rgb(152, 101, 0);\n"
"border: solid 1px rgb(0, 0, 0);\n"
"}\n"
"\n"
"\n"
"\n"
"QWidget{\n"
"		font: 350 13pt \"Bahnschrift SemiLight SemiConde\";\n"
"	color:rgb(255, 255, 255);\n"
"}\n"
"\n"
"QGroupBox{\n"
"	font: 14pt \"Franklin Gothic Heavy\";\n"
"	color:rgb(255, 255, 255);\n"
"\n"
"}\n"
"\n"
""));
        verticalLayout = new QVBoxLayout(MyInsurances);
        verticalLayout->setObjectName("verticalLayout");
        scrollArea = new QScrollArea(MyInsurances);
        scrollArea->setObjectName("scrollArea");
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName("scrollAreaWidgetContents");
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 728, 620));
        scrollAreaWidgetContents->setStyleSheet(QString::fromUtf8("QWidget{\n"
"	background-color:rgb(29, 29, 29);\n"
"}\n"
"\n"
"QPushButton{\n"
"border: solid 0px #ffffff;\n"
"background-color: #c38200;\n"
"border-radius:15px;\n"
"font: 350 13pt \"Bahnschrift SemiLight SemiConde\";\n"
"margin-left:200px;\n"
"margin-right:200px;\n"
"color:rgb(255, 255, 255);\n"
"\n"
"}\n"
"\n"
"QPushButton:hover{\n"
"background-color:rgb(152, 101, 0);\n"
"border: solid 1px rgb(0, 0, 0);\n"
"}\n"
""));
        verticalLayout_2 = new QVBoxLayout(scrollAreaWidgetContents);
        verticalLayout_2->setObjectName("verticalLayout_2");
        autoGb = new QGroupBox(scrollAreaWidgetContents);
        autoGb->setObjectName("autoGb");
        verticalLayout_3 = new QVBoxLayout(autoGb);
        verticalLayout_3->setObjectName("verticalLayout_3");
        fullAutoPb = new QPushButton(autoGb);
        fullAutoPb->setObjectName("fullAutoPb");
        fullAutoPb->setMinimumSize(QSize(0, 30));

        verticalLayout_3->addWidget(fullAutoPb);

        scrollAreaAuto = new QScrollArea(autoGb);
        scrollAreaAuto->setObjectName("scrollAreaAuto");
        scrollAreaAuto->setStyleSheet(QString::fromUtf8("QScrollArea{\n"
"	background-color:rgb(29, 29, 29);\n"
"}"));
        scrollAreaAuto->setWidgetResizable(true);
        scrollAreaWidgetContents_2 = new QWidget();
        scrollAreaWidgetContents_2->setObjectName("scrollAreaWidgetContents_2");
        scrollAreaWidgetContents_2->setGeometry(QRect(0, 0, 684, 111));
        scrollAreaWidgetContents_2->setStyleSheet(QString::fromUtf8("QWidget{ background-color:rgb(29, 29, 29);}\n"
"QPushButton{\n"
"border: solid 0px #ffffff;\n"
"background-color: #c38200;\n"
"border-radius:15px;\n"
"font: 350 13pt \"Bahnschrift SemiLight SemiConde\";\n"
"color:rgb(255, 255, 255);\n"
"\n"
"}\n"
"\n"
"QPushButton:hover{\n"
"background-color:rgb(152, 101, 0);\n"
"border: solid 1px rgb(0, 0, 0);\n"
"}\n"
"\n"
""));
        scrollAreaAuto->setWidget(scrollAreaWidgetContents_2);

        verticalLayout_3->addWidget(scrollAreaAuto);


        verticalLayout_2->addWidget(autoGb);

        travelGb = new QGroupBox(scrollAreaWidgetContents);
        travelGb->setObjectName("travelGb");
        verticalLayout_4 = new QVBoxLayout(travelGb);
        verticalLayout_4->setObjectName("verticalLayout_4");
        fullTravelPb = new QPushButton(travelGb);
        fullTravelPb->setObjectName("fullTravelPb");
        fullTravelPb->setMinimumSize(QSize(0, 30));

        verticalLayout_4->addWidget(fullTravelPb);

        scrollAreaTravel = new QScrollArea(travelGb);
        scrollAreaTravel->setObjectName("scrollAreaTravel");
        scrollAreaTravel->setStyleSheet(QString::fromUtf8("QScrollArea{\n"
"	background-color:rgb(29, 29, 29);\n"
"}"));
        scrollAreaTravel->setWidgetResizable(true);
        scrollAreaWidgetContents_3 = new QWidget();
        scrollAreaWidgetContents_3->setObjectName("scrollAreaWidgetContents_3");
        scrollAreaWidgetContents_3->setGeometry(QRect(0, 0, 684, 110));
        scrollAreaWidgetContents_3->setStyleSheet(QString::fromUtf8("QWidget{ background-color:rgb(29, 29, 29);}\n"
"QPushButton{\n"
"border: solid 0px #ffffff;\n"
"background-color: #c38200;\n"
"border-radius:15px;\n"
"font: 350 13pt \"Bahnschrift SemiLight SemiConde\";\n"
"color:rgb(255, 255, 255);\n"
"\n"
"}\n"
"\n"
"QPushButton:hover{\n"
"background-color:rgb(152, 101, 0);\n"
"border: solid 1px rgb(0, 0, 0);\n"
"}\n"
"\n"
""));
        scrollAreaTravel->setWidget(scrollAreaWidgetContents_3);

        verticalLayout_4->addWidget(scrollAreaTravel);


        verticalLayout_2->addWidget(travelGb);

        gadgetGb = new QGroupBox(scrollAreaWidgetContents);
        gadgetGb->setObjectName("gadgetGb");
        verticalLayout_5 = new QVBoxLayout(gadgetGb);
        verticalLayout_5->setObjectName("verticalLayout_5");
        fullGadgetPb = new QPushButton(gadgetGb);
        fullGadgetPb->setObjectName("fullGadgetPb");
        fullGadgetPb->setMinimumSize(QSize(0, 30));

        verticalLayout_5->addWidget(fullGadgetPb);

        scrollArea_2 = new QScrollArea(gadgetGb);
        scrollArea_2->setObjectName("scrollArea_2");
        scrollArea_2->setStyleSheet(QString::fromUtf8("QScrollArea{\n"
"	background-color:rgb(29, 29, 29);\n"
"}"));
        scrollArea_2->setWidgetResizable(true);
        scrollAreaWidgetContents_4 = new QWidget();
        scrollAreaWidgetContents_4->setObjectName("scrollAreaWidgetContents_4");
        scrollAreaWidgetContents_4->setGeometry(QRect(0, 0, 684, 111));
        scrollAreaWidgetContents_4->setStyleSheet(QString::fromUtf8("QWidget{ background-color:rgb(29, 29, 29);}\n"
"QPushButton{\n"
"border: solid 0px #ffffff;\n"
"background-color: #c38200;\n"
"border-radius:15px;\n"
"font: 350 13pt \"Bahnschrift SemiLight SemiConde\";\n"
"color:rgb(255, 255, 255);\n"
"\n"
"}\n"
"\n"
"QPushButton:hover{\n"
"background-color:rgb(152, 101, 0);\n"
"border: solid 1px rgb(0, 0, 0);\n"
"}\n"
"\n"
""));
        scrollArea_2->setWidget(scrollAreaWidgetContents_4);

        verticalLayout_5->addWidget(scrollArea_2);


        verticalLayout_2->addWidget(gadgetGb);

        scrollArea->setWidget(scrollAreaWidgetContents);

        verticalLayout->addWidget(scrollArea);


        retranslateUi(MyInsurances);

        QMetaObject::connectSlotsByName(MyInsurances);
    } // setupUi

    void retranslateUi(QDialog *MyInsurances)
    {
        MyInsurances->setWindowTitle(QCoreApplication::translate("MyInsurances", "Manage Insurances", nullptr));
        autoGb->setTitle(QCoreApplication::translate("MyInsurances", "Auto Insurance", nullptr));
        fullAutoPb->setText(QCoreApplication::translate("MyInsurances", "Full window", nullptr));
        travelGb->setTitle(QCoreApplication::translate("MyInsurances", "Travel Insurance", nullptr));
        fullTravelPb->setText(QCoreApplication::translate("MyInsurances", "Full window", nullptr));
        gadgetGb->setTitle(QCoreApplication::translate("MyInsurances", "Gadget Insurance", nullptr));
        fullGadgetPb->setText(QCoreApplication::translate("MyInsurances", "Full window", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MyInsurances: public Ui_MyInsurances {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MYINSURANCES_H
