#ifndef ALLINSURANCES_H
#define ALLINSURANCES_H

#include <QDialog>
#include "admintools.h"
#include <QSqlError>
#include <QVBoxLayout>
#include <QStringList>
#include <QLineEdit>
#include <QMenu>
#include <QMessageBox>
#include <QAction>
#include "admintools.h"
#include <QCloseEvent>

namespace Ui {
class AllInsurances;
}

class AllInsurances : public QDialog
{
    Q_OBJECT

public:
    explicit AllInsurances(QString tableName, QWidget *parent = nullptr);
    void showInsurance();
    ~AllInsurances();

private slots:
    void on_tabWidget_currentChanged(int index);
    void on_currentIndexCbChanged(int index, QString sortType);
    void on_findActiveLn_textChanged(const QString &arg1);
    void on_findOneLn_textChanched(const QString &arg1, QString byField);
signals:
    void closed();
protected:
    void closeEvent(QCloseEvent *event) override;


private:
    Ui::AllInsurances *ui;
    QString tableName;


    QSqlQueryModel *activeTableModel, *closedTableModel;
    QComboBox *allComboBox, *activeComboBox, *closedComboBox;
    QComboBox *allComboBoxDesc, *activeComboBoxDesc, *closedComboBoxDesc;
    QLineEdit *userIdLn, *balanceLn, *usernameLn, *surnameLn, *nameLn, *phoneNumberLn;
    QLineEdit *insurancePolicyLn, *autoTypeLn, *insuranceTypeLn, *coverageAmountLn, *autoNumberLn, *autoBrandLn, *autoModelLn, *cityLn, *autoYearLn;
    QLineEdit *travelDirectionLn, *travelActivityLn, *insurancePriceLn;
    QLineEdit *gadgetBrandLn, *gadgetModelLn, *gadgetPriceLn, *coveragePackageLn;
};

#endif // ALLINSURANCES_H
