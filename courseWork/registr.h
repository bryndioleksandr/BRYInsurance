#ifndef REGISTR_H
#define REGISTR_H

#include <QDialog>
#include <QMainWindow>
#include <QMessageBox>
#include <QCryptographicHash>
#include <QLabel>
#include <QLayout>
#include <QPushButton>
#include <QCheckBox>
#include <QLineEdit>
#include <QWidget>
#include "User.h"
#include "mysqldbmanager.h"


namespace Ui {
class Registr;
}

class Registr : public QDialog
{
    Q_OBJECT

public:
    explicit Registr(QWidget *parent = nullptr);
    ~Registr();

private slots:
    void on_confirmPb_clicked();
    void on_showPasswordCb_stateChanged(int arg1);
signals:
    void closed();
protected:
    void closeEvent(QCloseEvent *event) override;

private:
    Ui::Registr *ui;
    QString username, password, question, answear, surname, name, phoneNum;
    bool checkFields();
    DBManager *db;
    QSqlTableModel  *model;
};

#endif // REGISTR_H
