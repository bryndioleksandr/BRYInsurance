/********************************************************************************
** Form generated from reading UI file 'confirmpurchasinggadget.ui'
**
** Created by: Qt User Interface Compiler version 6.6.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CONFIRMPURCHASINGGADGET_H
#define UI_CONFIRMPURCHASINGGADGET_H

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

class Ui_ConfirmPurchasingGadget
{
public:
    QGridLayout *gridLayout_2;
    QSpacerItem *horizontalSpacer_4;
    QSpacerItem *horizontalSpacer_3;
    QSpacerItem *verticalSpacer_10;
    QSpacerItem *verticalSpacer_6;
    QSpacerItem *verticalSpacer_11;
    QSpacerItem *verticalSpacer_8;
    QWidget *verticalWidget;
    QGridLayout *gridLayout;
    QLabel *label;
    QLineEdit *phoneNumberLn;
    QLineEdit *gadgetBrandLn;
    QSpacerItem *horizontalSpacer;
    QSpacerItem *verticalSpacer;
    QSpacerItem *verticalSpacer_4;
    QSpacerItem *verticalSpacer_3;
    QLineEdit *gadgetModelLn;
    QSpacerItem *verticalSpacer_2;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *purchasePb;
    QSpacerItem *verticalSpacer_9;
    QSpacerItem *verticalSpacer_7;
    QSpacerItem *verticalSpacer_12;

    void setupUi(QDialog *ConfirmPurchasingGadget)
    {
        if (ConfirmPurchasingGadget->objectName().isEmpty())
            ConfirmPurchasingGadget->setObjectName("ConfirmPurchasingGadget");
        ConfirmPurchasingGadget->resize(459, 498);
        ConfirmPurchasingGadget->setMinimumSize(QSize(0, 40));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/img/check.png"), QSize(), QIcon::Normal, QIcon::Off);
        ConfirmPurchasingGadget->setWindowIcon(icon);
        ConfirmPurchasingGadget->setStyleSheet(QString::fromUtf8("QDialog{ \n"
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
        gridLayout_2 = new QGridLayout(ConfirmPurchasingGadget);
        gridLayout_2->setObjectName("gridLayout_2");
        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_2->addItem(horizontalSpacer_4, 3, 2, 1, 1);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_2->addItem(horizontalSpacer_3, 3, 0, 1, 1);

        verticalSpacer_10 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_2->addItem(verticalSpacer_10, 8, 1, 1, 1);

        verticalSpacer_6 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_2->addItem(verticalSpacer_6, 0, 1, 1, 1);

        verticalSpacer_11 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_2->addItem(verticalSpacer_11, 7, 1, 1, 1);

        verticalSpacer_8 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_2->addItem(verticalSpacer_8, 2, 1, 1, 1);

        verticalWidget = new QWidget(ConfirmPurchasingGadget);
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
"	color:rgb(1, 1, 1);\n"
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
"	color:rgb(255, 255, 255);\n"
"	border:2px solid rgb(0, 0, 0);\n"
"	border-radius:15px;\n"
"}\n"
"\n"
"\n"
"\n"
"QPushButton{\n"
"border: solid 0px #ffffff;\n"
"back"
                        "ground-color: rgb(36, 126, 210);\n"
"border-radius:18px;\n"
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
        label = new QLabel(verticalWidget);
        label->setObjectName("label");
        QFont font;
        font.setFamilies({QString::fromUtf8("Franklin Gothic Heavy")});
        font.setPointSize(18);
        label->setFont(font);
        label->setStyleSheet(QString::fromUtf8("QLabel{\n"
"color:rgb(51, 55, 148);\n"
"border:0px;\n"
"margin-top:5px;\n"
"};"));
        label->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label, 0, 1, 1, 1);

        phoneNumberLn = new QLineEdit(verticalWidget);
        phoneNumberLn->setObjectName("phoneNumberLn");
        phoneNumberLn->setMinimumSize(QSize(180, 38));

        gridLayout->addWidget(phoneNumberLn, 2, 1, 1, 1);

        gadgetBrandLn = new QLineEdit(verticalWidget);
        gadgetBrandLn->setObjectName("gadgetBrandLn");
        gadgetBrandLn->setMinimumSize(QSize(180, 38));

        gridLayout->addWidget(gadgetBrandLn, 4, 1, 1, 1);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer, 0, 0, 1, 1);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer, 7, 1, 1, 1);

        verticalSpacer_4 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer_4, 1, 1, 1, 1);

        verticalSpacer_3 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer_3, 3, 1, 1, 1);

        gadgetModelLn = new QLineEdit(verticalWidget);
        gadgetModelLn->setObjectName("gadgetModelLn");
        gadgetModelLn->setMinimumSize(QSize(180, 38));

        gridLayout->addWidget(gadgetModelLn, 6, 1, 1, 1);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer_2, 5, 1, 1, 1);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_2, 0, 2, 1, 1);


        gridLayout_2->addWidget(verticalWidget, 3, 1, 1, 1);

        purchasePb = new QPushButton(ConfirmPurchasingGadget);
        purchasePb->setObjectName("purchasePb");
        purchasePb->setMinimumSize(QSize(0, 40));
        QFont font1;
        font1.setFamilies({QString::fromUtf8("Franklin Gothic Heavy")});
        font1.setPointSize(14);
        purchasePb->setFont(font1);
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

        gridLayout_2->addWidget(purchasePb, 5, 1, 1, 1);

        verticalSpacer_9 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_2->addItem(verticalSpacer_9, 1, 1, 1, 1);

        verticalSpacer_7 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_2->addItem(verticalSpacer_7, 6, 1, 1, 1);

        verticalSpacer_12 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_2->addItem(verticalSpacer_12, 4, 1, 1, 1);


        retranslateUi(ConfirmPurchasingGadget);

        QMetaObject::connectSlotsByName(ConfirmPurchasingGadget);
    } // setupUi

    void retranslateUi(QDialog *ConfirmPurchasingGadget)
    {
        ConfirmPurchasingGadget->setWindowTitle(QCoreApplication::translate("ConfirmPurchasingGadget", "Confirming purchase", nullptr));
        label->setText(QCoreApplication::translate("ConfirmPurchasingGadget", "Detailed info:", nullptr));
        phoneNumberLn->setPlaceholderText(QCoreApplication::translate("ConfirmPurchasingGadget", "Phone number:", nullptr));
        gadgetBrandLn->setPlaceholderText(QCoreApplication::translate("ConfirmPurchasingGadget", "Gadget brand:", nullptr));
        gadgetModelLn->setPlaceholderText(QCoreApplication::translate("ConfirmPurchasingGadget", "Gadget model:", nullptr));
        purchasePb->setText(QCoreApplication::translate("ConfirmPurchasingGadget", "Confirm", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ConfirmPurchasingGadget: public Ui_ConfirmPurchasingGadget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CONFIRMPURCHASINGGADGET_H
