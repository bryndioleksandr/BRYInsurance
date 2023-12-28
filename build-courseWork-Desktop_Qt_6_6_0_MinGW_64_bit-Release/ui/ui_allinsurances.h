/********************************************************************************
** Form generated from reading UI file 'allinsurances.ui'
**
** Created by: Qt User Interface Compiler version 6.6.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ALLINSURANCES_H
#define UI_ALLINSURANCES_H

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

class Ui_AllInsurances
{
public:
    QVBoxLayout *verticalLayout;
    QTabWidget *tabWidget;
    QWidget *activeInsurancesTab;
    QVBoxLayout *verticalLayout_2;
    QLineEdit *findActiveLn;
    QHBoxLayout *findActiveLayout;
    QHBoxLayout *activeLayout;
    QTableView *activeTableView;
    QWidget *closedInsurancesTab;
    QVBoxLayout *verticalLayout_3;
    QLineEdit *findClosedLn;
    QHBoxLayout *findClosedLayout;
    QHBoxLayout *closedLayout;
    QTableView *closedTableView;

    void setupUi(QDialog *AllInsurances)
    {
        if (AllInsurances->objectName().isEmpty())
            AllInsurances->setObjectName("AllInsurances");
        AllInsurances->resize(915, 547);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/img/calendar.png"), QSize(), QIcon::Normal, QIcon::Off);
        AllInsurances->setWindowIcon(icon);
        verticalLayout = new QVBoxLayout(AllInsurances);
        verticalLayout->setObjectName("verticalLayout");
        tabWidget = new QTabWidget(AllInsurances);
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

        findActiveLayout = new QHBoxLayout();
        findActiveLayout->setObjectName("findActiveLayout");

        verticalLayout_2->addLayout(findActiveLayout);

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

        findClosedLayout = new QHBoxLayout();
        findClosedLayout->setObjectName("findClosedLayout");

        verticalLayout_3->addLayout(findClosedLayout);

        closedLayout = new QHBoxLayout();
        closedLayout->setObjectName("closedLayout");

        verticalLayout_3->addLayout(closedLayout);

        closedTableView = new QTableView(closedInsurancesTab);
        closedTableView->setObjectName("closedTableView");

        verticalLayout_3->addWidget(closedTableView);

        tabWidget->addTab(closedInsurancesTab, QString());

        verticalLayout->addWidget(tabWidget);


        retranslateUi(AllInsurances);

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(AllInsurances);
    } // setupUi

    void retranslateUi(QDialog *AllInsurances)
    {
        AllInsurances->setWindowTitle(QCoreApplication::translate("AllInsurances", "All Insurances", nullptr));
        findActiveLn->setPlaceholderText(QCoreApplication::translate("AllInsurances", "Enter smth to find around your active insurances:", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(activeInsurancesTab), QCoreApplication::translate("AllInsurances", "Active", nullptr));
        findClosedLn->setPlaceholderText(QCoreApplication::translate("AllInsurances", "Enter smth to find around your closed insurances:", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(closedInsurancesTab), QCoreApplication::translate("AllInsurances", "Closed", nullptr));
    } // retranslateUi

};

namespace Ui {
    class AllInsurances: public Ui_AllInsurances {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ALLINSURANCES_H
