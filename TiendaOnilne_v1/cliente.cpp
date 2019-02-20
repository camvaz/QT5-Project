#include "cliente.h"

Cliente::Cliente()
{

}

Cliente::Cliente(QString newNombre, QString newApellido, QString newSexo, QString newTelefono, QString newCalle,
                 QString newNoExterior, QString newColonia, QString newCP, QString newCiudad, QString newPass):
    nombre(newNombre), apellidos(newApellido), sexo(newSexo), telefono(newTelefono), calle(newCalle), noExterior(newNoExterior),
    colonia(newColonia), CP(newCP), ciudad(newCiudad), password(newPass)
{

}

void Cliente::setObject(QString newNombre, QString newApellido, QString newSexo, QString newTelefono, QString newCalle,
                        QString newNoExterior, QString newColonia, QString newCP, QString newCiudad, QString newPass)
{
    nombre = newNombre;
    apellidos = newApellido;
    sexo = newSexo;
    telefono = newTelefono;
    calle = newCalle;
    noExterior = newNoExterior;
    colonia = newColonia;
    CP = newCP;
    ciudad = newCiudad;
    password = newPass;
}
