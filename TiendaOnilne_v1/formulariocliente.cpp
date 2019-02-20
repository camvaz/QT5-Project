#include "formulariocliente.h"
#include "ui_formulariocliente.h"


formularioCliente::formularioCliente(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::formularioCliente)
{
    ui->setupUi(this);
}

formularioCliente::~formularioCliente()
{
    delete ui;
}

void formularioCliente::on_pushButton_2_clicked()
{
    ui->linePass->clear();
    ui->lineApellido->clear();
    ui->lineCP->clear();
    ui->lineCalle->clear();
    ui->lineCiudad->clear();
    ui->lineColonia->clear();
    ui->lineNo->clear();
    ui->lineNombre->clear();
    ui->lineSexo->clear();
    ui->lineTelefono->clear();

    this->hide();
}

void formularioCliente::on_pushButton_clicked()
{

}
