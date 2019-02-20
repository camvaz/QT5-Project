#include "storeange.h"
#include "ui_storeange.h"

storeAnge::storeAnge(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::storeAnge)
{
    ui->setupUi(this);
    setWindowTitle("Ubicacion");
    db = QSqlDatabase::database();
    QSqlQuery query;
    if(query.exec("SELECT ubicacion FROM sucursal WHERE idSucursal = 'idSuc5'"))
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

storeAnge::~storeAnge()
{
    db.close();
    delete ui;
}

void storeAnge::on_pushButton_clicked()
{
    this->close();
}
