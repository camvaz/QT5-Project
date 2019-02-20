#include "storesonata.h"
#include "ui_storesonata.h"

storeSonata::storeSonata(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::storeSonata)
{
    ui->setupUi(this);
    setWindowTitle("Ubicacion");
    db = QSqlDatabase::database();
    QSqlQuery query;
    if(query.exec("SELECT ubicacion FROM sucursal WHERE idSucursal = 'idSuc2'"))
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

storeSonata::~storeSonata()
{
    db.close();
    delete ui;
}

void storeSonata::on_pushButton_clicked()
{
    this->close();
}
