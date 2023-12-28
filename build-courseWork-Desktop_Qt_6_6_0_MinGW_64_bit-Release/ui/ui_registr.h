/********************************************************************************
** Form generated from reading UI file 'registr.ui'
**
** Created by: Qt User Interface Compiler version 6.6.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_REGISTR_H
#define UI_REGISTR_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_Registr
{
public:
    QGridLayout *gridLayout;
    QSpacerItem *horizontalSpacer_10;
    QSpacerItem *horizontalSpacer_5;
    QSpacerItem *horizontalSpacer_8;
    QSpacerItem *horizontalSpacer_3;
    QSpacerItem *horizontalSpacer_9;
    QFrame *verticalFrame;
    QVBoxLayout *verticalLayout_2;
    QLabel *label_2;
    QSpacerItem *verticalSpacer_2;
    QLabel *label;
    QSpacerItem *verticalSpacer;
    QVBoxLayout *verticalLayout_4;
    QLineEdit *surnameLn;
    QLineEdit *nameLn;
    QLineEdit *phonenumLn;
    QLineEdit *questionLn;
    QLineEdit *answearLn;
    QLineEdit *usernameLn;
    QHBoxLayout *horizontalLayout;
    QLineEdit *passwordLn;
    QCheckBox *showPasswordCb;
    QSpacerItem *verticalSpacer_17;
    QVBoxLayout *verticalLayout_5;
    QPushButton *confirmPb;
    QSpacerItem *verticalSpacer_3;
    QSpacerItem *horizontalSpacer_4;
    QSpacerItem *horizontalSpacer_7;
    QSpacerItem *horizontalSpacer_6;

    void setupUi(QDialog *Registr)
    {
        if (Registr->objectName().isEmpty())
            Registr->setObjectName("Registr");
        Registr->resize(938, 820);
        QFont font;
        font.setFamilies({QString::fromUtf8("Bahnschrift SemiBold SemiConden")});
        font.setPointSize(14);
        font.setBold(true);
        Registr->setFont(font);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/img/user.png"), QSize(), QIcon::Normal, QIcon::Off);
        Registr->setWindowIcon(icon);
        Registr->setStyleSheet(QString::fromUtf8("QDialog {\n"
"    background: qlineargradient(x1:1, y1:0, x2:0, y2:0, \n"
"                                  stop:0 rgba(2,0,36,1), \n"
"                                  stop:0.36 rgba(171,82,9,1), \n"
"                                  stop:0.97 rgba(8,62,148,1));\n"
"color:rgb(211, 211, 211);\n"
"}\n"
"\n"
"QMessageBox{\n"
"	background-color: rgb(255, 255, 255);\n"
"	color:rgb(25, 25, 25);\n"
"	font: 350 12pt \"Bahnschrift SemiLight SemiConde\";\n"
"}\n"
"\n"
"QLineEdit{\n"
"	background-color:rgb(232, 232, 232);\n"
"	border: 1px solid rgb(209, 136, 0);\n"
"	border-radius: 18px;\n"
"	padding-left: 5px;\n"
"	color:rgb(40, 40, 40);\n"
"}\n"
"\n"
"QLineEdit:focus{\n"
"	border: 2px solid rgb(9, 100, 186);\n"
"	background-color: rgb(208, 208, 208)\n"
"}"));
        gridLayout = new QGridLayout(Registr);
        gridLayout->setObjectName("gridLayout");
        horizontalSpacer_10 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_10, 4, 1, 1, 1);

        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_5, 6, 1, 1, 1);

        horizontalSpacer_8 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_8, 1, 1, 1, 1);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_3, 3, 0, 1, 1);

        horizontalSpacer_9 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_9, 2, 1, 1, 1);

        verticalFrame = new QFrame(Registr);
        verticalFrame->setObjectName("verticalFrame");
        verticalFrame->setStyleSheet(QString::fromUtf8("QFrame{\n"
"	background-color:#fff\n"
"}"));
        verticalFrame->setFrameShape(QFrame::Box);
        verticalFrame->setLineWidth(2);
        verticalLayout_2 = new QVBoxLayout(verticalFrame);
        verticalLayout_2->setObjectName("verticalLayout_2");
        label_2 = new QLabel(verticalFrame);
        label_2->setObjectName("label_2");
        QFont font1;
        font1.setFamilies({QString::fromUtf8("Franklin Gothic Heavy")});
        label_2->setFont(font1);

        verticalLayout_2->addWidget(label_2);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer_2);

        label = new QLabel(verticalFrame);
        label->setObjectName("label");
        QFont font2;
        font2.setFamilies({QString::fromUtf8("Franklin Gothic Heavy")});
        font2.setPointSize(26);
        font2.setBold(false);
        label->setFont(font2);
        label->setStyleSheet(QString::fromUtf8("QLabel{\n"
"color: rgb(9, 100, 186);\n"
"\n"
"}\n"
""));
        label->setAlignment(Qt::AlignCenter);

        verticalLayout_2->addWidget(label);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer);

        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setObjectName("verticalLayout_4");
        surnameLn = new QLineEdit(verticalFrame);
        surnameLn->setObjectName("surnameLn");
        surnameLn->setMaximumSize(QSize(16777215, 16777215));
        QFont font3;
        font3.setFamilies({QString::fromUtf8("Sans Serif Collection")});
        font3.setPointSize(10);
        font3.setBold(false);
        surnameLn->setFont(font3);
        surnameLn->setStyleSheet(QString::fromUtf8("QLineEdit{\n"
"	background-color:rgb(232, 232, 232);\n"
"	border: 1px solid rgb(209, 136, 0);\n"
"	border-radius: 18px;\n"
"	padding-left: 5px;\n"
"	color:rgb(40, 40, 40);\n"
"	margin-left:17px;\n"
"	margin-right:17px;\n"
"	margin-top: 10px;\n"
"margin-bottom:10px;\n"
"}\n"
"\n"
"QLineEdit:focus{\n"
"	border: 2px solid rgb(9, 100, 186);\n"
"	background-color: rgb(208, 208, 208)\n"
"}"));

        verticalLayout_4->addWidget(surnameLn);

        nameLn = new QLineEdit(verticalFrame);
        nameLn->setObjectName("nameLn");
        nameLn->setMaximumSize(QSize(16777215, 16777215));
        nameLn->setFont(font3);
        nameLn->setStyleSheet(QString::fromUtf8("QLineEdit{\n"
"	background-color:rgb(232, 232, 232);\n"
"	border: 1px solid rgb(209, 136, 0);\n"
"	border-radius: 18px;\n"
"	padding-left: 5px;\n"
"	color:rgb(40, 40, 40);\n"
"margin-left:17px;\n"
"	margin-right:17px;\n"
"margin-bottom:10px;\n"
"}\n"
"\n"
"QLineEdit:focus{\n"
"	border: 2px solid rgb(9, 100, 186);\n"
"	background-color: rgb(208, 208, 208)\n"
"}"));

        verticalLayout_4->addWidget(nameLn);

        phonenumLn = new QLineEdit(verticalFrame);
        phonenumLn->setObjectName("phonenumLn");
        phonenumLn->setMaximumSize(QSize(16777215, 16777215));
        phonenumLn->setFont(font3);
        phonenumLn->setStyleSheet(QString::fromUtf8("QLineEdit{\n"
"	background-color:rgb(232, 232, 232);\n"
"	border: 1px solid rgb(209, 136, 0);\n"
"	border-radius: 18px;\n"
"	padding-left: 5px;\n"
"	color:rgb(40, 40, 40);\n"
"margin-left:17px;\n"
"	margin-right:17px;\n"
"margin-bottom:10px;\n"
"}\n"
"\n"
"QLineEdit:focus{\n"
"	border: 2px solid rgb(9, 100, 186);\n"
"	background-color: rgb(208, 208, 208)\n"
"}"));

        verticalLayout_4->addWidget(phonenumLn);

        questionLn = new QLineEdit(verticalFrame);
        questionLn->setObjectName("questionLn");
        questionLn->setMaximumSize(QSize(16777215, 16777215));
        questionLn->setFont(font3);
        questionLn->setStyleSheet(QString::fromUtf8("QLineEdit{\n"
"	background-color:rgb(232, 232, 232);\n"
"	border: 1px solid rgb(209, 136, 0);\n"
"	border-radius: 18px;\n"
"	padding-left: 5px;\n"
"	color:rgb(40, 40, 40);\n"
"margin-left:17px;\n"
"	margin-right:17px;\n"
"margin-bottom:10px;\n"
"}\n"
"\n"
"QLineEdit:focus{\n"
"	border: 2px solid rgb(9, 100, 186);\n"
"	background-color: rgb(208, 208, 208)\n"
"}"));

        verticalLayout_4->addWidget(questionLn);

        answearLn = new QLineEdit(verticalFrame);
        answearLn->setObjectName("answearLn");
        answearLn->setMaximumSize(QSize(16777215, 16777215));
        answearLn->setFont(font3);
        answearLn->setStyleSheet(QString::fromUtf8("QLineEdit{\n"
"	background-color:rgb(232, 232, 232);\n"
"	border: 1px solid rgb(209, 136, 0);\n"
"	border-radius: 18px;\n"
"	padding-left: 5px;\n"
"	color:rgb(40, 40, 40);\n"
"margin-left:17px;\n"
"	margin-right:17px;\n"
"margin-bottom:10px;\n"
"}\n"
"\n"
"QLineEdit:focus{\n"
"	border: 2px solid rgb(9, 100, 186);\n"
"	background-color: rgb(208, 208, 208)\n"
"}"));

        verticalLayout_4->addWidget(answearLn);

        usernameLn = new QLineEdit(verticalFrame);
        usernameLn->setObjectName("usernameLn");
        usernameLn->setMaximumSize(QSize(16777215, 16777215));
        usernameLn->setFont(font3);
        usernameLn->setStyleSheet(QString::fromUtf8("QLineEdit{\n"
"	background-color:rgb(232, 232, 232);\n"
"	border: 1px solid rgb(209, 136, 0);\n"
"	border-radius: 18px;\n"
"	padding-left: 5px;\n"
"	color:rgb(40, 40, 40);\n"
"margin-left:17px;\n"
"	margin-right:17px;\n"
"margin-bottom:10px;\n"
"}\n"
"\n"
"QLineEdit:focus{\n"
"	border: 2px solid rgb(9, 100, 186);\n"
"	background-color: rgb(208, 208, 208)\n"
"}"));

        verticalLayout_4->addWidget(usernameLn);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        passwordLn = new QLineEdit(verticalFrame);
        passwordLn->setObjectName("passwordLn");
        passwordLn->setMaximumSize(QSize(16777215, 16777215));
        passwordLn->setFont(font3);
        passwordLn->setStyleSheet(QString::fromUtf8("QLineEdit{\n"
"	background-color:rgb(232, 232, 232);\n"
"	border: 1px solid rgb(209, 136, 0);\n"
"	border-radius: 18px;\n"
"	padding-left: 5px;\n"
"	color:rgb(40, 40, 40);\n"
"	margin-left:17px;\n"
"\n"
"}\n"
"\n"
"QLineEdit:focus{\n"
"	border: 2px solid rgb(9, 100, 186);\n"
"	background-color: rgb(208, 208, 208)\n"
"}"));

        horizontalLayout->addWidget(passwordLn);

        showPasswordCb = new QCheckBox(verticalFrame);
        showPasswordCb->setObjectName("showPasswordCb");

        horizontalLayout->addWidget(showPasswordCb);


        verticalLayout_4->addLayout(horizontalLayout);


        verticalLayout_2->addLayout(verticalLayout_4);

        verticalSpacer_17 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer_17);

        verticalLayout_5 = new QVBoxLayout();
        verticalLayout_5->setObjectName("verticalLayout_5");
        confirmPb = new QPushButton(verticalFrame);
        confirmPb->setObjectName("confirmPb");
        QFont font4;
        font4.setFamilies({QString::fromUtf8("Franklin Gothic Heavy")});
        font4.setPointSize(18);
        confirmPb->setFont(font4);
        confirmPb->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"border: solid 0px #ffffff;\n"
"background-color: #c38200;\n"
"padding-top: 6px;\n"
"padding-bottom: 6px;\n"
"padding-left: 15px;\n"
"padding-right: 15px;\n"
"border-radius:18px;\n"
"margin-left:10px;\n"
"margin-right:10px;\n"
"color:#fff;\n"
"}\n"
"\n"
"QPushButton:hover{\n"
"border: solid 2px rgb(0, 0, 0);\n"
"background-color: rgb(7, 78, 145);\n"
"padding-top: 6px;\n"
"padding-bottom: 6px;\n"
"padding-left: 15px;\n"
"padding-right: 15px;\n"
"border-radius:18px;\n"
"}"));

        verticalLayout_5->addWidget(confirmPb);


        verticalLayout_2->addLayout(verticalLayout_5);

        verticalSpacer_3 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer_3);


        gridLayout->addWidget(verticalFrame, 3, 1, 1, 1);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_4, 3, 2, 1, 1);

        horizontalSpacer_7 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_7, 5, 1, 1, 1);

        horizontalSpacer_6 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_6, 0, 1, 1, 1);


        retranslateUi(Registr);

        QMetaObject::connectSlotsByName(Registr);
    } // setupUi

    void retranslateUi(QDialog *Registr)
    {
        Registr->setWindowTitle(QCoreApplication::translate("Registr", "Dialog", nullptr));
        label_2->setText(QCoreApplication::translate("Registr", "<html><head/><body><p align=\"center\"><span style=\" font-size:18pt; color:#c38200;\">BRY</span><span style=\" font-size:14pt; color:#0964ba;\">Insurance</span></p><hr/></body></html>", nullptr));
        label->setText(QCoreApplication::translate("Registr", "SIGN UP", nullptr));
        surnameLn->setPlaceholderText(QCoreApplication::translate("Registr", "Surname:", nullptr));
        nameLn->setPlaceholderText(QCoreApplication::translate("Registr", "Name:", nullptr));
        phonenumLn->setPlaceholderText(QCoreApplication::translate("Registr", "Phone number:", nullptr));
        questionLn->setPlaceholderText(QCoreApplication::translate("Registr", "Secret question:", nullptr));
        answearLn->setPlaceholderText(QCoreApplication::translate("Registr", "Answer to question:", nullptr));
        usernameLn->setPlaceholderText(QCoreApplication::translate("Registr", "Username:", nullptr));
        passwordLn->setPlaceholderText(QCoreApplication::translate("Registr", "Password:", nullptr));
        showPasswordCb->setText(QString());
        confirmPb->setText(QCoreApplication::translate("Registr", "Confirm", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Registr: public Ui_Registr {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_REGISTR_H
