#ifndef STORE_H
#define STORE_H

#include <QDialog>
#include <QMessageBox>
#include <QtSql/QSqlDatabase>
#include <QtSql/QSqlError>
#include <QtSql/QSqlQuery>

namespace Ui {
class Store;
}

class Store : public QDialog
{
    Q_OBJECT

public:
    explicit Store(QWidget *parent = nullptr);
    ~Store();

private slots:
    void on_pushButton_clicked();

private:
    Ui::Store *ui;
    QSqlDatabase db;
};

#endif // STORE_H
