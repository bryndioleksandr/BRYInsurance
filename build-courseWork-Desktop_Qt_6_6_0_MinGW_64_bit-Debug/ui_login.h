/********************************************************************************
** Form generated from reading UI file 'login.ui'
**
** Created by: Qt User Interface Compiler version 6.6.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOGIN_H
#define UI_LOGIN_H

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

class Ui_Login
{
public:
    QGridLayout *gridLayout;
    QSpacerItem *verticalSpacer_12;
    QSpacerItem *horizontalSpacer_3;
    QSpacerItem *verticalSpacer_14;
    QSpacerItem *horizontalSpacer_4;
    QSpacerItem *horizontalSpacer_2;
    QSpacerItem *horizontalSpacer_6;
    QSpacerItem *horizontalSpacer_5;
    QFrame *verticalFrame;
    QVBoxLayout *verticalLayout;
    QLabel *label_3;
    QVBoxLayout *verticalLayout_2;
    QSpacerItem *verticalSpacer_16;
    QLabel *label;
    QSpacerItem *verticalSpacer_15;
    QLineEdit *usernameLn;
    QSpacerItem *verticalSpacer_13;
    QHBoxLayout *horizontalLayout;
    QLineEdit *passwordLn;
    QCheckBox *checkBoxPassword;
    QHBoxLayout *horizontalLayout_3;
    QPushButton *forgotPb;
    QSpacerItem *horizontalSpacer;
    QSpacerItem *verticalSpacer_11;
    QSpacerItem *verticalSpacer_6;
    QHBoxLayout *horizontalLayout_6;
    QPushButton *loginPb;
    QSpacerItem *verticalSpacer_9;
    QSpacerItem *verticalSpacer_4;
    QFrame *frame_2;
    QLabel *label_2;
    QFrame *frame;
    QSpacerItem *verticalSpacer;
    QSpacerItem *verticalSpacer_3;
    QPushButton *signUpPb;
    QSpacerItem *verticalSpacer_7;
    QSpacerItem *verticalSpacer_10;
    QSpacerItem *verticalSpacer_8;
    QSpacerItem *verticalSpacer_5;
    QSpacerItem *verticalSpacer_2;
    QSpacerItem *horizontalSpacer_7;

    void setupUi(QDialog *Login)
    {
        if (Login->objectName().isEmpty())
            Login->setObjectName("Login");
        Login->resize(905, 618);
        QFont font;
        font.setFamilies({QString::fromUtf8("Franklin Gothic Heavy")});
        font.setPointSize(14);
        Login->setFont(font);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/img/login (1).png"), QSize(), QIcon::Normal, QIcon::Off);
        Login->setWindowIcon(icon);
        Login->setStyleSheet(QString::fromUtf8("QDialog {\n"
"                    background: qlineargradient(x1:0, y1:0, x2:1, y2:0, \n"
"                    stop:0 rgba(2,0,36,1), stop:0.36 rgba(171,82,9,1), stop:0.97 rgba(8,62,148,1));\n"
"	font-family: \"Franklin Gothic Heavy\";\n"
"	font-size:14pt;\n"
"}\n"
"                    "));
        gridLayout = new QGridLayout(Login);
        gridLayout->setObjectName("gridLayout");
        verticalSpacer_12 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer_12, 2, 1, 1, 1);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_3, 3, 2, 1, 1);

        verticalSpacer_14 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer_14, 4, 1, 1, 1);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_4, 6, 1, 1, 1);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_2, 3, 0, 1, 1);

        horizontalSpacer_6 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_6, 0, 1, 1, 1);

        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_5, 5, 1, 1, 1);

        verticalFrame = new QFrame(Login);
        verticalFrame->setObjectName("verticalFrame");
        verticalFrame->setStyleSheet(QString::fromUtf8("QFrame{\n"
"	background-color:rgb(232, 232, 232);\n"
"	\n"
"}"));
        verticalFrame->setFrameShape(QFrame::Box);
        verticalFrame->setFrameShadow(QFrame::Plain);
        verticalFrame->setLineWidth(1);
        verticalFrame->setMidLineWidth(0);
        verticalLayout = new QVBoxLayout(verticalFrame);
        verticalLayout->setObjectName("verticalLayout");
        label_3 = new QLabel(verticalFrame);
        label_3->setObjectName("label_3");
        QFont font1;
        font1.setFamilies({QString::fromUtf8("Franklin Gothic Heavy")});
        font1.setPointSize(12);
        label_3->setFont(font1);
        label_3->setStyleSheet(QString::fromUtf8("QLabel{\n"
"	line-height: 1.5;\n"
"}"));
        label_3->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(label_3);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName("verticalLayout_2");
        verticalSpacer_16 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer_16);

        label = new QLabel(verticalFrame);
        label->setObjectName("label");
        QFont font2;
        font2.setFamilies({QString::fromUtf8("Franklin Gothic Heavy")});
        font2.setPointSize(28);
        font2.setBold(false);
        label->setFont(font2);
        label->setStyleSheet(QString::fromUtf8("QLabel{\n"
"color: #c38200;\n"
"}\n"
""));
        label->setAlignment(Qt::AlignCenter);

        verticalLayout_2->addWidget(label);

        verticalSpacer_15 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer_15);

        usernameLn = new QLineEdit(verticalFrame);
        usernameLn->setObjectName("usernameLn");
        QFont font3;
        font3.setFamilies({QString::fromUtf8("Sans Serif Collection")});
        font3.setPointSize(10);
        usernameLn->setFont(font3);
        usernameLn->setStyleSheet(QString::fromUtf8("QLineEdit{\n"
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

        verticalLayout_2->addWidget(usernameLn);

        verticalSpacer_13 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer_13);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        passwordLn = new QLineEdit(verticalFrame);
        passwordLn->setObjectName("passwordLn");
        passwordLn->setFont(font3);
        passwordLn->setStyleSheet(QString::fromUtf8("QLineEdit{\n"
"	background-color:rgb(232, 232, 232);\n"
"	border: 1px solid rgb(209, 136, 0);\n"
"	border-radius: 18px;\n"
"	padding-left: 5px;\n"
"	color:rgb(40, 40, 40);\n"
"\n"
"}\n"
"\n"
"QLineEdit:focus{\n"
"	border: 2px solid rgb(9, 100, 186);\n"
"	background-color: rgb(208, 208, 208)\n"
"}"));

        horizontalLayout->addWidget(passwordLn);

        checkBoxPassword = new QCheckBox(verticalFrame);
        checkBoxPassword->setObjectName("checkBoxPassword");

        horizontalLayout->addWidget(checkBoxPassword);


        verticalLayout_2->addLayout(horizontalLayout);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        forgotPb = new QPushButton(verticalFrame);
        forgotPb->setObjectName("forgotPb");
        forgotPb->setEnabled(true);
        forgotPb->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	border: 0px;\n"
"	color: rgb(0, 0, 255);\n"
"	text-decoration: underline;\n"
"}\n"
"\n"
"QPushButton:hover{\n"
"	font-weight: bold;\n"
"	cursor:pointer;\n"
"}\n"
"\n"
""));

        horizontalLayout_3->addWidget(forgotPb);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer);


        verticalLayout_2->addLayout(horizontalLayout_3);


        verticalLayout->addLayout(verticalLayout_2);

        verticalSpacer_11 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer_11);

        verticalSpacer_6 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer_6);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName("horizontalLayout_6");
        loginPb = new QPushButton(verticalFrame);
        loginPb->setObjectName("loginPb");
        QFont font4;
        font4.setFamilies({QString::fromUtf8("Franklin Gothic Heavy")});
        font4.setPointSize(16);
        loginPb->setFont(font4);
        loginPb->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"border: solid 0px #ffffff;\n"
"background-color: rgb(9, 100, 186);\n"
"padding-top: 6px;\n"
"padding-bottom: 6px;\n"
"padding-left: 15px;\n"
"padding-right: 15px;\n"
"border-radius:18px;\n"
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

        horizontalLayout_6->addWidget(loginPb);


        verticalLayout->addLayout(horizontalLayout_6);

        verticalSpacer_9 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer_9);

        verticalSpacer_4 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer_4);

        frame_2 = new QFrame(verticalFrame);
        frame_2->setObjectName("frame_2");
        frame_2->setFrameShape(QFrame::HLine);
        frame_2->setFrameShadow(QFrame::Raised);

        verticalLayout->addWidget(frame_2);

        label_2 = new QLabel(verticalFrame);
        label_2->setObjectName("label_2");
        label_2->setFont(font);
        label_2->setStyleSheet(QString::fromUtf8("QLabel{\n"
"	color:rgb(9, 100, 186)\n"
"}"));
        label_2->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(label_2);

        frame = new QFrame(verticalFrame);
        frame->setObjectName("frame");
        QFont font5;
        font5.setPointSize(16);
        frame->setFont(font5);
        frame->setAutoFillBackground(false);
        frame->setFrameShape(QFrame::HLine);
        frame->setFrameShadow(QFrame::Raised);

        verticalLayout->addWidget(frame);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        verticalSpacer_3 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer_3);

        signUpPb = new QPushButton(verticalFrame);
        signUpPb->setObjectName("signUpPb");
        signUpPb->setFont(font4);
        signUpPb->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"border: solid 0px #ffffff;\n"
"background-color: rgb(9, 100, 186);\n"
"padding-top: 6px;\n"
"padding-bottom: 6px;\n"
"padding-left: 15px;\n"
"padding-right: 15px;\n"
"border-radius:18px;\n"
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
"border-radius:15px;\n"
"}"));

        verticalLayout->addWidget(signUpPb);

        verticalSpacer_7 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer_7);

        verticalSpacer_10 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer_10);

        verticalSpacer_8 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer_8);

        verticalSpacer_5 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer_5);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer_2);


        gridLayout->addWidget(verticalFrame, 3, 1, 1, 1);

        horizontalSpacer_7 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_7, 1, 1, 1, 1);


        retranslateUi(Login);

        QMetaObject::connectSlotsByName(Login);
    } // setupUi

    void retranslateUi(QDialog *Login)
    {
        Login->setWindowTitle(QCoreApplication::translate("Login", "Dialog", nullptr));
        label_3->setText(QCoreApplication::translate("Login", "<html><head/><body><p><span style=\" font-size:18pt; color:#c38200;\">BRY</span><span style=\" font-size:14pt; color:#0964ba;\">Insurance<hr></span></p></body></html>", nullptr));
        label->setText(QCoreApplication::translate("Login", "SIGN IN", nullptr));
        usernameLn->setText(QString());
        usernameLn->setPlaceholderText(QCoreApplication::translate("Login", "Username:", nullptr));
        passwordLn->setPlaceholderText(QCoreApplication::translate("Login", "Password:", nullptr));
        checkBoxPassword->setText(QString());
        forgotPb->setText(QCoreApplication::translate("Login", "  Forgot password?  ", nullptr));
        loginPb->setText(QCoreApplication::translate("Login", "      Log In      ", nullptr));
        label_2->setText(QCoreApplication::translate("Login", "OR", nullptr));
        signUpPb->setText(QCoreApplication::translate("Login", "Sign Up", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Login: public Ui_Login {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOGIN_H
