#include "storeserdan.h"
#include "ui_storeserdan.h"

storeSerdan::storeSerdan(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::storeSerdan)
{
    ui->setupUi(this);
    setWindowTitle("Ubicacion");
    db = QSqlDatabase::database();
    QSqlQuery query;
    if(query.exec("SELECT ubicacion FROM sucursal WHERE idSucursal = 'idSuc4'"))
    {
        if(query.size()>0)
        {
            query.first();
            ui->label_direccion->setText(query.value(0).toString());
        }
    }else{
        QMessageBox::critical(this, "Error", "Error al consultar direccion");
    }
    ui->setupUi(this);
}

storeSerdan::~storeSerdan()
{
    db.close();
    delete ui;
}

void storeSerdan::on_pushButton_clicked()
{
    this->close();
}
