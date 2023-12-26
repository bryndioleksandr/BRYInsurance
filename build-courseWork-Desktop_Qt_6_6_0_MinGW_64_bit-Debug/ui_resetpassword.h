/********************************************************************************
** Form generated from reading UI file 'resetpassword.ui'
**
** Created by: Qt User Interface Compiler version 6.6.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_RESETPASSWORD_H
#define UI_RESETPASSWORD_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>

QT_BEGIN_NAMESPACE

class Ui_ResetPassword
{
public:
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QGridLayout *gridLayout;
    QSpacerItem *verticalSpacer;
    QSpacerItem *verticalSpacer_6;
    QSpacerItem *verticalSpacer_3;
    QSpacerItem *verticalSpacer_7;
    QLineEdit *resetPasswordLn;
    QSpacerItem *verticalSpacer_2;
    QSpacerItem *verticalSpacer_5;
    QPushButton *confirmPb;
    QSpacerItem *verticalSpacer_4;
    QCheckBox *checkBox;
    QSpacerItem *horizontalSpacer_2;

    void setupUi(QDialog *ResetPassword)
    {
        if (ResetPassword->objectName().isEmpty())
            ResetPassword->setObjectName("ResetPassword");
        ResetPassword->resize(356, 257);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/img/reset-password.png"), QSize(), QIcon::Normal, QIcon::Off);
        ResetPassword->setWindowIcon(icon);
        horizontalLayout = new QHBoxLayout(ResetPassword);
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        gridLayout = new QGridLayout();
        gridLayout->setObjectName("gridLayout");
        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer, 6, 0, 1, 1);

        verticalSpacer_6 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer_6, 8, 0, 1, 1);

        verticalSpacer_3 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer_3, 4, 0, 1, 1);

        verticalSpacer_7 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer_7, 0, 0, 1, 1);

        resetPasswordLn = new QLineEdit(ResetPassword);
        resetPasswordLn->setObjectName("resetPasswordLn");
        resetPasswordLn->setMinimumSize(QSize(180, 35));
        resetPasswordLn->setStyleSheet(QString::fromUtf8("QLineEdit{\n"
"	padding-left:5px;\n"
"	color:rgb(238, 238, 238);\n"
"	background-color:rgb(26, 26, 26);\n"
"	border:0px;\n"
"	border-radius:10px;\n"
"}\n"
"\n"
"QLineEdit:focus{\n"
"	color:rgb(238, 238, 238);\n"
"	background-color:rgb(70, 70, 70);\n"
"	border:1.5px inset rgb(10, 111, 206);\n"
"}"));

        gridLayout->addWidget(resetPasswordLn, 3, 0, 1, 1);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer_2, 2, 0, 1, 1);

        verticalSpacer_5 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer_5, 1, 0, 1, 1);

        confirmPb = new QPushButton(ResetPassword);
        confirmPb->setObjectName("confirmPb");
        confirmPb->setMinimumSize(QSize(140, 30));
        QFont font;
        font.setFamilies({QString::fromUtf8("Bahnschrift SemiLight SemiConde")});
        font.setPointSize(12);
        confirmPb->setFont(font);
        confirmPb->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"border: solid 0px #ffffff;\n"
"background-color:rgb(195, 130, 0);\n"
"padding-top: 6px;\n"
"padding-bottom: 6px;\n"
"padding-left: 15px;\n"
"padding-right: 15px;\n"
"margin-left:15px;\n"
"margin-right:15px;\n"
"border-radius:15px;\n"
"color:#fff;\n"
"}\n"
"\n"
"QPushButton:hover{\n"
"border: solid 2px rgb(0, 0, 0);\n"
"background-color: rgb(9, 100, 186);\n"
"}"));

        gridLayout->addWidget(confirmPb, 5, 0, 1, 1);

        verticalSpacer_4 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer_4, 7, 0, 1, 1);

        checkBox = new QCheckBox(ResetPassword);
        checkBox->setObjectName("checkBox");

        gridLayout->addWidget(checkBox, 3, 1, 1, 1);


        horizontalLayout->addLayout(gridLayout);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);


        retranslateUi(ResetPassword);

        QMetaObject::connectSlotsByName(ResetPassword);
    } // setupUi

    void retranslateUi(QDialog *ResetPassword)
    {
        ResetPassword->setWindowTitle(QCoreApplication::translate("ResetPassword", "Reset password", nullptr));
#if QT_CONFIG(accessibility)
        resetPasswordLn->setAccessibleDescription(QCoreApplication::translate("ResetPassword", "newPwLn", nullptr));
#endif // QT_CONFIG(accessibility)
        resetPasswordLn->setPlaceholderText(QCoreApplication::translate("ResetPassword", "Enter new password", nullptr));
        confirmPb->setText(QCoreApplication::translate("ResetPassword", "Confirm", nullptr));
        checkBox->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class ResetPassword: public Ui_ResetPassword {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_RESETPASSWORD_H
