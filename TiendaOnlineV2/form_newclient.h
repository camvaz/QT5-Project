#ifndef FORM_NEWCLIENT_H
#define FORM_NEWCLIENT_H

#include <QDialog>
#include <QtSql/QSqlDatabase>
#include <QtSql/QSqlQuery>
#include <QtSql/QSqlError>
#include <QMessageBox>
namespace Ui {
class Form_newClient;
}

class Form_newClient : public QDialog
{
    Q_OBJECT

public:
    explicit Form_newClient(QWidget *parent = nullptr);
    ~Form_newClient();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

private:
    Ui::Form_newClient *ui;
    QSqlDatabase db;
    QString apellido, nombre, calle, ciudad, colonia,
    CP, ID, noExterior, password, telefono, payInfo;
};

#endif // FORM_NEWCLIENT_H
