#include "tienda_v1.h"
#include "ui_tienda_v1.h"
#include <qmessagebox.h>
#include <QPixmap>

Tienda_v1::Tienda_v1(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::Tienda_v1)
{
    ui->setupUi(this);
    this->hide();
    logInBro = new logIn(this);
    logInBro->show();
}

Tienda_v1::~Tienda_v1()
{
    delete ui;
}


void Tienda_v1::on_actionNueva_orden_triggered()
{

}

void Tienda_v1::on_actionNuevo_Cliente_triggered()
{
    formulario = new formularioCliente(this);
    formulario->show();
}
