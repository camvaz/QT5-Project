#include "store.h"
#include "ui_store.h"

    Store::Store(QWidget *parent) :
        QDialog(parent),
        ui(new Ui::Store)
    {
        ui->setupUi(this);
        setWindowTitle("Ubicacion");
        db = QSqlDatabase::database();
        QSqlQuery query;
        if(query.exec("SELECT ubicacion FROM sucursal WHERE idSucursal = 'idSuc1'"))
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

Store::~Store()
{
    db.close();
    delete ui;
}

void Store::on_pushButton_clicked()
{
    this->close();
}
