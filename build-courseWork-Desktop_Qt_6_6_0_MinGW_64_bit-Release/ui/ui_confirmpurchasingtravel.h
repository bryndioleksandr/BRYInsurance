/********************************************************************************
** Form generated from reading UI file 'confirmpurchasingtravel.ui'
**
** Created by: Qt User Interface Compiler version 6.6.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CONFIRMPURCHASINGTRAVEL_H
#define UI_CONFIRMPURCHASINGTRAVEL_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDateEdit>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ConfirmPurchasingTravel
{
public:
    QGridLayout *gridLayout_2;
    QSpacerItem *horizontalSpacer_2;
    QSpacerItem *verticalSpacer;
    QWidget *verticalWidget;
    QGridLayout *gridLayout;
    QSpacerItem *verticalSpacer_7;
    QSpacerItem *verticalSpacer_5;
    QDateEdit *birthDateDe;
    QLabel *label;
    QSpacerItem *verticalSpacer_3;
    QSpacerItem *verticalSpacer_4;
    QLineEdit *passportLn;
    QLineEdit *cityLn;
    QSpacerItem *verticalSpacer_6;
    QLineEdit *emailLn;
    QSpacerItem *horizontalSpacer_3;
    QSpacerItem *horizontalSpacer_4;
    QPushButton *confirmPb;
    QSpacerItem *horizontalSpacer;
    QSpacerItem *verticalSpacer_2;
    QSpacerItem *verticalSpacer_8;

    void setupUi(QDialog *ConfirmPurchasingTravel)
    {
        if (ConfirmPurchasingTravel->objectName().isEmpty())
            ConfirmPurchasingTravel->setObjectName("ConfirmPurchasingTravel");
        ConfirmPurchasingTravel->resize(440, 483);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/img/check.png"), QSize(), QIcon::Normal, QIcon::Off);
        ConfirmPurchasingTravel->setWindowIcon(icon);
        ConfirmPurchasingTravel->setStyleSheet(QString::fromUtf8("QDialog{\n"
"background: qlineargradient(x1:0, y1:0, x2:0, y2:1, \n"
"                                 stop:0.03 rgba(205,212,219,1), \n"
"                                 stop:0.32 rgba(37,128,214,1), \n"
"                                 stop:0.85 rgba(9,186,44,1));\n"
"}\n"
"\n"
"QMessageBox{\n"
"	background-color: rgb(255, 255, 255);\n"
"	color:rgb(25, 25, 25);\n"
"	font: 350 12pt \"Bahnschrift SemiLight SemiConde\";\n"
"}"));
        gridLayout_2 = new QGridLayout(ConfirmPurchasingTravel);
        gridLayout_2->setObjectName("gridLayout_2");
        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_2->addItem(horizontalSpacer_2, 1, 2, 1, 1);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_2->addItem(verticalSpacer, 4, 1, 1, 1);

        verticalWidget = new QWidget(ConfirmPurchasingTravel);
        verticalWidget->setObjectName("verticalWidget");
        verticalWidget->setStyleSheet(QString::fromUtf8("QWidget{\n"
"	background-color:rgb(245, 245, 245);\n"
"	border:0px solid;\n"
"	border-radius:20px;\n"
"}\n"
"\n"
"\n"
"QLineEdit{\n"
"	background-color:rgb(37, 128, 213);\n"
"	font: 350 13pt \"Bahnschrift SemiLight SemiConde\";\n"
"	color:rgb(1, 1, 1);\n"
"	border:0px;\n"
"	border-radius:15px;\n"
"}\n"
"\n"
"QLineEdit:focus{\n"
"	background-color:rgb(28, 94, 156);\n"
"	font: 350 13pt \"Bahnschrift SemiLight SemiConde\";\n"
"	color:rgb(1, 1, 1);\n"
"	border:2px solid rgb(0, 0, 0);\n"
"	border-radius:15px;\n"
"}\n"
"\n"
"\n"
"\n"
"\n"
""));
        gridLayout = new QGridLayout(verticalWidget);
        gridLayout->setObjectName("gridLayout");
        verticalSpacer_7 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer_7, 9, 1, 1, 1);

        verticalSpacer_5 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer_5, 5, 1, 1, 1);

        birthDateDe = new QDateEdit(verticalWidget);
        birthDateDe->setObjectName("birthDateDe");
        birthDateDe->setMinimumSize(QSize(0, 35));
        QFont font;
        font.setFamilies({QString::fromUtf8("Bahnschrift SemiLight SemiConde")});
        font.setPointSize(13);
        font.setBold(false);
        font.setItalic(false);
        birthDateDe->setFont(font);
        birthDateDe->setStyleSheet(QString::fromUtf8("\n"
"background-color:rgb(37, 128, 213);;\n"
"	font: 350 13pt \"Bahnschrift SemiLight SemiConde\";\n"
"	color:rgb(1, 1, 1);\n"
"	border:0px;\n"
"	border-radius:15px;\n"
"\n"
"\n"
"\n"
"\n"
""));

        gridLayout->addWidget(birthDateDe, 2, 1, 1, 1);

        label = new QLabel(verticalWidget);
        label->setObjectName("label");
        QFont font1;
        font1.setFamilies({QString::fromUtf8("Franklin Gothic Heavy")});
        font1.setPointSize(18);
        label->setFont(font1);
        label->setStyleSheet(QString::fromUtf8("color:rgb(10, 184, 49);"));
        label->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label, 0, 1, 1, 1);

        verticalSpacer_3 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer_3, 1, 1, 1, 1);

        verticalSpacer_4 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer_4, 3, 1, 1, 1);

        passportLn = new QLineEdit(verticalWidget);
        passportLn->setObjectName("passportLn");
        passportLn->setMinimumSize(QSize(0, 35));

        gridLayout->addWidget(passportLn, 4, 1, 1, 1);

        cityLn = new QLineEdit(verticalWidget);
        cityLn->setObjectName("cityLn");
        cityLn->setMinimumSize(QSize(0, 35));

        gridLayout->addWidget(cityLn, 8, 1, 1, 1);

        verticalSpacer_6 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer_6, 7, 1, 1, 1);

        emailLn = new QLineEdit(verticalWidget);
        emailLn->setObjectName("emailLn");
        emailLn->setMinimumSize(QSize(0, 35));

        gridLayout->addWidget(emailLn, 6, 1, 1, 1);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_3, 4, 0, 1, 1);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_4, 4, 2, 1, 1);


        gridLayout_2->addWidget(verticalWidget, 1, 1, 1, 1);

        confirmPb = new QPushButton(ConfirmPurchasingTravel);
        confirmPb->setObjectName("confirmPb");
        confirmPb->setMinimumSize(QSize(0, 40));
        QFont font2;
        font2.setFamilies({QString::fromUtf8("Franklin Gothic Heavy")});
        font2.setPointSize(14);
        confirmPb->setFont(font2);
        confirmPb->setStyleSheet(QString::fromUtf8("\n"
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

        gridLayout_2->addWidget(confirmPb, 3, 1, 1, 1);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_2->addItem(horizontalSpacer, 1, 0, 1, 1);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_2->addItem(verticalSpacer_2, 0, 1, 1, 1);

        verticalSpacer_8 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_2->addItem(verticalSpacer_8, 2, 1, 1, 1);


        retranslateUi(ConfirmPurchasingTravel);

        QMetaObject::connectSlotsByName(ConfirmPurchasingTravel);
    } // setupUi

    void retranslateUi(QDialog *ConfirmPurchasingTravel)
    {
        ConfirmPurchasingTravel->setWindowTitle(QCoreApplication::translate("ConfirmPurchasingTravel", "Confirming purchase", nullptr));
        birthDateDe->setSpecialValueText(QCoreApplication::translate("ConfirmPurchasingTravel", "Birth date:", nullptr));
        label->setText(QCoreApplication::translate("ConfirmPurchasingTravel", "Detailed info:", nullptr));
        passportLn->setPlaceholderText(QCoreApplication::translate("ConfirmPurchasingTravel", "Passport number:", nullptr));
        cityLn->setPlaceholderText(QCoreApplication::translate("ConfirmPurchasingTravel", "City:", nullptr));
        emailLn->setPlaceholderText(QCoreApplication::translate("ConfirmPurchasingTravel", "Email:", nullptr));
        confirmPb->setText(QCoreApplication::translate("ConfirmPurchasingTravel", "Confirm", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ConfirmPurchasingTravel: public Ui_ConfirmPurchasingTravel {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CONFIRMPURCHASINGTRAVEL_H
