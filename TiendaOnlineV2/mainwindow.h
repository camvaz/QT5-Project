#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QtSql/QSqlDatabase>
#include <QtSql/QSqlError>
#include <QtSql/QSqlQuery>
//#include <clientwindow.h>
#include <adminwindow.h>
//#include <store.h>
#include <qmessagebox.h>
#include <cliente.h>
#include <form_newclient.h>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_pushButton_clicked();

    void on_actionNuevo_Cliente_triggered();

    void on_actionSobre_Qt_triggered();

    void on_pushButton_2_clicked();

    void on_push_login_clicked();

    void on_push_registro_clicked();

private:
    Cliente client;
    Ui::MainWindow *ui;
    AdminWindow *ventana;
    Form_newClient *forma;
    QString usertry, passtry;
    QSqlDatabase db;
};

#endif // MAINWINDOW_H
