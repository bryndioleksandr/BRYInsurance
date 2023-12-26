#ifndef ADMINTOOLS_H
#define ADMINTOOLS_H

#include <QDialog>
#include <QComboBox>
#include <mysqldbmanager.h>
#include "allinsurances.h"
#include <QMessageBox>
#include <mysqldbmanager.h>

namespace Ui {
class AdminTools;
}

class AdminTools : public QDialog
{
    Q_OBJECT

public:
    explicit AdminTools(QWidget *parent = nullptr);
    ~AdminTools();

private slots:
    void on_checkInsurancesPb_clicked();

    void on_clearTablesPb_clicked();

    void on_deleteUserPb_clicked();

public slots:
    void onDialogClosed();
signals:
    void closed();
protected:
    void closeEvent(QCloseEvent *event) override;

private:
    Ui::AdminTools *ui;
    QString tableName, tableNameToDelete;
    QString userIdDelete;
};

#endif // ADMINTOOLS_H
