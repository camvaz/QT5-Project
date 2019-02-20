#include "celular.h"

celular::celular()
{

}

celular::celular(const celular &e)
{
    this->ID = e.ID;
    this->camara = e.camara;
    this->carga = e.carga;
    this->dimensiones = e.dimensiones;
    this->imagen = e.imagen;
    this->memoria = e.memoria;
    this->nombre = e.nombre;
    this->os = e.os;
    this->pantalla = e.pantalla;
    this->peso = e.peso;
    this->resolucion = e.resolucion;
    this->tec = e.tec;
}

bool celular::operator=(celular e)
{
    this->ID = e.ID;
    this->camara = e.camara;
    this->carga = e.carga;
    this->dimensiones = e.dimensiones;
    this->imagen = e.imagen;
    this->memoria = e.memoria;
    this->nombre = e.nombre;
    this->os = e.os;
    this->pantalla = e.pantalla;
    this->peso = e.peso;
    this->resolucion = e.resolucion;
    this->tec = e.tec;
    return true;
}

QString celular::getAtributo(int&& opc) const
{
    switch(opc){
            case 0:
        return this->nombre;
        break;
            case 1:
        return this->camara;
        break;
            case 2:
        return this->carga;
        break;
            case 3:
        return this->dimensiones;
        break;
            case 4:
        return this->memoria;
        break;
            case 5:
        return this->os;
        break;
            case 6:
        return this->pantalla;
        break;
            case 7:
        return this->peso;
        break;
            case 8:
        return this->resolucion;
        break;
            case 9:
        return this->tec;
        break;

            case 10:
        return this->imagen;
        break;

            case 11:
        return this->ID;
        break;

            default:
        return this->nombre;
        break;
    }
}

QString celular::getID()
{
    return this->ID;
}
