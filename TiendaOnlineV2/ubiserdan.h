#ifndef UBISERDAN_H
#define UBISERDAN_H

#include <QDialog>
#include <QMessageBox>
#include <QtSql/QSqlDatabase>
#include <QtSql/QSqlError>
#include <QtSql/QSqlQuery>



namespace Ui {
class ubiSerdan;
}

class ubiSerdan : public QDialog
{
    Q_OBJECT

public:
    explicit ubiSerdan(QWidget *parent = nullptr);
    ~ubiSerdan();

private slots:
    void on_pushButton_clicked();

private:
    Ui::ubiSerdan *ui;
    QSqlDatabase db;
};

#endif // UBISERDAN_H
