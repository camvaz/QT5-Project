#ifndef STORESERDAN_H
#define STORESERDAN_H

#include <QDialog>
#include <QMessageBox>
#include <QtSql/QSqlDatabase>
#include <QtSql/QSqlError>
#include <QtSql/QSqlQuery>

namespace Ui {
class storeSerdan;
}

class storeSerdan : public QDialog
{
    Q_OBJECT

public:
    explicit storeSerdan(QWidget *parent = nullptr);
    ~storeSerdan();

private slots:
    void on_pushButton_clicked();

private:
    Ui::storeSerdan *ui;
    QSqlDatabase db;
};

#endif // STORESERDAN_H
