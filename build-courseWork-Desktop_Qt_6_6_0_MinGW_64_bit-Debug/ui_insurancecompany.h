/********************************************************************************
** Form generated from reading UI file 'insurancecompany.ui'
**
** Created by: Qt User Interface Compiler version 6.6.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_INSURANCECOMPANY_H
#define UI_INSURANCECOMPANY_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_InsuranceCompany
{
public:
    QVBoxLayout *verticalLayout_2;
    QLabel *label;
    QLabel *welcomeLb;
    QSpacerItem *verticalSpacer_2;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_6;
    QSpacerItem *horizontalSpacer_3;
    QPushButton *insuranceMarketPb;
    QSpacerItem *horizontalSpacer_9;
    QSpacerItem *horizontalSpacer;
    QPushButton *accountPb;
    QSpacerItem *horizontalSpacer_5;
    QSpacerItem *verticalSpacer_4;
    QSpacerItem *verticalSpacer_3;
    QHBoxLayout *horizontalLayout_7;
    QSpacerItem *horizontalSpacer_4;
    QPushButton *insuranceEvents;
    QSpacerItem *horizontalSpacer_2;
    QSpacerItem *horizontalSpacer_10;
    QPushButton *managePoliciesPb;
    QSpacerItem *horizontalSpacer_6;
    QSpacerItem *verticalSpacer_6;
    QSpacerItem *verticalSpacer_5;
    QSpacerItem *verticalSpacer;
    QFrame *horizontalLayout_4;
    QHBoxLayout *horizontalLayout_3;
    QSpacerItem *horizontalSpacer_7;
    QPushButton *actionStorePb;
    QPushButton *actionEventsPb;
    QPushButton *actionManagePb;
    QPushButton *actionAccountPb;
    QSpacerItem *horizontalSpacer_8;

    void setupUi(QDialog *InsuranceCompany)
    {
        if (InsuranceCompany->objectName().isEmpty())
            InsuranceCompany->setObjectName("InsuranceCompany");
        InsuranceCompany->resize(595, 568);
        QFont font;
        font.setFamilies({QString::fromUtf8("Bahnschrift SemiBold Condensed")});
        font.setPointSize(14);
        font.setBold(true);
        InsuranceCompany->setFont(font);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/img/bryinsurance.png"), QSize(), QIcon::Normal, QIcon::Off);
        InsuranceCompany->setWindowIcon(icon);
        InsuranceCompany->setStyleSheet(QString::fromUtf8("QDialog{\n"
"	background-color:rgb(229, 229, 229);\n"
"}"));
        verticalLayout_2 = new QVBoxLayout(InsuranceCompany);
        verticalLayout_2->setObjectName("verticalLayout_2");
        label = new QLabel(InsuranceCompany);
        label->setObjectName("label");
        QFont font1;
        font1.setFamilies({QString::fromUtf8("Franklin Gothic Heavy")});
        label->setFont(font1);
        label->setAlignment(Qt::AlignCenter);

        verticalLayout_2->addWidget(label);

        welcomeLb = new QLabel(InsuranceCompany);
        welcomeLb->setObjectName("welcomeLb");
        QFont font2;
        font2.setFamilies({QString::fromUtf8("Franklin Gothic Heavy")});
        font2.setPointSize(16);
        welcomeLb->setFont(font2);

        verticalLayout_2->addWidget(welcomeLb);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer_2);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName("verticalLayout");
        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName("horizontalLayout_6");
        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_6->addItem(horizontalSpacer_3);

        insuranceMarketPb = new QPushButton(InsuranceCompany);
        insuranceMarketPb->setObjectName("insuranceMarketPb");
        insuranceMarketPb->setMinimumSize(QSize(212, 0));
        insuranceMarketPb->setMaximumSize(QSize(222, 16777215));
        QFont font3;
        font3.setFamilies({QString::fromUtf8("Franklin Gothic Medium")});
        font3.setPointSize(14);
        insuranceMarketPb->setFont(font3);
        insuranceMarketPb->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background: qlineargradient(x1:0, y1:0, x2:1, y2:0,\n"
"                                 stop:0 rgba(198,105,28,1),\n"
"                                 stop:0.38 rgba(198,105,28,1),\n"
"                                 stop:0.87 rgba(230,214,201,1),\n"
"                                 stop:0.99 rgba(255,255,255,1));\n"
"	color:rgb(26, 26, 26);\n"
"border: 1px solid rgb(26, 26, 26);\n"
"border-radius:45px;\n"
"padding-left:15px;\n"
"padding-right:15px;\n"
"}\n"
"\n"
"QPushButton:hover{\n"
"	 background: qlineargradient(x1:1, y1:0, x2:0, y2:0,\n"
"                                 stop:0 rgba(150, 79, 21, 1),\n"
"                                 stop:0.38 rgba(198,105,28,1),\n"
"                                 stop:0.87 rgba(230,214,201,1),\n"
"                                 stop:0.99 rgba(255,255,255,1));\n"
"}"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/img/shopping-cart.png"), QSize(), QIcon::Normal, QIcon::Off);
        insuranceMarketPb->setIcon(icon1);
        insuranceMarketPb->setIconSize(QSize(40, 40));

        horizontalLayout_6->addWidget(insuranceMarketPb);

        horizontalSpacer_9 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_6->addItem(horizontalSpacer_9);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_6->addItem(horizontalSpacer);

        accountPb = new QPushButton(InsuranceCompany);
        accountPb->setObjectName("accountPb");
        accountPb->setMinimumSize(QSize(212, 0));
        accountPb->setMaximumSize(QSize(222, 16777215));
        accountPb->setFont(font3);
        accountPb->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background: qlineargradient(x1:0, y1:0, x2:1, y2:0,\n"
"                                 stop:0 rgba(184,193,201,1),\n"
"                                 stop:0.08 rgba(184,193,201,1),\n"
"                                 stop:0.32 rgba(107,150,191,1),\n"
"                                 stop:0.85 rgba(9,100,186,1));\n"
"\n"
"	color:rgb(26, 26, 26);\n"
"border: 1px solid rgb(34, 34, 34);\n"
"border-radius:45px;\n"
"padding-left:15px;\n"
"padding-right:15px;\n"
"}\n"
"\n"
"QPushButton:hover{\n"
"	 background: qlineargradient(x1:1, y1:0, x2:0, y2:0,\n"
"                                 stop:0 rgba(7, 76, 141,1),\n"
"                                 stop:0.00 rgba(184,193,201,1),\n"
"                                 stop:0.32 rgba(107,150,191,1),\n"
"                                 stop:0.85 rgba(9,100,186,1));\n"
"}"));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/img/account.png"), QSize(), QIcon::Normal, QIcon::Off);
        accountPb->setIcon(icon2);
        accountPb->setIconSize(QSize(40, 40));

        horizontalLayout_6->addWidget(accountPb);

        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_6->addItem(horizontalSpacer_5);


        verticalLayout->addLayout(horizontalLayout_6);

        verticalSpacer_4 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer_4);

        verticalSpacer_3 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer_3);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName("horizontalLayout_7");
        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_7->addItem(horizontalSpacer_4);

        insuranceEvents = new QPushButton(InsuranceCompany);
        insuranceEvents->setObjectName("insuranceEvents");
        insuranceEvents->setMinimumSize(QSize(212, 0));
        insuranceEvents->setMaximumSize(QSize(222, 16777215));
        insuranceEvents->setFont(font3);
        insuranceEvents->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background: qlineargradient(x1:0, y1:0, x2:1, y2:0,\n"
"                                 stop:0 rgba(198,105,28,1),\n"
"                                 stop:0.38 rgba(198,105,28,1),\n"
"                                 stop:0.87 rgba(230,214,201,1),\n"
"                                 stop:0.99 rgba(255,255,255,1));\n"
"	color:rgb(26, 26, 26);\n"
"border: 1px solid rgb(26, 26, 26);\n"
"border-radius:45px;\n"
"padding-left:15px;\n"
"padding-right:15px;\n"
"}\n"
"\n"
"QPushButton:hover{\n"
"	 background: qlineargradient(x1:1, y1:0, x2:0, y2:0,\n"
"                                 stop:0 rgba(150, 79, 21, 1),\n"
"                                 stop:0.38 rgba(198,105,28,1),\n"
"                                 stop:0.87 rgba(230,214,201,1),\n"
"                                 stop:0.99 rgba(255,255,255,1));\n"
"}"));
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/img/calendar.png"), QSize(), QIcon::Normal, QIcon::Off);
        insuranceEvents->setIcon(icon3);
        insuranceEvents->setIconSize(QSize(40, 40));

        horizontalLayout_7->addWidget(insuranceEvents);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_7->addItem(horizontalSpacer_2);

        horizontalSpacer_10 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_7->addItem(horizontalSpacer_10);

        managePoliciesPb = new QPushButton(InsuranceCompany);
        managePoliciesPb->setObjectName("managePoliciesPb");
        managePoliciesPb->setFont(font3);
        managePoliciesPb->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background: qlineargradient(x1:0, y1:0, x2:1, y2:0,\n"
"                                 stop:0 rgba(184,193,201,1),\n"
"                                 stop:0.08 rgba(184,193,201,1),\n"
"                                 stop:0.32 rgba(107,150,191,1),\n"
"                                 stop:0.85 rgba(9,100,186,1));\n"
"\n"
"	color:rgb(26, 26, 26);\n"
"border: 1px solid rgb(34, 34, 34);\n"
"border-radius:45px;\n"
"padding-left:15px;\n"
"padding-right:15px;\n"
"}\n"
"\n"
"QPushButton:hover{\n"
"	 background: qlineargradient(x1:1, y1:0, x2:0, y2:0,\n"
"                                 stop:0 rgba(7, 76, 141,1),\n"
"                                 stop:0.00 rgba(184,193,201,1),\n"
"                                 stop:0.32 rgba(107,150,191,1),\n"
"                                 stop:0.85 rgba(9,100,186,1));\n"
"}"));
        QIcon icon4;
        icon4.addFile(QString::fromUtf8(":/img/planning.png"), QSize(), QIcon::Normal, QIcon::Off);
        managePoliciesPb->setIcon(icon4);
        managePoliciesPb->setIconSize(QSize(40, 40));

        horizontalLayout_7->addWidget(managePoliciesPb);

        horizontalSpacer_6 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_7->addItem(horizontalSpacer_6);


        verticalLayout->addLayout(horizontalLayout_7);


        verticalLayout_2->addLayout(verticalLayout);

        verticalSpacer_6 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer_6);

        verticalSpacer_5 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer_5);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer);

        horizontalLayout_4 = new QFrame(InsuranceCompany);
        horizontalLayout_4->setObjectName("horizontalLayout_4");
        horizontalLayout_4->setStyleSheet(QString::fromUtf8("QFrame{\n"
"	 background: qlineargradient(x1:0, y1:0, x2:1, y2:0,\n"
"                             stop:0.00 rgba(198,105,28,1),\n"
"                             stop:0.19 rgba(198,105,28,1),\n"
"                             stop:0.43 rgba(230,214,201,1),\n"
"                             stop:0.49 rgba(184,193,201,1),\n"
"                             stop:0.50 rgba(184,193,201,1),\n"
"                             stop:0.52 rgba(184,193,201,1),\n"
"                             stop:0.68 rgba(107,150,191,1),\n"
"                             stop:0.92 rgba(9,100,186,1));\n"
"\n"
"	border:1px solid rgb(49, 49, 49);\n"
"	border-radius:20px;\n"
"}"));
        horizontalLayout_3 = new QHBoxLayout(horizontalLayout_4);
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        horizontalSpacer_7 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_7);

        actionStorePb = new QPushButton(horizontalLayout_4);
        actionStorePb->setObjectName("actionStorePb");
        actionStorePb->setMinimumSize(QSize(50, 40));
        actionStorePb->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	background-color: rgba(230, 230, 225, 0.5);\n"
"	border-radius:7px;\n"
"}\n"
"\n"
"QPushButton:hover{\n"
"	background-color: rgba(145, 145, 145, 0.5);\n"
"}"));
        actionStorePb->setIcon(icon1);
        actionStorePb->setIconSize(QSize(32, 32));

        horizontalLayout_3->addWidget(actionStorePb);

        actionEventsPb = new QPushButton(horizontalLayout_4);
        actionEventsPb->setObjectName("actionEventsPb");
        actionEventsPb->setMinimumSize(QSize(50, 40));
        actionEventsPb->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	background-color: rgba(230, 230, 225, 0.5);\n"
"	border-radius:7px;\n"
"}\n"
"\n"
"QPushButton:hover{\n"
"	background-color: rgba(145, 145, 145, 0.5);\n"
"}"));
        actionEventsPb->setIcon(icon3);
        actionEventsPb->setIconSize(QSize(32, 32));

        horizontalLayout_3->addWidget(actionEventsPb);

        actionManagePb = new QPushButton(horizontalLayout_4);
        actionManagePb->setObjectName("actionManagePb");
        actionManagePb->setMinimumSize(QSize(50, 40));
        actionManagePb->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	background-color: rgba(230, 230, 225, 0.5);\n"
"	border-radius:7px;\n"
"}\n"
"\n"
"QPushButton:hover{\n"
"	background-color: rgba(145, 145, 145, 0.5);\n"
"}"));
        actionManagePb->setIcon(icon4);
        actionManagePb->setIconSize(QSize(32, 32));

        horizontalLayout_3->addWidget(actionManagePb);

        actionAccountPb = new QPushButton(horizontalLayout_4);
        actionAccountPb->setObjectName("actionAccountPb");
        actionAccountPb->setMinimumSize(QSize(50, 40));
        actionAccountPb->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	background-color: rgba(230, 230, 225, 0.5);\n"
"	border-radius:7px;\n"
"}\n"
"\n"
"QPushButton:hover{\n"
"	background-color: rgba(145, 145, 145, 0.5);\n"
"}"));
        actionAccountPb->setIcon(icon2);
        actionAccountPb->setIconSize(QSize(32, 32));

        horizontalLayout_3->addWidget(actionAccountPb);

        horizontalSpacer_8 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_8);


        verticalLayout_2->addWidget(horizontalLayout_4);


        retranslateUi(InsuranceCompany);

        QMetaObject::connectSlotsByName(InsuranceCompany);
    } // setupUi

    void retranslateUi(QDialog *InsuranceCompany)
    {
        InsuranceCompany->setWindowTitle(QCoreApplication::translate("InsuranceCompany", "BRY Company", nullptr));
        label->setText(QCoreApplication::translate("InsuranceCompany", "<html><head/><body><p><span style=\" font-size:20pt; color:#c38200;\">BRY</span><span style=\" font-size:16pt; color:#0964ba;\">Insurance<hr></span></p></body></html>", nullptr));
        welcomeLb->setText(QString());
#if QT_CONFIG(tooltip)
        insuranceMarketPb->setToolTip(QCoreApplication::translate("InsuranceCompany", "Want to purchase some insurance? \n"
"Let`s do it in 3 clicks!", nullptr));
#endif // QT_CONFIG(tooltip)
        insuranceMarketPb->setText(QCoreApplication::translate("InsuranceCompany", "\n"
"\n"
"Insurances` \n"
"Store\n"
"\n"
"", nullptr));
        accountPb->setText(QCoreApplication::translate("InsuranceCompany", "\n"
"\n"
"My \n"
"Account\n"
"\n"
"", nullptr));
        insuranceEvents->setText(QCoreApplication::translate("InsuranceCompany", "       \n"
"\n"
"My \n"
"Insurance Events\n"
"\n"
"       ", nullptr));
        managePoliciesPb->setText(QCoreApplication::translate("InsuranceCompany", "\n"
"\n"
"Manage \n"
"insurance policies\n"
"\n"
"", nullptr));
        actionStorePb->setText(QString());
        actionEventsPb->setText(QString());
        actionManagePb->setText(QString());
        actionAccountPb->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class InsuranceCompany: public Ui_InsuranceCompany {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_INSURANCECOMPANY_H
