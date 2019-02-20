#include "sucursal.h"

sucursal::sucursal()
{
    Modelos = new QString[8];
    qty = new int[8];
    cantidadModelos = 0;
}

QString sucursal::getID()const
{
    return this->ID;
}

void sucursal::setData(QString newID, QString newUbicacion, QString newNombre)
{
    this->ID=newID;
    this->nombre=newNombre;
    this->ubicacion =newUbicacion;
}

void sucursal::fillInventario(QString a, int b)
{
    Modelos[cantidadModelos] = a;
    qty[cantidadModelos] = b;
    ++cantidadModelos;
}

bool sucursal::operator=(sucursal e)
{
    this->ID = e.ID;
    this->cantidadModelos = e.cantidadModelos;
    this->nombre = e.nombre;
    this->ubicacion = e.ubicacion;

    for(int i = 0; i<8; i++)
    {
        Modelos[i] = e.Modelos[i];
        qty[i] = e.qty[i];
    }
    return true;
}

int sucursal::getCantidadModelos()
{
    return cantidadModelos;
}

//QVector<QPair<celular, int> >& sucursal::getCont()
//{
//    return this->Inventario;
//}


