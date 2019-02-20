#include "ubiserdan.h"
#include "ui_ubiserdan.h"

ubiSerdan::ubiSerdan(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::ubiSerdan)
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
}

ubiSerdan::~ubiSerdan()
{
    db.close();
    delete ui;
}

void ubiSerdan::on_pushButton_clicked()
{
    this->close();
}
