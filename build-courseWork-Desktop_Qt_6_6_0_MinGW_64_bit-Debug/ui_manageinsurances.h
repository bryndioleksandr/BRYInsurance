/********************************************************************************
** Form generated from reading UI file 'manageinsurances.ui'
**
** Created by: Qt User Interface Compiler version 6.6.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MANAGEINSURANCES_H
#define UI_MANAGEINSURANCES_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_ManageInsurances
{
public:
    QGridLayout *gridLayout;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QPushButton *updatePb;
    QSpacerItem *horizontalSpacer_3;
    QPushButton *deletePb;
    QSpacerItem *verticalSpacer;
    QVBoxLayout *verticalLayout_2;
    QPushButton *downloadPb;
    QSpacerItem *horizontalSpacer_2;
    QSpacerItem *horizontalSpacer;
    QSpacerItem *verticalSpacer_2;
    QSpacerItem *verticalSpacer_3;

    void setupUi(QDialog *ManageInsurances)
    {
        if (ManageInsurances->objectName().isEmpty())
            ManageInsurances->setObjectName("ManageInsurances");
        ManageInsurances->resize(466, 406);
        gridLayout = new QGridLayout(ManageInsurances);
        gridLayout->setObjectName("gridLayout");
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName("verticalLayout");
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        updatePb = new QPushButton(ManageInsurances);
        updatePb->setObjectName("updatePb");
        QFont font;
        font.setPointSize(12);
        font.setBold(true);
        updatePb->setFont(font);

        horizontalLayout->addWidget(updatePb);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_3);

        deletePb = new QPushButton(ManageInsurances);
        deletePb->setObjectName("deletePb");
        deletePb->setFont(font);

        horizontalLayout->addWidget(deletePb);


        verticalLayout->addLayout(horizontalLayout);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName("verticalLayout_2");
        downloadPb = new QPushButton(ManageInsurances);
        downloadPb->setObjectName("downloadPb");
        downloadPb->setFont(font);

        verticalLayout_2->addWidget(downloadPb);


        verticalLayout->addLayout(verticalLayout_2);


        gridLayout->addLayout(verticalLayout, 1, 1, 1, 1);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_2, 1, 2, 1, 1);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer, 1, 0, 1, 1);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer_2, 0, 1, 1, 1);

        verticalSpacer_3 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer_3, 2, 1, 1, 1);


        retranslateUi(ManageInsurances);

        QMetaObject::connectSlotsByName(ManageInsurances);
    } // setupUi

    void retranslateUi(QDialog *ManageInsurances)
    {
        ManageInsurances->setWindowTitle(QCoreApplication::translate("ManageInsurances", "Dialog", nullptr));
        updatePb->setText(QCoreApplication::translate("ManageInsurances", "Update data", nullptr));
        deletePb->setText(QCoreApplication::translate("ManageInsurances", "Delete insurance", nullptr));
        downloadPb->setText(QCoreApplication::translate("ManageInsurances", "Download insurance check", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ManageInsurances: public Ui_ManageInsurances {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MANAGEINSURANCES_H
