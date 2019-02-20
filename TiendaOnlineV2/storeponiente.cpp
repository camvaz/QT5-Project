#include "storeponiente.h"
#include "ui_storeponiente.h"

storePoniente::storePoniente(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::storePoniente)
{
    ui->setupUi(this);
    setWindowTitle("Ubicacion");
    db = QSqlDatabase::database();
    QSqlQuery query;
    if(query.exec("SELECT ubicacion FROM sucursal WHERE idSucursal = 'idSuc3'"))
    {
        if(query.size()>0)
        {
            query.first();
            ui->label_direccion->setText(query.value(0).toString());
        }
    }else{
        QMessageBox::critical(this, "Error", "Error al consultar direccion");
    }
}

storePoniente::~storePoniente()
{
    db.close();
    delete ui;
}

void storePoniente::on_pushButton_clicked()
{
    this->close();
}
