#include "documento.h"

documento::documento()
{

}

void documento::setData(QString &newfile_path, QString &newID)
{
    this->ID =newID;
    this->file_path =newfile_path;
}

//void documento::setCliente(Cliente &newCliente)
//{
//    this->Client = new Cliente(newCliente);
//}

//void documento::setCompra(compra &e)
//{
//    this->Orden = new compra(e);
//}

QString documento::getID() const
{
    return this->ID;
}

QString documento::getFile(){
    return this->file_path;
}
