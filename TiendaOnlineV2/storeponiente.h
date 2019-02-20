#ifndef STOREPONIENTE_H
#define STOREPONIENTE_H

#include <QDialog>
#include <QMessageBox>
#include <QtSql/QSqlDatabase>
#include <QtSql/QSqlError>
#include <QtSql/QSqlQuery>


namespace Ui {
class storePoniente;
}

class storePoniente : public QDialog
{
    Q_OBJECT

public:
    explicit storePoniente(QWidget *parent = nullptr);
    ~storePoniente();

private slots:
    void on_pushButton_clicked();

private:
    Ui::storePoniente *ui;
    QSqlDatabase db;
};

#endif // STOREPONIENTE_H
