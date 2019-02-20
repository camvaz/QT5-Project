#ifndef STORESONATA_H
#define STORESONATA_H

#include <QDialog>
#include <QMessageBox>
#include <QtSql/QSqlDatabase>
#include <QtSql/QSqlError>
#include <QtSql/QSqlQuery>

namespace Ui {
class storeSonata;
}

class storeSonata : public QDialog
{
    Q_OBJECT

public:
    explicit storeSonata(QWidget *parent = nullptr);
    ~storeSonata();

private slots:
    void on_pushButton_clicked();

private:
    Ui::storeSonata *ui;
    QSqlDatabase db;
};

#endif // STORESONATA_H
