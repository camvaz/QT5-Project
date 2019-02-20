#include "cliente.h"

Cliente::Cliente()
{

}

Cliente::Cliente(const Cliente &e)
{
    this->nombre = e.nombre;
    this->apellido = e.apellido;
    this->calle = e.calle;
    this->ciudad = e.ciudad;
    this->colonia = e.colonia;
    this->CP = e.CP;
    this->ID = e.ID;
    this->noExterior = e.noExterior;
    this->telefono = e.telefono;
    this->password = e.password;
    this->paymentInfo = e.paymentInfo;
}

Cliente::Cliente(const Cliente *e)
{
    this->nombre = e->nombre;
    this->apellido = e->apellido;
    this->calle = e->calle;
    this->ciudad = e->ciudad;
    this->colonia = e->colonia;
    this->CP = e->CP;
    this->ID = e->ID;
    this->noExterior = e->noExterior;
    this->telefono = e->telefono;
    this->password = e->password;
    this->paymentInfo = e->paymentInfo;
}

Cliente::Cliente(QString& newNombre, QString& newApellido, QString& newCalle, QString& newCiudad, QString& newColonia,
                 QString& newCP, QString& newID, QString& newNoExterior, QString& newTelefono, QString& newPassword, QString& payInfo):
    Persona (newNombre,newApellido, newCalle, newCiudad, newColonia, newCP, newID, newNoExterior, newTelefono, newPassword)
{
    this->paymentInfo = payInfo;
}

void Cliente::buscarDocumentos(QString& docId)
{

}

QString Cliente::getPaymentInfo()
{
    return this->paymentInfo;
}

void Cliente::realizarSolicitud()
{

}

void Cliente::buscarSolicitud(QString& solicitudID)
{

}

void Cliente::setObject(QString& newNombre, QString& newApellido, QString& newCalle, QString& newCiudad, QString& newColonia,
                        QString& newCP, QString& newID, QString& newNoExterior, QString& newTelefono, QString& newPassword, QString& payInfo)
{
    this->nombre = newNombre;
    this->apellido = newApellido;
    this->calle = newCalle;
    this->ciudad = newCiudad;
    this->colonia = newColonia;
    this->CP = newCP;
    this->ID = newID;
    this->noExterior = newNoExterior;
    this->telefono = newTelefono;
    this->password =newPassword;
    this->paymentInfo = payInfo;
}
