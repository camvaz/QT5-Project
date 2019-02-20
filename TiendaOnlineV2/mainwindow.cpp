#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <qdebug.h>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
     ui->setupUi(this);
    this->setWindowTitle("Bienvenido");
    db = QSqlDatabase::addDatabase("QMYSQL");
    db.setHostName("127.0.0.1");
    db.setPort(3306);
    db.setDatabaseName("proyectov4");
    db.setUserName("root");
    db.setPassword("");

    if(!db.open()){
        qDebug() << "DB Connection error";
    }
    ui->stateLabel->setText("YO CELLPHONES 'ND SHEEEEET ON THIS B. BUY SOME GET SOME BRUHHH");
    ui->statusBar->addPermanentWidget(ui->stateLabel);
}

MainWindow::~MainWindow()
{
    db.close();
    delete ui;
}

void MainWindow::on_actionNuevo_Cliente_triggered()
{
    forma = new Form_newClient(this);
    forma -> show();
}

void MainWindow::on_actionSobre_Qt_triggered()
{
    QMessageBox::aboutQt(this);
}

void MainWindow::on_push_login_clicked()
{
    QSqlQuery query;
    usertry = ui->line_user->text();
    passtry = ui->line_pass->text();

//      query.prepare("SELECT * FROM Documentos WHERE idDocumentos = '" + usertry +"' AND filePath = '"+ passtry +"'");
    if(query.exec("SELECT * FROM Clientes WHERE idClientes = '" + usertry +"' AND Contrasenia = '"+ passtry +"'"))
    {
        if(query.size() > 0)
        {

            QString nombre = query.value(2).toString();
            QString apellido = query.value(1).toString();
            QString calle = query.value(3).toString();
            QString ciudad = query.value(4).toString();
            QString colonia = query.value(5).toString();
            QString CP = query.value(6).toString();
            QString ID = query.value(0).toString();
            QString noExt = query.value(7).toString();
            QString tel = query.value(8).toString();
            QString pass = query.value(10).toString();
            QString pay = query.value(9).toString();

            client.setObject(nombre, apellido, calle, ciudad, colonia, CP, ID, noExt, tel, pass, pay);

            ventana = new AdminWindow(this);
            this->hide();
            ventana->show();
        }
        else
        {
            QMessageBox::warning(this, "Login failed", "No se encontro cliente en la BD");
        }
    }

    else
    {
        QMessageBox::critical(this, "Error de login", "ID o contraseña incorrectos. En caso de no contar con una cuenta, presionar"
                                                      "el boton de registro");
        qDebug() << query.lastError();
        ui->stateLabel->setText(query.lastError().driverText());
    }
}

void MainWindow::on_pushButton_2_clicked(){}
void MainWindow::on_pushButton_clicked(){}

void MainWindow::on_push_registro_clicked()
{
    forma = new Form_newClient(this);
    forma -> show();
}
