#include "allinsurances.h"
#include "ui_allinsurances.h"




AllInsurances::AllInsurances(QString tableName, QWidget *parent) :
    QDialog(parent),
    tableName(tableName),
    activeTableModel(new QSqlQueryModel(this)),
    closedTableModel(new QSqlQueryModel(this)),
    ui(new Ui::AllInsurances)
{
    ui->setupUi(this);

    activeComboBox = new QComboBox();
    closedComboBox = new QComboBox();

    activeComboBoxDesc = new QComboBox();
    closedComboBoxDesc = new QComboBox();

    activeComboBox = new QComboBox();
    closedComboBox = new QComboBox();

    activeComboBoxDesc = new QComboBox();
    closedComboBoxDesc = new QComboBox();

    QStringList autoItems = {"user_id", "insurancePolicy", "coverageAmount", "insurancePrice", "cubicCapacity", "carryingCapacity", "motoCubic", "city", "autoYear", "autoPrice", "startDate", "endDate"};
    QStringList travelItems = {"user_id", "insurancePolicy", "coverageAmount", "insurancePrice", "travelDirection", "travelActivities", "startDate", "endDate"};
    QStringList gadgetItems = {"user_id", "insurancePolicy", "insurancePrice", "gadgetBrand", "gadgetModel", "gadgetPrice", "startDate", "endDate"};
    QStringList users = {"user_id", "balance", "username", "surname", "name", "phoneNumber"};
    if(tableName == "AutoInsurance"){
        activeComboBox->addItems(autoItems);
        closedComboBox->addItems(autoItems);

        activeComboBoxDesc->addItems(autoItems);
        closedComboBoxDesc->addItems(autoItems);

        userIdLn = new QLineEdit();
        insurancePolicyLn = new QLineEdit();
        autoTypeLn = new QLineEdit();
        insuranceTypeLn = new QLineEdit();
        coverageAmountLn = new QLineEdit();
        autoNumberLn = new QLineEdit();
        autoBrandLn = new QLineEdit();
        autoModelLn = new QLineEdit();
        cityLn = new QLineEdit();
        autoYearLn = new QLineEdit();
        userIdLn->setPlaceholderText("Find by user id:");
        insurancePolicyLn->setPlaceholderText("Find by insurancePolicyLn:");
        autoTypeLn->setPlaceholderText("Find by autoTypeLn:");
        insuranceTypeLn->setPlaceholderText("Find by insuranceTypeLn:");
        coverageAmountLn->setPlaceholderText("Find by coverageAmountLn");
        autoNumberLn->setPlaceholderText("Find by autoNumberLn:");
        autoBrandLn->setPlaceholderText("Find by autoBrandLn:");
        autoModelLn->setPlaceholderText("Find by autoModelLn:");
        cityLn->setPlaceholderText("Find by cityLn:");
        autoYearLn->setPlaceholderText("Find by autoYearLn:");

        connect(userIdLn, &QLineEdit::textChanged, this, [=](const QString &text){on_findOneLn_textChanched(text, "user_id");});
        connect(insurancePolicyLn, &QLineEdit::textChanged, this, [=](const QString &text){on_findOneLn_textChanched(text, "insurancePolicy");});
        connect(autoTypeLn, &QLineEdit::textChanged, this, [=](const QString &text){on_findOneLn_textChanched(text, "autoType");});
        connect(insuranceTypeLn, &QLineEdit::textChanged, this, [=](const QString &text){on_findOneLn_textChanched(text, "insuranceType");});
        connect(coverageAmountLn, &QLineEdit::textChanged, this, [=](const QString &text){on_findOneLn_textChanched(text, "coverageAmount");});
        connect(autoNumberLn, &QLineEdit::textChanged, this, [=](const QString &text){on_findOneLn_textChanched(text, "autoNumber");});
        connect(autoBrandLn, &QLineEdit::textChanged, this, [=](const QString &text){on_findOneLn_textChanched(text, "autoBrand");});
        connect(autoModelLn, &QLineEdit::textChanged, this, [=](const QString &text){on_findOneLn_textChanched(text, "autoModel");});
        connect(cityLn, &QLineEdit::textChanged, this, [=](const QString &text){on_findOneLn_textChanched(text, "city");});
        connect(autoYearLn, &QLineEdit::textChanged, this, [=](const QString &text){on_findOneLn_textChanched(text, "autoYear");});

        ui->findActiveLayout->addWidget(userIdLn);
        ui->findActiveLayout->addWidget(insurancePolicyLn);
        ui->findActiveLayout->addWidget(autoTypeLn);
        ui->findActiveLayout->addWidget(coverageAmountLn);
        ui->findActiveLayout->addWidget(autoNumberLn);
        ui->findActiveLayout->addWidget(autoBrandLn);
        ui->findActiveLayout->addWidget(autoModelLn);
        ui->findActiveLayout->addWidget(cityLn);
        ui->findActiveLayout->addWidget(autoYearLn);
    }
    else if(tableName == "TravelInsurance"){
        activeComboBox->addItems(travelItems);
        closedComboBox->addItems(travelItems);

        activeComboBoxDesc->addItems(travelItems);
        closedComboBoxDesc->addItems(travelItems);

        userIdLn = new QLineEdit();
        insurancePolicyLn = new QLineEdit();
        travelDirectionLn = new QLineEdit();
        travelActivityLn = new QLineEdit();
        coverageAmountLn = new QLineEdit();
        insurancePriceLn = new QLineEdit();

        userIdLn->setPlaceholderText("Find by user id:");
        insurancePolicyLn->setPlaceholderText("Find by insurancePolicyLn:");
        travelDirectionLn->setPlaceholderText("Find by travelDirectionLn:");
        travelActivityLn->setPlaceholderText("Find by travelActivityLn:");
        coverageAmountLn->setPlaceholderText("Find by coverageAmountLn");
        insurancePriceLn->setPlaceholderText("Find by insurancePriceLn:");

        connect(userIdLn, &QLineEdit::textChanged, this, [=](const QString &text){on_findOneLn_textChanched(text, "user_id");});
        connect(insurancePolicyLn, &QLineEdit::textChanged, this, [=](const QString &text){on_findOneLn_textChanched(text, "insurancePolicy");});
        connect(travelDirectionLn, &QLineEdit::textChanged, this, [=](const QString &text){on_findOneLn_textChanched(text, "travel_direction");});
        connect(travelActivityLn, &QLineEdit::textChanged, this, [=](const QString &text){on_findOneLn_textChanched(text, "travel_activities");});
        connect(coverageAmountLn, &QLineEdit::textChanged, this, [=](const QString &text){on_findOneLn_textChanched(text, "coverageAmount");});
        connect(insurancePriceLn, &QLineEdit::textChanged, this, [=](const QString &text){on_findOneLn_textChanched(text, "insurancePrice");});

        ui->findActiveLayout->addWidget(userIdLn);
        ui->findActiveLayout->addWidget(insurancePolicyLn);
        ui->findActiveLayout->addWidget(travelDirectionLn);
        ui->findActiveLayout->addWidget(travelActivityLn);
        ui->findActiveLayout->addWidget(coverageAmountLn);
        ui->findActiveLayout->addWidget(insurancePriceLn);
    }
    else if(tableName == "GadgetInsurance"){
        activeComboBox->addItems(gadgetItems);
        closedComboBox->addItems(gadgetItems);

        activeComboBoxDesc->addItems(gadgetItems);
        closedComboBoxDesc->addItems(gadgetItems);

        userIdLn = new QLineEdit();
        insurancePolicyLn = new QLineEdit();
        gadgetBrandLn = new QLineEdit();
        gadgetModelLn = new QLineEdit();
        gadgetPriceLn = new QLineEdit();
        coveragePackageLn = new QLineEdit();

        userIdLn->setPlaceholderText("Find by user id:");
        insurancePolicyLn->setPlaceholderText("Find by insurancePolicyLn:");
        gadgetBrandLn->setPlaceholderText("Find by gadgetBrandLn:");
        gadgetModelLn->setPlaceholderText("Find by gadgetModelLn:");
        gadgetPriceLn->setPlaceholderText("Find by gadgetPriceLn");
        coveragePackageLn->setPlaceholderText("Find by coveragePackageLn:");

        connect(userIdLn, &QLineEdit::textChanged, this, [=](const QString &text){on_findOneLn_textChanched(text, "user_id");});
        connect(insurancePolicyLn, &QLineEdit::textChanged, this, [=](const QString &text){on_findOneLn_textChanched(text, "insurancePolicy");});
        connect(gadgetBrandLn, &QLineEdit::textChanged, this, [=](const QString &text){on_findOneLn_textChanched(text, "gadgetBrand");});
        connect(gadgetModelLn, &QLineEdit::textChanged, this, [=](const QString &text){on_findOneLn_textChanched(text, "gadgetModel");});
        connect(gadgetPriceLn, &QLineEdit::textChanged, this, [=](const QString &text){on_findOneLn_textChanched(text, "gadgetPrice");});
        connect(coveragePackageLn, &QLineEdit::textChanged, this, [=](const QString &text){on_findOneLn_textChanched(text, "coverageType");});

        ui->findActiveLayout->addWidget(userIdLn);
        ui->findActiveLayout->addWidget(insurancePolicyLn);
        ui->findActiveLayout->addWidget(gadgetBrandLn);
        ui->findActiveLayout->addWidget(gadgetModelLn);
        ui->findActiveLayout->addWidget(gadgetPriceLn);
        ui->findActiveLayout->addWidget(coveragePackageLn);
    }

    else if(tableName == "Users"){
        activeComboBox->addItems(users);
        closedComboBox->addItems(users);

        activeComboBoxDesc->addItems(users);
        closedComboBoxDesc->addItems(users);

        userIdLn = new QLineEdit();
        balanceLn = new QLineEdit();
        usernameLn = new QLineEdit();
        surnameLn = new QLineEdit();
        nameLn = new QLineEdit();
        phoneNumberLn = new QLineEdit();

        userIdLn->setPlaceholderText("Find by user id:");
        balanceLn->setPlaceholderText("Find by balanceLn:");
        usernameLn->setPlaceholderText("Find by usernameLn:");
        surnameLn->setPlaceholderText("Find by surnameLn:");
        nameLn->setPlaceholderText("Find by nameLn");
        phoneNumberLn->setPlaceholderText("Find by phoneNumberLn:");

        connect(userIdLn, &QLineEdit::textChanged, this, [=](const QString &text){on_findOneLn_textChanched(text, "user_id");});
        connect(balanceLn, &QLineEdit::textChanged, this, [=](const QString &text){on_findOneLn_textChanched(text, "balance");});
        connect(usernameLn, &QLineEdit::textChanged, this, [=](const QString &text){on_findOneLn_textChanched(text, "username");});
        connect(surnameLn, &QLineEdit::textChanged, this, [=](const QString &text){on_findOneLn_textChanched(text, "surname");});
        connect(nameLn, &QLineEdit::textChanged, this, [=](const QString &text){on_findOneLn_textChanched(text, "name");});
        connect(phoneNumberLn, &QLineEdit::textChanged, this, [=](const QString &text){on_findOneLn_textChanched(text, "phoneNumber");});

        ui->findActiveLayout->addWidget(userIdLn);
        ui->findActiveLayout->addWidget(balanceLn);
        ui->findActiveLayout->addWidget(usernameLn);
        ui->findActiveLayout->addWidget(surnameLn);
        ui->findActiveLayout->addWidget(nameLn);
        ui->findActiveLayout->addWidget(phoneNumberLn);
    }
    activeComboBox->setPlaceholderText("Sort by ASC");
    closedComboBox->setPlaceholderText("Sort by ASC");

    activeComboBoxDesc->setPlaceholderText("Sort by DESC");
    closedComboBoxDesc->setPlaceholderText("Sort by DESC");

    activeComboBox->setVisible(true);
    closedComboBox->setVisible(true);

    activeComboBoxDesc->setVisible(true);
    closedComboBoxDesc->setVisible(true);

    showInsurance();
    connect(activeComboBox, QOverload<int>::of(&QComboBox::currentIndexChanged), this, [=](int index){ on_currentIndexCbChanged(index, "ASC"); });
    connect(closedComboBox, QOverload<int>::of(&QComboBox::currentIndexChanged), this, [=](int index){ on_currentIndexCbChanged(index, "ASC"); });

    connect(activeComboBoxDesc, QOverload<int>::of(&QComboBox::currentIndexChanged), this, [=](int index){ on_currentIndexCbChanged(index, "DESC"); });
    connect(closedComboBoxDesc, QOverload<int>::of(&QComboBox::currentIndexChanged), this, [=](int index){ on_currentIndexCbChanged(index, "DESC"); });

    connect(ui->findClosedLn, &QLineEdit::textChanged, this, &AllInsurances::on_findActiveLn_textChanged);

    ui->activeLayout->addWidget(activeComboBox);
    ui->activeLayout->addWidget(activeComboBoxDesc);

    ui->closedLayout->addWidget(closedComboBox);
    ui->closedLayout->addWidget(closedComboBoxDesc);

    ui->activeTableView->setModel(activeTableModel);
    ui->closedTableView->setModel(closedTableModel);

    if(tableName != "Users"){
    ui->activeTableView->setContextMenuPolicy(Qt::CustomContextMenu);
    connect(ui->activeTableView, &QTableView::customContextMenuRequested, this, [=](const QPoint &pos) {
        // Отримати рядок, на який було натискано
        QModelIndex index = ui->activeTableView->indexAt(pos);
        int row = index.row();

        if (row >= 0) {
            MySqlDBManager *db = MySqlDBManager::getInstance();
            QMenu contextMenu;
            QAction *action1 = contextMenu.addAction("Delete");

            connect(action1, &QAction::triggered, this, [=]() {
                QModelIndex index = ui->activeTableView->selectionModel()->currentIndex();
                int insurancePolicyDel = index.sibling(index.row(), 1).data().toInt();

                int result = QMessageBox::question(
                    this,
                    "Deleting insurance",
                    QString("Do you want to permanently delete all the data about insurance №" + QString::number(insurancePolicyDel)+" from "+tableName+"?"),
                    QMessageBox::Yes | QMessageBox::No
                    );
                if(result == QMessageBox::Yes){
                    try{
                        if(db->deleteInsurance(tableName, insurancePolicyDel)){QMessageBox::information(this, "Deleting", "Insurance №" + QString::number(insurancePolicyDel)+ " from table " + tableName+" has been deleted successful!");}
                    }catch(const std::exception &ex){
                        qCritical()<<"Exception in: "<<ex.what();
                    }
                }
            });



            contextMenu.exec(ui->activeTableView->viewport()->mapToGlobal(pos));
        }
    });
    }
}


AllInsurances::~AllInsurances()
{
    delete ui;
}

void AllInsurances::on_currentIndexCbChanged(int index, QString sortType){
    MySqlDBManager* db= MySqlDBManager::getInstance();
    QSqlQuery query;

    if (tableName == "AutoInsurance") {
        switch (index) {
        case 0:
            if (ui->tabWidget->currentIndex() == 0)
                query = db->sortTable(tableName, "user_id", sortType);
            else if (ui->tabWidget->currentIndex() == 1)
                query = db->sortTable("Deleted" + tableName, "user_id", sortType);
            break;
        case 1: // insurancePolicy
            if (ui->tabWidget->currentIndex() == 0)
                query = db->sortTable(tableName, "insurancePolicy", sortType);
            else if (ui->tabWidget->currentIndex() == 1)
                query = db->sortTable("Deleted" + tableName, "insurancePolicy", sortType);
            break;
        case 2: // coverageAmount
            if (ui->tabWidget->currentIndex() == 0)
                query = db->sortTable(tableName, "coverageAmount", sortType);
            else if (ui->tabWidget->currentIndex() == 1)
                query = db->sortTable("Deleted" + tableName, "coverageAmount", sortType);
            break;
        case 3: // insurancePrice
            if (ui->tabWidget->currentIndex() == 0)
                query = db->sortTable(tableName, "insurancePrice", sortType);
            else if (ui->tabWidget->currentIndex() == 1)
                query = db->sortTable("Deleted" + tableName, "insurancePrice", sortType);
            break;
        case 4: // cubicCapacity (for Car)
            if (ui->tabWidget->currentIndex() == 0)
                query = db->sortTable(tableName, "cubicCapacity", sortType);
            else if (ui->tabWidget->currentIndex() == 1)
                query = db->sortTable("Deleted" + tableName, "cubicCapacity", sortType);
            break;
        case 5: // carryingCapacity (for Truck)
            if (ui->tabWidget->currentIndex() == 0)
                query = db->sortTable(tableName, "carryingCapacity", sortType);
            else if (ui->tabWidget->currentIndex() == 1)
                query = db->sortTable("Deleted" + tableName, "carryingCapacity", sortType);
            break;
        case 6: // motoCubic (for Motorcycle)
            if (ui->tabWidget->currentIndex() == 0)
                query = db->sortTable(tableName, "motoCubic", sortType);
            else if (ui->tabWidget->currentIndex() == 1)
                query = db->sortTable("Deleted" + tableName, "motoCubic", sortType);
            break;
        case 7: // city (for Bus)
            if (ui->tabWidget->currentIndex() == 0)
                query = db->sortTable(tableName, "city", sortType);
            else if (ui->tabWidget->currentIndex() == 1)
                query = db->sortTable("Deleted" + tableName, "city", sortType);
            break;
        case 8: // autoYear
            if (ui->tabWidget->currentIndex() == 0)
                query = db->sortTable(tableName, "autoYear", sortType);
            else if (ui->tabWidget->currentIndex() == 1)
                query = db->sortTable("Deleted" + tableName, "autoYear", sortType);
            break;
        case 9: // autoPrice
            if (ui->tabWidget->currentIndex() == 0)
                query = db->sortTable(tableName, "autoPrice", sortType);
            else if (ui->tabWidget->currentIndex() == 1)
                query = db->sortTable("Deleted" + tableName, "autoPrice", sortType);
            break;
        case 10: // startDate
            if (ui->tabWidget->currentIndex() == 0)
                query = db->sortTable(tableName, "start_date", sortType);
            else if (ui->tabWidget->currentIndex() == 1)
                query = db->sortTable("Deleted" + tableName, "start_date", sortType);
            break;
        case 11: // endDate
            if (ui->tabWidget->currentIndex() == 0)
                query = db->sortTable(tableName, "end_date", sortType);
            else if (ui->tabWidget->currentIndex() == 1)
                query = db->sortTable("Deleted" + tableName, "end_date", sortType);
            break;
        }
    } else if (tableName == "TravelInsurance") {
        switch (index) {
        case 0:
            if (ui->tabWidget->currentIndex() == 0)
                query = db->sortTable(tableName, "user_id", sortType);
            else if (ui->tabWidget->currentIndex() == 1)
                query = db->sortTable("Deleted" + tableName, "user_id", sortType);
            break;
        case 1: // insurancePolicy
            if (ui->tabWidget->currentIndex() == 0)
                query = db->sortTable(tableName, "insurancePolicy", sortType);
            else if (ui->tabWidget->currentIndex() == 1)
                query = db->sortTable("Deleted" + tableName, "insurancePolicy", sortType);
            break;
        case 2: // coverageAmount
            if (ui->tabWidget->currentIndex() == 0)
                query = db->sortTable(tableName, "coverageAmount", sortType);
            else if (ui->tabWidget->currentIndex() == 1)
                query = db->sortTable("Deleted" + tableName, "coverageAmount", sortType);
            break;
        case 3: // insurancePrice
            if (ui->tabWidget->currentIndex() == 0)
                query = db->sortTable(tableName, "insurancePrice", sortType);
            else if (ui->tabWidget->currentIndex() == 1)
                query = db->sortTable("Deleted" + tableName, "insurancePrice", sortType);
            break;
        case 4: // travelDirection
            if (ui->tabWidget->currentIndex() == 0)
                query = db->sortTable(tableName, "travelDirection", sortType);
            else if (ui->tabWidget->currentIndex() == 1)
                query = db->sortTable("Deleted" + tableName, "travelDirection", sortType);
            break;
        case 5: // travelActivities
            if (ui->tabWidget->currentIndex() == 0)
                query = db->sortTable(tableName, "travelActivities", sortType);
            else if (ui->tabWidget->currentIndex() == 1)
                query = db->sortTable("Deleted" + tableName, "travelActivities", sortType);
            break;
        case 6: // startDate
            if (ui->tabWidget->currentIndex() == 0)
                query = db->sortTable(tableName, "start_date", sortType);
            else if (ui->tabWidget->currentIndex() == 1)
                query = db->sortTable("Deleted" + tableName, "start_date", sortType);
            break;
        case 7: // endDate
            if (ui->tabWidget->currentIndex() == 0)
                query = db->sortTable(tableName, "end_date", sortType);
            else if (ui->tabWidget->currentIndex() == 1)
                query = db->sortTable("Deleted" + tableName, "end_date", sortType);
            break;
        }
    } else if (tableName == "GadgetInsurance") {
        switch (index) {
        case 0:
            if (ui->tabWidget->currentIndex() == 0)
                query = db->sortTable(tableName, "user_id", sortType);
            else if (ui->tabWidget->currentIndex() == 1)
                query = db->sortTable("Deleted" + tableName, "user_id", sortType);
            break;
        case 1: // insurancePolicy
            if (ui->tabWidget->currentIndex() == 0)
                query = db->sortTable(tableName, "insurancePolicy", sortType);
            else if (ui->tabWidget->currentIndex() == 1)
                query = db->sortTable("Deleted" + tableName, "insurancePolicy", sortType);
            break;
        case 2: // insurancePrice
            if (ui->tabWidget->currentIndex() == 0)
                query = db->sortTable(tableName, "insurancePrice", sortType);
            else if (ui->tabWidget->currentIndex() == 1)
                query = db->sortTable("Deleted" + tableName, "insurancePrice", sortType);
            break;
        case 3:
            if (ui->tabWidget->currentIndex() == 0)
                query = db->sortTable(tableName, "gadgetBrand", sortType);
            else if (ui->tabWidget->currentIndex() == 1)
                query = db->sortTable("Deleted" + tableName, "gadgetBrand", sortType);
            break;
        case 4:
            if (ui->tabWidget->currentIndex() == 0)
                query = db->sortTable(tableName, "gadgetModel", sortType);
            else if (ui->tabWidget->currentIndex() == 1)
                query = db->sortTable("Deleted" + tableName, "gadgetModel", sortType);
            break;
        case 5:
            if (ui->tabWidget->currentIndex() == 0)
                query = db->sortTable(tableName, "gadgetPrice", sortType);
            else if (ui->tabWidget->currentIndex() == 1)
                query = db->sortTable("Deleted" + tableName, "gadgetPrice", sortType);
            break;
        case 6: // startDate
            if (ui->tabWidget->currentIndex() == 0)
                query = db->sortTable(tableName, "start_date", sortType);
            else if (ui->tabWidget->currentIndex() == 1)
                query = db->sortTable("Deleted" + tableName, "start_date", sortType);
            break;
        case 7: // endDate
            if (ui->tabWidget->currentIndex() == 0)
                query = db->sortTable(tableName, "end_date", sortType);
            else if (ui->tabWidget->currentIndex() == 1)
                query = db->sortTable("Deleted" + tableName, "end_date", sortType);
            break;
        }
    }

    else if(tableName == "Users"){
        switch(index){
        case 0: query = db->sortTable(tableName, "user_id", sortType); break;
        case 1: query = db->sortTable(tableName, "balance", sortType); break;
        case 2: query = db->sortTable(tableName, "username", sortType); break;
        case 3: query = db->sortTable(tableName, "surname", sortType); break;
        case 4: query = db->sortTable(tableName, "name", sortType); break;
        case 5: query = db->sortTable(tableName, "phoneNumber", sortType); break;
        }
    }


    QSqlQueryModel *queryModel;
    QTableView *tableView;
    if (ui->tabWidget->currentIndex() == 0) {
        queryModel = activeTableModel;
        tableView = ui->activeTableView;
    } else if(ui->tabWidget->currentIndex() == 1){
        queryModel = closedTableModel;
        tableView = ui->closedTableView;
    }
    queryModel->setQuery(query);
    tableView->setModel(queryModel);

    tableView->setSelectionBehavior(QAbstractItemView::SelectRows);
    tableView->setSelectionMode(QAbstractItemView::SingleSelection);
    tableView->resizeColumnsToContents();
    tableView->reset();
}


void AllInsurances::on_tabWidget_currentChanged(int index)
{
    switch (index) {
    case 0: // Active Insurance
        showInsurance();
        break;
    case 1: // Closed Insurance
        showInsurance();
        break;
    }
}

void AllInsurances::showInsurance()
{
    QString queryString;
    QSqlQueryModel *queryModel;
    QTableView *tableView;

    if (ui->tabWidget->currentIndex() == 0) {
        queryModel = activeTableModel;
        tableView = ui->activeTableView;
    } else if(ui->tabWidget->currentIndex() == 1){
        queryModel = closedTableModel;
        tableView = ui->closedTableView;
    }

    if(ui->tabWidget->currentIndex() == 0){
        queryString = "SELECT * FROM "+tableName+";";
    }
    else if(ui->tabWidget->currentIndex() == 1){
        queryString = "SELECT * FROM Deleted"+tableName+";";
    }

    QSqlQuery query;
    query.prepare(queryString);
    if (!query.exec()) {
        qDebug() << "SQL Error:" << query.lastError().text();
    }

    queryModel->setQuery(query);
    tableView->setModel(queryModel);

    tableView->setSelectionBehavior(QAbstractItemView::SelectRows);
    tableView->setSelectionMode(QAbstractItemView::SingleSelection);
    tableView->resizeColumnsToContents();
    tableView->reset();

}

void AllInsurances::on_findOneLn_textChanched(const QString &arg1, QString byField){
    MySqlDBManager* db= MySqlDBManager::getInstance();
    QSqlQuery query;
    QString tableNameNew;
    if(ui->tabWidget->currentIndex() == 0) tableNameNew = tableName;
    else if(ui->tabWidget->currentIndex() == 1) tableNameNew = "Deleted"+tableName;
    //finding:
    query = db->findInTable(tableNameNew, arg1, byField);
    QSqlQueryModel *queryModel;
    QTableView *tableView;
    if (ui->tabWidget->currentIndex() == 0) {
        queryModel = activeTableModel;
        tableView = ui->activeTableView;
    } else if(ui->tabWidget->currentIndex() == 1){
        queryModel = closedTableModel;
        tableView = ui->closedTableView;
    }
    queryModel->setQuery(query);
    tableView->setModel(queryModel);

    tableView->setSelectionBehavior(QAbstractItemView::SelectRows);
    tableView->setSelectionMode(QAbstractItemView::SingleSelection);
    tableView->resizeColumnsToContents();
    tableView->reset();
}

void AllInsurances::on_findActiveLn_textChanged(const QString &arg1)
{
    MySqlDBManager* db= MySqlDBManager::getInstance();
    QSqlQuery query;
    QString tableNameNew;
    if(ui->tabWidget->currentIndex() == 0) tableNameNew = tableName;
    else if(ui->tabWidget->currentIndex() == 1) tableNameNew = "Deleted"+tableName;
    //finding:
    query = db->findInTable(tableNameNew, arg1);
    QSqlQueryModel *queryModel;
    QTableView *tableView;
    if (ui->tabWidget->currentIndex() == 0) {
        queryModel = activeTableModel;
        tableView = ui->activeTableView;
    } else if(ui->tabWidget->currentIndex() == 1){
        queryModel = closedTableModel;
        tableView = ui->closedTableView;
    }
    queryModel->setQuery(query);
    tableView->setModel(queryModel);

    tableView->setSelectionBehavior(QAbstractItemView::SelectRows);
    tableView->setSelectionMode(QAbstractItemView::SingleSelection);
    tableView->resizeColumnsToContents();
    tableView->reset();
}

void AllInsurances::closeEvent(QCloseEvent *event)
{
    QDialog::closeEvent(event);
    emit closed();
}





