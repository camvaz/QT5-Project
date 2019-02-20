#include "persona.h"

Persona::Persona()
{

}

Persona::Persona(QString& newNombre, QString& newApellido, QString& newCalle, QString& newCiudad, QString& newColonia,
                 QString& newCP, QString& newID, QString& newNoExterior, QString& newTelefono, QString& newPassword)
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
    this->password = newPassword;
}

QString Persona::getId()const
{
    return this->ID;
}
