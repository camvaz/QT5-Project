#ifndef STOREANGE_H
#define STOREANGE_H

#include <QDialog>
#include <QMessageBox>
#include <QtSql/QSqlDatabase>
#include <QtSql/QSqlError>
#include <QtSql/QSqlQuery>

namespace Ui {
class storeAnge;
}

class storeAnge : public QDialog
{
    Q_OBJECT

public:
    explicit storeAnge(QWidget *parent = nullptr);
    ~storeAnge();

private slots:
    void on_pushButton_clicked();

private:
    Ui::storeAnge *ui;
    QSqlDatabase db;
};

#endif // STOREANGE_H
