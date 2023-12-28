/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.6.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QPushButton *registrPb;
    QPushButton *loginPb;
    QPushButton *clearPb;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(256, 331);
        MainWindow->setStyleSheet(QString::fromUtf8("QMessageBox{\n"
"	background-color: rgb(175, 255, 255);\n"
"	color:rgb(25, 25, 25);\n"
"	font: 350 12pt \"Bahnschrift SemiLight SemiConde\";\n"
"}"));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        registrPb = new QPushButton(centralwidget);
        registrPb->setObjectName("registrPb");
        registrPb->setGeometry(QRect(90, 50, 80, 24));
        loginPb = new QPushButton(centralwidget);
        loginPb->setObjectName("loginPb");
        loginPb->setGeometry(QRect(90, 110, 80, 24));
        clearPb = new QPushButton(centralwidget);
        clearPb->setObjectName("clearPb");
        clearPb->setGeometry(QRect(90, 180, 80, 24));
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 256, 21));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        registrPb->setText(QCoreApplication::translate("MainWindow", "Registr", nullptr));
        loginPb->setText(QCoreApplication::translate("MainWindow", "Login", nullptr));
        clearPb->setText(QCoreApplication::translate("MainWindow", "Clear DB", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
