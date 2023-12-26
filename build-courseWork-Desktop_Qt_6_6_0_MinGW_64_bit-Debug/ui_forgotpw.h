/********************************************************************************
** Form generated from reading UI file 'forgotpw.ui'
**
** Created by: Qt User Interface Compiler version 6.6.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FORGOTPW_H
#define UI_FORGOTPW_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>

QT_BEGIN_NAMESPACE

class Ui_ForgotPw
{
public:
    QGridLayout *gridLayout;
    QSpacerItem *horizontalSpacer_2;
    QSpacerItem *horizontalSpacer;
    QGridLayout *gridLayout_2;
    QLabel *label_2;
    QLineEdit *answerLn;
    QLabel *keyQuestionLb;
    QSpacerItem *verticalSpacer_3;
    QFrame *line;
    QPushButton *confirmPb;
    QSpacerItem *verticalSpacer;
    QFrame *line_3;
    QLabel *label;
    QSpacerItem *verticalSpacer_2;
    QFrame *line_2;
    QFrame *line_4;
    QSpacerItem *verticalSpacer_4;

    void setupUi(QDialog *ForgotPw)
    {
        if (ForgotPw->objectName().isEmpty())
            ForgotPw->setObjectName("ForgotPw");
        ForgotPw->resize(410, 349);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/img/forgot.png"), QSize(), QIcon::Normal, QIcon::Off);
        ForgotPw->setWindowIcon(icon);
        ForgotPw->setStyleSheet(QString::fromUtf8("QDialog{\n"
"	background-color:rgb(235, 235, 235);\n"
"}"));
        gridLayout = new QGridLayout(ForgotPw);
        gridLayout->setObjectName("gridLayout");
        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_2, 1, 3, 1, 1);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer, 0, 1, 1, 1);

        gridLayout_2 = new QGridLayout();
        gridLayout_2->setObjectName("gridLayout_2");
        label_2 = new QLabel(ForgotPw);
        label_2->setObjectName("label_2");
        QFont font;
        font.setFamilies({QString::fromUtf8("Franklin Gothic Heavy")});
        label_2->setFont(font);
        label_2->setAlignment(Qt::AlignCenter);

        gridLayout_2->addWidget(label_2, 0, 2, 1, 1);

        answerLn = new QLineEdit(ForgotPw);
        answerLn->setObjectName("answerLn");
        answerLn->setMinimumSize(QSize(160, 32));
        answerLn->setStyleSheet(QString::fromUtf8("QLineEdit{\n"
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

        gridLayout_2->addWidget(answerLn, 5, 2, 1, 1);

        keyQuestionLb = new QLabel(ForgotPw);
        keyQuestionLb->setObjectName("keyQuestionLb");
        keyQuestionLb->setMinimumSize(QSize(180, 30));
        QFont font1;
        font1.setFamilies({QString::fromUtf8("Bahnschrift SemiLight SemiConde")});
        font1.setPointSize(11);
        keyQuestionLb->setFont(font1);
        keyQuestionLb->setStyleSheet(QString::fromUtf8("QLabel{\n"
"	color:rgb(0, 0, 0);\n"
"}"));
        keyQuestionLb->setAlignment(Qt::AlignCenter);

        gridLayout_2->addWidget(keyQuestionLb, 3, 2, 1, 1);

        verticalSpacer_3 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_2->addItem(verticalSpacer_3, 6, 2, 1, 1);

        line = new QFrame(ForgotPw);
        line->setObjectName("line");
        line->setFrameShape(QFrame::VLine);
        line->setFrameShadow(QFrame::Sunken);

        gridLayout_2->addWidget(line, 3, 4, 1, 1);

        confirmPb = new QPushButton(ForgotPw);
        confirmPb->setObjectName("confirmPb");
        confirmPb->setMinimumSize(QSize(0, 30));
        QFont font2;
        font2.setFamilies({QString::fromUtf8("Bahnschrift SemiLight SemiConde")});
        font2.setPointSize(12);
        confirmPb->setFont(font2);
        confirmPb->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"border: solid 0px #ffffff;\n"
"background-color: rgb(9, 100, 186);\n"
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
"background-color: rgb(195, 130, 0);\n"
"}"));

        gridLayout_2->addWidget(confirmPb, 7, 2, 1, 1);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_2->addItem(verticalSpacer, 1, 2, 1, 1);

        line_3 = new QFrame(ForgotPw);
        line_3->setObjectName("line_3");
        line_3->setFrameShape(QFrame::VLine);
        line_3->setFrameShadow(QFrame::Sunken);

        gridLayout_2->addWidget(line_3, 3, 1, 1, 1);

        label = new QLabel(ForgotPw);
        label->setObjectName("label");
        label->setFont(font1);
        label->setStyleSheet(QString::fromUtf8("QLabel{\n"
"	color:rgb(0, 0, 0);\n"
"}"));
        label->setAlignment(Qt::AlignCenter);

        gridLayout_2->addWidget(label, 2, 2, 1, 1);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_2->addItem(verticalSpacer_2, 4, 2, 1, 1);

        line_2 = new QFrame(ForgotPw);
        line_2->setObjectName("line_2");
        line_2->setFrameShape(QFrame::VLine);
        line_2->setFrameShadow(QFrame::Sunken);

        gridLayout_2->addWidget(line_2, 3, 0, 1, 1);

        line_4 = new QFrame(ForgotPw);
        line_4->setObjectName("line_4");
        line_4->setFrameShape(QFrame::VLine);
        line_4->setFrameShadow(QFrame::Sunken);

        gridLayout_2->addWidget(line_4, 3, 3, 1, 1);


        gridLayout->addLayout(gridLayout_2, 0, 2, 2, 1);

        verticalSpacer_4 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer_4, 2, 2, 1, 1);


        retranslateUi(ForgotPw);

        QMetaObject::connectSlotsByName(ForgotPw);
    } // setupUi

    void retranslateUi(QDialog *ForgotPw)
    {
        ForgotPw->setWindowTitle(QCoreApplication::translate("ForgotPw", "Forgot password", nullptr));
        label_2->setText(QCoreApplication::translate("ForgotPw", "<html><head/><body><p><span style=\" font-size:18pt; color:#c38200;\">BRY</span><span style=\" font-size:16pt; color:#0964ba;\">Insurance</span></p><p><span style=\" font-size:12pt; color:#000000;\">Reset password</span></p><hr/></body></html>", nullptr));
        answerLn->setPlaceholderText(QCoreApplication::translate("ForgotPw", "Enter answer:", nullptr));
        keyQuestionLb->setText(QString());
        confirmPb->setText(QCoreApplication::translate("ForgotPw", "Confirm", nullptr));
        label->setText(QCoreApplication::translate("ForgotPw", "Your key question is:", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ForgotPw: public Ui_ForgotPw {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FORGOTPW_H
