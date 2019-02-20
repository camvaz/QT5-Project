#include "compra.h"

compra::compra()
{

}

QString compra::getID() const
{
    return this->ID;
}

void compra::setObject(QString &newID, QString &newDesc, QString &newStatus)
{
    this->ID = newID;
    this->descripcion = newDesc;
    this->status = newStatus;
}

void compra::setCliente(Cliente &e)
{
    this->Client = e;
}

void compra::setDocumento(documento &e)
{
    this->Documento = e;
}

void compra::setSucursal(sucursal &e)
{
    this->Sucursal = e;
}

void compra::setSolicitud(solicitudCompra &e)
{
    this->solicitud =e;
}
