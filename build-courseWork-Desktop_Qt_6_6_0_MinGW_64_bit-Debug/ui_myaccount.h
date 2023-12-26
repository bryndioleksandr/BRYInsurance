/********************************************************************************
** Form generated from reading UI file 'myaccount.ui'
**
** Created by: Qt User Interface Compiler version 6.6.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MYACCOUNT_H
#define UI_MYACCOUNT_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>

QT_BEGIN_NAMESPACE

class Ui_MyAccount
{
public:
    QGridLayout *gridLayout;
    QSpacerItem *horizontalSpacer;
    QSpacerItem *horizontalSpacer_2;
    QSpacerItem *verticalSpacer_7;
    QSpacerItem *verticalSpacer_9;
    QFrame *gridLayout_3;
    QGridLayout *gridLayout_2;
    QFrame *frame_2;
    QSpacerItem *verticalSpacer_8;
    QSpacerItem *verticalSpacer_3;
    QSpacerItem *verticalSpacer_10;
    QSpacerItem *verticalSpacer_6;
    QSpacerItem *verticalSpacer;
    QSpinBox *balanceSb;
    QLabel *usernameLb;
    QLabel *nameSurnameLb;
    QSpacerItem *verticalSpacer_2;
    QLabel *phoneNumLb;
    QSpacerItem *verticalSpacer_5;
    QPushButton *logoutPb;
    QFrame *frame;
    QFrame *frame_3;
    QFrame *frame_5;
    QSpacerItem *verticalSpacer_4;
    QFrame *frame_6;
    QFrame *frame_7;
    QPushButton *replenishBalancePb;
    QFrame *frame_4;
    QPushButton *changePasswordPb;
    QLabel *balanceLb;
    QPushButton *deleteAccountPb;
    QLabel *label;

    void setupUi(QDialog *MyAccount)
    {
        if (MyAccount->objectName().isEmpty())
            MyAccount->setObjectName("MyAccount");
        MyAccount->resize(496, 556);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/img/account.png"), QSize(), QIcon::Normal, QIcon::Off);
        MyAccount->setWindowIcon(icon);
        MyAccount->setStyleSheet(QString::fromUtf8("QPushButton{\n"
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
"}\n"
"\n"
"QDialog{\n"
"	background-color:rgb(255, 255, 255);\n"
"}"));
        gridLayout = new QGridLayout(MyAccount);
        gridLayout->setObjectName("gridLayout");
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer, 1, 2, 1, 1);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_2, 1, 0, 1, 1);

        verticalSpacer_7 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer_7, 0, 1, 1, 1);

        verticalSpacer_9 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer_9, 2, 1, 1, 1);

        gridLayout_3 = new QFrame(MyAccount);
        gridLayout_3->setObjectName("gridLayout_3");
        gridLayout_3->setStyleSheet(QString::fromUtf8("QFrame{\n"
"	background-color:rgb(40, 40, 40);\n"
"	border-radius:15px;\n"
"}"));
        gridLayout_2 = new QGridLayout(gridLayout_3);
        gridLayout_2->setObjectName("gridLayout_2");
        frame_2 = new QFrame(gridLayout_3);
        frame_2->setObjectName("frame_2");
        frame_2->setFrameShape(QFrame::HLine);
        frame_2->setFrameShadow(QFrame::Raised);

        gridLayout_2->addWidget(frame_2, 11, 0, 1, 1);

        verticalSpacer_8 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_2->addItem(verticalSpacer_8, 22, 0, 1, 1);

        verticalSpacer_3 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_2->addItem(verticalSpacer_3, 3, 0, 1, 1);

        verticalSpacer_10 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_2->addItem(verticalSpacer_10, 1, 0, 1, 1);

        verticalSpacer_6 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_2->addItem(verticalSpacer_6, 7, 0, 1, 1);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_2->addItem(verticalSpacer, 18, 0, 1, 1);

        balanceSb = new QSpinBox(gridLayout_3);
        balanceSb->setObjectName("balanceSb");
        QFont font;
        font.setFamilies({QString::fromUtf8("Bahnschrift Light SemiCondensed")});
        font.setPointSize(12);
        balanceSb->setFont(font);
        balanceSb->setMaximum(1000000000);

        gridLayout_2->addWidget(balanceSb, 15, 0, 1, 1);

        usernameLb = new QLabel(gridLayout_3);
        usernameLb->setObjectName("usernameLb");
        QFont font1;
        font1.setFamilies({QString::fromUtf8("Bahnschrift SemiLight SemiConde")});
        font1.setPointSize(14);
        usernameLb->setFont(font1);
        usernameLb->setStyleSheet(QString::fromUtf8("QLabel{\n"
"	color:rgb(255, 255, 255);\n"
"}"));

        gridLayout_2->addWidget(usernameLb, 2, 0, 1, 1);

        nameSurnameLb = new QLabel(gridLayout_3);
        nameSurnameLb->setObjectName("nameSurnameLb");
        nameSurnameLb->setFont(font1);
        nameSurnameLb->setStyleSheet(QString::fromUtf8("QLabel{\n"
"	color:rgb(255, 255, 255);\n"
"}"));

        gridLayout_2->addWidget(nameSurnameLb, 4, 0, 1, 1);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_2->addItem(verticalSpacer_2, 9, 0, 1, 1);

        phoneNumLb = new QLabel(gridLayout_3);
        phoneNumLb->setObjectName("phoneNumLb");
        phoneNumLb->setFont(font1);
        phoneNumLb->setStyleSheet(QString::fromUtf8("QLabel{\n"
"	color:rgb(255, 255, 255);\n"
"}"));

        gridLayout_2->addWidget(phoneNumLb, 6, 0, 1, 1);

        verticalSpacer_5 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_2->addItem(verticalSpacer_5, 12, 0, 1, 1);

        logoutPb = new QPushButton(gridLayout_3);
        logoutPb->setObjectName("logoutPb");
        logoutPb->setMinimumSize(QSize(0, 40));
        logoutPb->setMaximumSize(QSize(210, 16777215));
        QFont font2;
        font2.setFamilies({QString::fromUtf8("Bahnschrift SemiBold SemiConden")});
        font2.setPointSize(14);
        font2.setBold(true);
        logoutPb->setFont(font2);
        logoutPb->setStyleSheet(QString::fromUtf8("margin-left:34px;"));

        gridLayout_2->addWidget(logoutPb, 20, 0, 1, 1);

        frame = new QFrame(gridLayout_3);
        frame->setObjectName("frame");
        frame->setFrameShape(QFrame::HLine);
        frame->setFrameShadow(QFrame::Raised);

        gridLayout_2->addWidget(frame, 8, 0, 1, 1);

        frame_3 = new QFrame(gridLayout_3);
        frame_3->setObjectName("frame_3");
        frame_3->setFrameShape(QFrame::HLine);
        frame_3->setFrameShadow(QFrame::Raised);

        gridLayout_2->addWidget(frame_3, 17, 0, 1, 1);

        frame_5 = new QFrame(gridLayout_3);
        frame_5->setObjectName("frame_5");
        frame_5->setFrameShape(QFrame::HLine);
        frame_5->setFrameShadow(QFrame::Raised);

        gridLayout_2->addWidget(frame_5, 23, 0, 1, 1);

        verticalSpacer_4 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_2->addItem(verticalSpacer_4, 5, 0, 1, 1);

        frame_6 = new QFrame(gridLayout_3);
        frame_6->setObjectName("frame_6");
        frame_6->setFrameShape(QFrame::HLine);
        frame_6->setFrameShadow(QFrame::Raised);

        gridLayout_2->addWidget(frame_6, 19, 0, 1, 1);

        frame_7 = new QFrame(gridLayout_3);
        frame_7->setObjectName("frame_7");
        frame_7->setFrameShape(QFrame::HLine);
        frame_7->setFrameShadow(QFrame::Raised);

        gridLayout_2->addWidget(frame_7, 13, 0, 1, 1);

        replenishBalancePb = new QPushButton(gridLayout_3);
        replenishBalancePb->setObjectName("replenishBalancePb");
        replenishBalancePb->setMinimumSize(QSize(0, 40));
        replenishBalancePb->setMaximumSize(QSize(190, 16777215));
        replenishBalancePb->setFont(font2);
        replenishBalancePb->setStyleSheet(QString::fromUtf8("margin-left:54px;"));

        gridLayout_2->addWidget(replenishBalancePb, 16, 0, 1, 1);

        frame_4 = new QFrame(gridLayout_3);
        frame_4->setObjectName("frame_4");
        frame_4->setFrameShape(QFrame::HLine);
        frame_4->setFrameShadow(QFrame::Raised);

        gridLayout_2->addWidget(frame_4, 21, 0, 1, 1);

        changePasswordPb = new QPushButton(gridLayout_3);
        changePasswordPb->setObjectName("changePasswordPb");
        changePasswordPb->setMinimumSize(QSize(0, 40));
        changePasswordPb->setFont(font2);
        changePasswordPb->setStyleSheet(QString::fromUtf8("margin-left:10px;\n"
"margin-right:10px;"));

        gridLayout_2->addWidget(changePasswordPb, 10, 0, 1, 1);

        balanceLb = new QLabel(gridLayout_3);
        balanceLb->setObjectName("balanceLb");
        balanceLb->setFont(font2);
        balanceLb->setStyleSheet(QString::fromUtf8("QLabel{\n"
"	color:rgb(255, 255, 255);\n"
"}"));

        gridLayout_2->addWidget(balanceLb, 14, 0, 1, 1);

        deleteAccountPb = new QPushButton(gridLayout_3);
        deleteAccountPb->setObjectName("deleteAccountPb");
        deleteAccountPb->setMinimumSize(QSize(0, 40));
        deleteAccountPb->setFont(font2);
        deleteAccountPb->setStyleSheet(QString::fromUtf8("margin-left:10px;\n"
"margin-right:10px;"));

        gridLayout_2->addWidget(deleteAccountPb, 24, 0, 1, 1);

        label = new QLabel(gridLayout_3);
        label->setObjectName("label");
        QFont font3;
        font3.setFamilies({QString::fromUtf8("Bahnschrift SemiBold")});
        font3.setPointSize(16);
        font3.setBold(true);
        label->setFont(font3);
        label->setStyleSheet(QString::fromUtf8("QLabel{\n"
"	color:rgb(255, 255, 255);\n"
"}"));
        label->setAlignment(Qt::AlignCenter);

        gridLayout_2->addWidget(label, 0, 0, 1, 1);


        gridLayout->addWidget(gridLayout_3, 1, 1, 1, 1);


        retranslateUi(MyAccount);

        QMetaObject::connectSlotsByName(MyAccount);
    } // setupUi

    void retranslateUi(QDialog *MyAccount)
    {
        MyAccount->setWindowTitle(QCoreApplication::translate("MyAccount", "Account", nullptr));
#if QT_CONFIG(tooltip)
        usernameLb->setToolTip(QCoreApplication::translate("MyAccount", "Your username", nullptr));
#endif // QT_CONFIG(tooltip)
        usernameLb->setText(QCoreApplication::translate("MyAccount", "Username", nullptr));
#if QT_CONFIG(tooltip)
        nameSurnameLb->setToolTip(QCoreApplication::translate("MyAccount", "Your name and surname", nullptr));
#endif // QT_CONFIG(tooltip)
        nameSurnameLb->setText(QCoreApplication::translate("MyAccount", "Name  Surname", nullptr));
#if QT_CONFIG(tooltip)
        phoneNumLb->setToolTip(QCoreApplication::translate("MyAccount", "Your phone number", nullptr));
#endif // QT_CONFIG(tooltip)
        phoneNumLb->setText(QCoreApplication::translate("MyAccount", "Phone Number", nullptr));
        logoutPb->setText(QCoreApplication::translate("MyAccount", "Logout", nullptr));
        replenishBalancePb->setText(QCoreApplication::translate("MyAccount", "Replenish", nullptr));
        changePasswordPb->setText(QCoreApplication::translate("MyAccount", "Change password", nullptr));
        balanceLb->setText(QCoreApplication::translate("MyAccount", "       Replenish the balance(\342\202\264)       ", nullptr));
        deleteAccountPb->setText(QCoreApplication::translate("MyAccount", "Delete account", nullptr));
        label->setText(QCoreApplication::translate("MyAccount", "My account", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MyAccount: public Ui_MyAccount {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MYACCOUNT_H
