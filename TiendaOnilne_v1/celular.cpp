#include "celular.h"

Celular::Celular()
{

}

void Celular::setObject(QString &&newName, QString &&newTec, QString &&newOs, QString &&newPeso, QString &&newDimensiones,
                        QString &&newCamara, QString &&newPantalla, QString &&newRes, QString &&newCarga, QString &&newMemoria)
{
    this->nombre = newName;

    this->tec = newTec;
    this->os = newOs;
    this->peso = newPeso;
    this->dimensiones = newDimensiones;
    this->camara = newCamara;
    this->pantalla = newPantalla;
    this->resolucion = newRes;
    this->carga = newCarga;
    this->memoria = newMemoria;
}

bool Celular::operator==(Celular &cel)
{
    return this->nombre == cel.nombre;
}
