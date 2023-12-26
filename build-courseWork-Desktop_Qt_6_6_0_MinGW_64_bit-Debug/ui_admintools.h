/********************************************************************************
** Form generated from reading UI file 'admintools.ui'
**
** Created by: Qt User Interface Compiler version 6.6.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADMINTOOLS_H
#define UI_ADMINTOOLS_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>

QT_BEGIN_NAMESPACE

class Ui_AdminTools
{
public:
    QGridLayout *gridLayout_3;
    QGridLayout *gridLayout_2;
    QComboBox *deleteCb;
    QComboBox *checkCb;
    QSpacerItem *verticalSpacer;
    QSpacerItem *horizontalSpacer;
    QHBoxLayout *horizontalLayout;
    QPushButton *deleteUserPb;
    QPushButton *checkInsurancesPb;
    QPushButton *clearTablesPb;
    QLineEdit *userIdLn;
    QSpacerItem *horizontalSpacer_2;
    QSpacerItem *horizontalSpacer_3;
    QLabel *label;

    void setupUi(QDialog *AdminTools)
    {
        if (AdminTools->objectName().isEmpty())
            AdminTools->setObjectName("AdminTools");
        AdminTools->resize(685, 579);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/img/admin-with-cogwheels.png"), QSize(), QIcon::Normal, QIcon::Off);
        AdminTools->setWindowIcon(icon);
        AdminTools->setStyleSheet(QString::fromUtf8("QDialog{\n"
"	background-color:rgb(229, 229, 229);\n"
"}"));
        gridLayout_3 = new QGridLayout(AdminTools);
        gridLayout_3->setObjectName("gridLayout_3");
        gridLayout_2 = new QGridLayout();
        gridLayout_2->setObjectName("gridLayout_2");
        deleteCb = new QComboBox(AdminTools);
        deleteCb->addItem(QString());
        deleteCb->addItem(QString());
        deleteCb->addItem(QString());
        QIcon icon1;
        QString iconThemeName = QString::fromUtf8("applications-utilities");
        if (QIcon::hasThemeIcon(iconThemeName)) {
            icon1 = QIcon::fromTheme(iconThemeName);
        } else {
            icon1.addFile(QString::fromUtf8("."), QSize(), QIcon::Normal, QIcon::Off);
        }
        deleteCb->addItem(icon1, QString());
        deleteCb->setObjectName("deleteCb");

        gridLayout_2->addWidget(deleteCb, 0, 0, 1, 1);

        checkCb = new QComboBox(AdminTools);
        checkCb->addItem(QString());
        checkCb->addItem(QString());
        checkCb->addItem(QString());
        checkCb->addItem(icon1, QString());
        checkCb->setObjectName("checkCb");

        gridLayout_2->addWidget(checkCb, 0, 2, 1, 1);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_2->addItem(verticalSpacer, 2, 0, 1, 1);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_2->addItem(horizontalSpacer, 1, 1, 1, 1);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        deleteUserPb = new QPushButton(AdminTools);
        deleteUserPb->setObjectName("deleteUserPb");
        deleteUserPb->setMinimumSize(QSize(212, 0));
        deleteUserPb->setMaximumSize(QSize(222, 16777215));
        QFont font;
        font.setFamilies({QString::fromUtf8("Franklin Gothic Medium")});
        font.setPointSize(18);
        deleteUserPb->setFont(font);
        deleteUserPb->setStyleSheet(QString::fromUtf8("QPushButton {\n"
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
        icon2.addFile(QString::fromUtf8(":/img/remove-user.png"), QSize(), QIcon::Normal, QIcon::Off);
        deleteUserPb->setIcon(icon2);
        deleteUserPb->setIconSize(QSize(40, 40));

        horizontalLayout->addWidget(deleteUserPb);


        gridLayout_2->addLayout(horizontalLayout, 5, 0, 1, 3);

        checkInsurancesPb = new QPushButton(AdminTools);
        checkInsurancesPb->setObjectName("checkInsurancesPb");
        checkInsurancesPb->setMinimumSize(QSize(212, 0));
        checkInsurancesPb->setMaximumSize(QSize(222, 16777215));
        checkInsurancesPb->setFont(font);
        checkInsurancesPb->setStyleSheet(QString::fromUtf8("QPushButton {\n"
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
"}\n"
"\n"
""));
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/img/recruitment.png"), QSize(), QIcon::Normal, QIcon::Off);
        checkInsurancesPb->setIcon(icon3);
        checkInsurancesPb->setIconSize(QSize(40, 40));

        gridLayout_2->addWidget(checkInsurancesPb, 1, 2, 1, 1);

        clearTablesPb = new QPushButton(AdminTools);
        clearTablesPb->setObjectName("clearTablesPb");
        clearTablesPb->setMinimumSize(QSize(212, 0));
        clearTablesPb->setMaximumSize(QSize(222, 16777215));
        clearTablesPb->setFont(font);
        clearTablesPb->setStyleSheet(QString::fromUtf8("QPushButton {\n"
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
        QIcon icon4;
        icon4.addFile(QString::fromUtf8(":/img/drop.png"), QSize(), QIcon::Normal, QIcon::Off);
        clearTablesPb->setIcon(icon4);
        clearTablesPb->setIconSize(QSize(40, 40));

        gridLayout_2->addWidget(clearTablesPb, 1, 0, 1, 1);

        userIdLn = new QLineEdit(AdminTools);
        userIdLn->setObjectName("userIdLn");
        userIdLn->setMinimumSize(QSize(0, 30));
        QFont font1;
        font1.setFamilies({QString::fromUtf8("Bahnschrift SemiLight SemiConde")});
        font1.setPointSize(13);
        userIdLn->setFont(font1);
        userIdLn->setStyleSheet(QString::fromUtf8("QLineEdit{\n"
"	background-color:rgb(232, 232, 232);\n"
"	border: 1px solid rgb(209, 136, 0);\n"
"	border-radius: 15px;\n"
"	padding-left: 5px;\n"
"margin-left:80px;\n"
"margin-right:80px;\n"
"	color:rgb(40, 40, 40);\n"
"}\n"
"\n"
"QLineEdit:focus{\n"
"	border: 2px solid rgb(9, 100, 186);\n"
"	background-color: rgb(208, 208, 208)\n"
"}"));

        gridLayout_2->addWidget(userIdLn, 3, 0, 1, 3);


        gridLayout_3->addLayout(gridLayout_2, 1, 1, 1, 1);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_3->addItem(horizontalSpacer_2, 1, 0, 1, 1);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_3->addItem(horizontalSpacer_3, 1, 2, 1, 1);

        label = new QLabel(AdminTools);
        label->setObjectName("label");
        QFont font2;
        font2.setFamilies({QString::fromUtf8("Franklin Gothic Heavy")});
        label->setFont(font2);
        label->setAlignment(Qt::AlignCenter);

        gridLayout_3->addWidget(label, 0, 1, 1, 1);


        retranslateUi(AdminTools);

        QMetaObject::connectSlotsByName(AdminTools);
    } // setupUi

    void retranslateUi(QDialog *AdminTools)
    {
        AdminTools->setWindowTitle(QCoreApplication::translate("AdminTools", "Administator mode", nullptr));
        deleteCb->setItemText(0, QCoreApplication::translate("AdminTools", "Users", nullptr));
        deleteCb->setItemText(1, QCoreApplication::translate("AdminTools", "AutoInsurance", nullptr));
        deleteCb->setItemText(2, QCoreApplication::translate("AdminTools", "TravelInsurance", nullptr));
        deleteCb->setItemText(3, QCoreApplication::translate("AdminTools", "GadgetInsurance", nullptr));

        deleteCb->setPlaceholderText(QCoreApplication::translate("AdminTools", "Table to delete", nullptr));
        checkCb->setItemText(0, QCoreApplication::translate("AdminTools", "Users", nullptr));
        checkCb->setItemText(1, QCoreApplication::translate("AdminTools", "AutoInsurance", nullptr));
        checkCb->setItemText(2, QCoreApplication::translate("AdminTools", "TravelInsurance", nullptr));
        checkCb->setItemText(3, QCoreApplication::translate("AdminTools", "GadgetInsurance", nullptr));

        checkCb->setPlaceholderText(QCoreApplication::translate("AdminTools", "Table to check", nullptr));
        deleteUserPb->setText(QCoreApplication::translate("AdminTools", "\n"
"\n"
"Remove\n"
"User\n"
"\n"
"", nullptr));
        checkInsurancesPb->setText(QCoreApplication::translate("AdminTools", "\n"
"\n"
"Check out\n"
"Insurances\n"
"\n"
"", nullptr));
        clearTablesPb->setText(QCoreApplication::translate("AdminTools", "       \n"
"\n"
"Delete\n"
"Data\n"
"\n"
"       ", nullptr));
        userIdLn->setPlaceholderText(QCoreApplication::translate("AdminTools", "User ID to remove him:", nullptr));
        label->setText(QCoreApplication::translate("AdminTools", "<html><head/><body><p><span style=\" font-size:20pt; color:#c38200;\">BRY</span><span style=\" font-size:16pt; color:#0964ba;\">Insurance</span></p><p><span style=\" font-size:16pt; color:#0964ba;\">Administator mode</span></p><hr/></body></html>", nullptr));
    } // retranslateUi

};

namespace Ui {
    class AdminTools: public Ui_AdminTools {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADMINTOOLS_H
