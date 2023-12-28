/********************************************************************************
** Form generated from reading UI file 'confirmpurchasingauto.ui'
**
** Created by: Qt User Interface Compiler version 6.6.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CONFIRMPURCHASINGAUTO_H
#define UI_CONFIRMPURCHASINGAUTO_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ConfirmPurchasingAuto
{
public:
    QGridLayout *gridLayout_2;
    QSpacerItem *verticalSpacer_2;
    QSpacerItem *verticalSpacer_9;
    QPushButton *confirmPurchasingPb;
    QSpacerItem *horizontalSpacer_2;
    QSpacerItem *horizontalSpacer;
    QSpacerItem *verticalSpacer;
    QWidget *verticalWidget;
    QGridLayout *gridLayout;
    QLineEdit *autoYearLn;
    QSpacerItem *verticalSpacer_5;
    QSpacerItem *verticalSpacer_7;
    QLineEdit *autoPriceLn;
    QLineEdit *autoNumberLn;
    QLineEdit *autoBrandLn;
    QSpacerItem *verticalSpacer_6;
    QSpacerItem *horizontalSpacer_3;
    QLabel *label;
    QLineEdit *autoModelLn;
    QSpacerItem *verticalSpacer_3;
    QSpacerItem *verticalSpacer_8;
    QSpacerItem *verticalSpacer_4;
    QSpacerItem *horizontalSpacer_4;

    void setupUi(QDialog *ConfirmPurchasingAuto)
    {
        if (ConfirmPurchasingAuto->objectName().isEmpty())
            ConfirmPurchasingAuto->setObjectName("ConfirmPurchasingAuto");
        ConfirmPurchasingAuto->resize(526, 493);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/img/check.png"), QSize(), QIcon::Normal, QIcon::Off);
        ConfirmPurchasingAuto->setWindowIcon(icon);
        ConfirmPurchasingAuto->setStyleSheet(QString::fromUtf8("QDialog {\n"
"                    background:qlineargradient(x1:0, y1:0, x2:0, y2:1, \n"
"                          stop:0.03 rgba(184,193,201,1), \n"
"                          stop:0.27 rgba(107,150,191,1), \n"
"                          stop:0.92 rgba(245,39,39,1));\n"
"}\n"
"        \n"
"QMessageBox{\n"
"	background-color: rgb(255, 255, 255);\n"
"	color:rgb(25, 25, 25);\n"
"	font: 350 12pt \"Bahnschrift SemiLight SemiConde\";\n"
"} \n"
"   "));
        gridLayout_2 = new QGridLayout(ConfirmPurchasingAuto);
        gridLayout_2->setObjectName("gridLayout_2");
        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_2->addItem(verticalSpacer_2, 0, 1, 1, 1);

        verticalSpacer_9 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_2->addItem(verticalSpacer_9, 2, 1, 1, 1);

        confirmPurchasingPb = new QPushButton(ConfirmPurchasingAuto);
        confirmPurchasingPb->setObjectName("confirmPurchasingPb");
        confirmPurchasingPb->setMinimumSize(QSize(170, 40));
        QFont font;
        font.setFamilies({QString::fromUtf8("Franklin Gothic Heavy")});
        font.setPointSize(14);
        confirmPurchasingPb->setFont(font);
        confirmPurchasingPb->setStyleSheet(QString::fromUtf8("\n"
"\n"
"QPushButton{\n"
"border: solid 0px #ffffff;\n"
"background-color: rgb(83, 144, 190);;\n"
"border-radius:18px;\n"
"margin-left:35px;\n"
"margin-right:35px;\n"
"color:rgb(255, 255, 255);\n"
"}\n"
"\n"
"QPushButton:hover{\n"
"border: 1.5px inset rgb(1, 1, 1);\n"
"background-color: rgb(59, 104, 136);\n"
"border-radius:18px;\n"
"}"));

        gridLayout_2->addWidget(confirmPurchasingPb, 3, 1, 1, 1);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_2->addItem(horizontalSpacer_2, 1, 2, 1, 1);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_2->addItem(horizontalSpacer, 1, 0, 1, 1);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_2->addItem(verticalSpacer, 4, 1, 1, 1);

        verticalWidget = new QWidget(ConfirmPurchasingAuto);
        verticalWidget->setObjectName("verticalWidget");
        verticalWidget->setStyleSheet(QString::fromUtf8("QWidget{\n"
"	background-color:rgb(245, 245, 245);\n"
"	border:0px solid;\n"
"	border-radius:20px;\n"
"}\n"
"\n"
"QLineEdit{\n"
"	background-color:rgb(110, 151, 190);\n"
"	font: 350 13pt \"Bahnschrift SemiLight SemiConde\";\n"
"	color:rgb(1, 1, 1);\n"
"	border:0px;\n"
"padding-left:15px;\n"
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
""));
        gridLayout = new QGridLayout(verticalWidget);
        gridLayout->setObjectName("gridLayout");
        autoYearLn = new QLineEdit(verticalWidget);
        autoYearLn->setObjectName("autoYearLn");
        autoYearLn->setMinimumSize(QSize(0, 35));

        gridLayout->addWidget(autoYearLn, 8, 1, 1, 1);

        verticalSpacer_5 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer_5, 3, 1, 1, 1);

        verticalSpacer_7 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer_7, 7, 1, 1, 1);

        autoPriceLn = new QLineEdit(verticalWidget);
        autoPriceLn->setObjectName("autoPriceLn");
        autoPriceLn->setMinimumSize(QSize(0, 35));

        gridLayout->addWidget(autoPriceLn, 10, 1, 1, 1);

        autoNumberLn = new QLineEdit(verticalWidget);
        autoNumberLn->setObjectName("autoNumberLn");
        autoNumberLn->setMinimumSize(QSize(0, 35));

        gridLayout->addWidget(autoNumberLn, 2, 1, 1, 1);

        autoBrandLn = new QLineEdit(verticalWidget);
        autoBrandLn->setObjectName("autoBrandLn");
        autoBrandLn->setMinimumSize(QSize(0, 35));

        gridLayout->addWidget(autoBrandLn, 4, 1, 1, 1);

        verticalSpacer_6 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer_6, 5, 1, 1, 1);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_3, 5, 0, 1, 1);

        label = new QLabel(verticalWidget);
        label->setObjectName("label");
        QFont font1;
        font1.setFamilies({QString::fromUtf8("Franklin Gothic Heavy")});
        font1.setPointSize(18);
        label->setFont(font1);
        label->setStyleSheet(QString::fromUtf8("QLabel{\n"
"color:rgba(245,39,39,1);\n"
"border:0px;\n"
"margin-top:5px;\n"
"};"));
        label->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label, 0, 1, 1, 1);

        autoModelLn = new QLineEdit(verticalWidget);
        autoModelLn->setObjectName("autoModelLn");
        autoModelLn->setMinimumSize(QSize(0, 35));

        gridLayout->addWidget(autoModelLn, 6, 1, 1, 1);

        verticalSpacer_3 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer_3, 11, 1, 1, 1);

        verticalSpacer_8 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer_8, 9, 1, 1, 1);

        verticalSpacer_4 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer_4, 1, 1, 1, 1);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_4, 5, 2, 1, 1);


        gridLayout_2->addWidget(verticalWidget, 1, 1, 1, 1);


        retranslateUi(ConfirmPurchasingAuto);

        QMetaObject::connectSlotsByName(ConfirmPurchasingAuto);
    } // setupUi

    void retranslateUi(QDialog *ConfirmPurchasingAuto)
    {
        ConfirmPurchasingAuto->setWindowTitle(QCoreApplication::translate("ConfirmPurchasingAuto", "Confirming purchase", nullptr));
        confirmPurchasingPb->setText(QCoreApplication::translate("ConfirmPurchasingAuto", "Confirm", nullptr));
        autoYearLn->setPlaceholderText(QCoreApplication::translate("ConfirmPurchasingAuto", "Year:", nullptr));
        autoPriceLn->setPlaceholderText(QCoreApplication::translate("ConfirmPurchasingAuto", "Price of auto($):", nullptr));
        autoNumberLn->setPlaceholderText(QCoreApplication::translate("ConfirmPurchasingAuto", "Number of auto:", nullptr));
        autoBrandLn->setPlaceholderText(QCoreApplication::translate("ConfirmPurchasingAuto", "Brand:", nullptr));
        label->setText(QCoreApplication::translate("ConfirmPurchasingAuto", "Detailed info:", nullptr));
        autoModelLn->setPlaceholderText(QCoreApplication::translate("ConfirmPurchasingAuto", "Model:", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ConfirmPurchasingAuto: public Ui_ConfirmPurchasingAuto {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CONFIRMPURCHASINGAUTO_H
