#include "form_newclient.h"
#include "ui_form_newclient.h"
#include <qdebug.h>

Form_newClient::Form_newClient(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Form_newClient)
{
    setWindowTitle("Registro");
    db = QSqlDatabase::database();

    if(!db.open()){
        qDebug() << "DB Connection error";
    }

    ui->setupUi(this);
}

Form_newClient::~Form_newClient()
{
    db.close();
    delete ui;
}

void Form_newClient::on_pushButton_clicked()
{
    QSqlQuery query;

    apellido = ui->lineApellido->text();
    nombre  = ui->lineNombre->text();
    calle = ui->lineCalle->text();
    ciudad = ui->lineCiudad->text();
    colonia = ui->lineColonia->text();
    CP = ui->lineCP->text();
    ID = ui->lineID->text();
    noExterior = ui->lineNo->text();
    payInfo = ui->linePago->text();
    password = ui->linePass->text();
    telefono = ui->linePass->text();
        if(query.exec("INSERT INTO clientes VALUES('"+ ID +"', '"+ apellido +"','"+ nombre +"','"+ calle +"','"+ ciudad +"','"
                      + colonia +"','"+ CP +"','"+ noExterior +"','"+ telefono +"','"+ payInfo +"','"+ password +"')"))
        {
            QSqlQuery query2;
            if(query2.exec("INSERT INTO solicitudes VALUES('idSol"+ nombre +"', null, null, '"+ ID +"')"))
            {
                QMessageBox::StandardButton reply = QMessageBox::information(this, "Registro exitoso",  "Cliente dado de alta con exito. El ID para iniciar sesion es: "+
                                         ID);
                if(reply == QMessageBox::Yes)
                    this->hide();
                else
                    this->hide();
            }
            else{
                QMessageBox::critical(this, "Error en el registro", "Verificar con el administrador de la Base de datos");
                qDebug() << query.lastError().driverText() << query.lastError().text() ;
            }
        }
        else{
            QMessageBox::critical(this, "Error en el registro", "Verificar con el administrador de la Base de datos");
            qDebug() << query.lastError().driverText() << query.lastError().text() ;
        }
}

void Form_newClient::on_pushButton_2_clicked()
{
    this->close();
}
