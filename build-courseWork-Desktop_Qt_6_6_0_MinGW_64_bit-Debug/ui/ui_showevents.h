/********************************************************************************
** Form generated from reading UI file 'showevents.ui'
**
** Created by: Qt User Interface Compiler version 6.6.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SHOWEVENTS_H
#define UI_SHOWEVENTS_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTableView>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ShowEvents
{
public:
    QVBoxLayout *verticalLayout;
    QTabWidget *tabWidget;
    QWidget *activeInsurancesTab;
    QVBoxLayout *verticalLayout_2;
    QLineEdit *findActiveLn;
    QHBoxLayout *activeLayout;
    QTableView *activeTableView;
    QWidget *closedInsurancesTab;
    QVBoxLayout *verticalLayout_3;
    QLineEdit *findClosedLn;
    QHBoxLayout *closedLayout;
    QTableView *closedTableView;

    void setupUi(QDialog *ShowEvents)
    {
        if (ShowEvents->objectName().isEmpty())
            ShowEvents->setObjectName("ShowEvents");
        ShowEvents->resize(877, 523);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/img/calendar.png"), QSize(), QIcon::Normal, QIcon::Off);
        ShowEvents->setWindowIcon(icon);
        verticalLayout = new QVBoxLayout(ShowEvents);
        verticalLayout->setObjectName("verticalLayout");
        tabWidget = new QTabWidget(ShowEvents);
        tabWidget->setObjectName("tabWidget");
        QFont font;
        font.setFamilies({QString::fromUtf8("Franklin Gothic Demi")});
        font.setPointSize(12);
        tabWidget->setFont(font);
        activeInsurancesTab = new QWidget();
        activeInsurancesTab->setObjectName("activeInsurancesTab");
        QFont font1;
        font1.setFamilies({QString::fromUtf8("Franklin Gothic Medium")});
        font1.setPointSize(12);
        activeInsurancesTab->setFont(font1);
        verticalLayout_2 = new QVBoxLayout(activeInsurancesTab);
        verticalLayout_2->setObjectName("verticalLayout_2");
        findActiveLn = new QLineEdit(activeInsurancesTab);
        findActiveLn->setObjectName("findActiveLn");

        verticalLayout_2->addWidget(findActiveLn);

        activeLayout = new QHBoxLayout();
        activeLayout->setObjectName("activeLayout");

        verticalLayout_2->addLayout(activeLayout);

        activeTableView = new QTableView(activeInsurancesTab);
        activeTableView->setObjectName("activeTableView");

        verticalLayout_2->addWidget(activeTableView);

        tabWidget->addTab(activeInsurancesTab, QString());
        closedInsurancesTab = new QWidget();
        closedInsurancesTab->setObjectName("closedInsurancesTab");
        verticalLayout_3 = new QVBoxLayout(closedInsurancesTab);
        verticalLayout_3->setObjectName("verticalLayout_3");
        findClosedLn = new QLineEdit(closedInsurancesTab);
        findClosedLn->setObjectName("findClosedLn");

        verticalLayout_3->addWidget(findClosedLn);

        closedLayout = new QHBoxLayout();
        closedLayout->setObjectName("closedLayout");

        verticalLayout_3->addLayout(closedLayout);

        closedTableView = new QTableView(closedInsurancesTab);
        closedTableView->setObjectName("closedTableView");

        verticalLayout_3->addWidget(closedTableView);

        tabWidget->addTab(closedInsurancesTab, QString());

        verticalLayout->addWidget(tabWidget);


        retranslateUi(ShowEvents);

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(ShowEvents);
    } // setupUi

    void retranslateUi(QDialog *ShowEvents)
    {
        ShowEvents->setWindowTitle(QCoreApplication::translate("ShowEvents", "Insurance Events", nullptr));
        findActiveLn->setPlaceholderText(QCoreApplication::translate("ShowEvents", "Enter smth to find around your active insurances:", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(activeInsurancesTab), QCoreApplication::translate("ShowEvents", "Active", nullptr));
        findClosedLn->setPlaceholderText(QCoreApplication::translate("ShowEvents", "Enter smth to find around your closed insurances:", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(closedInsurancesTab), QCoreApplication::translate("ShowEvents", "Closed", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ShowEvents: public Ui_ShowEvents {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SHOWEVENTS_H
