#ifndef INSURANCEEVENTS_H
#define INSURANCEEVENTS_H

#include <QDialog>
#include <QSqlTableModel>
#include "mysqldbmanager.h"
#include "showevents.h"

namespace Ui {
class InsuranceEvents;
}

class InsuranceEvents : public QDialog
{
    Q_OBJECT

public:
    explicit InsuranceEvents(int userId, QWidget *parent = nullptr);
    ~InsuranceEvents();


private slots:

    void on_autoEventPb_clicked();

    void on_travelEventPb_clicked();

    void on_gadgetEventPb_clicked();

signals:
    void closed();
protected:
    void closeEvent(QCloseEvent *event) override;

private:
    Ui::InsuranceEvents *ui;
    int currentUserId;



};

#endif // INSURANCEEVENTS_H
