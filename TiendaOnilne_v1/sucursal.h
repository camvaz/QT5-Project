#ifndef SUCURSAL_H
#define SUCURSAL_H
#include <qstring.h>
#include <QVector>
#include <QPair>
#include <iostream>
#include <celular.h>

class Sucursal
{
    QString nombre;
    QString ubicacion;
    int numModelos;
    QVector < QPair < Celular, int >* > Inventario;
    bool checker;
public:
    Sucursal();
    Sucursal(int&);
    Sucursal(QString &&newName, QString &&newUbicacion):
        nombre(newName),
        ubicacion(newUbicacion),
        numModelos(0),
        checker(true){}
    bool agregaModelo(Celular &cellphone, int &cardinalidad);
};

bool Sucursal::agregaModelo(Celular &cellphone, int &cardinalidad){

    for(int j = 0; j < Inventario.size(); j++)
    {
        if(cellphone == Inventario[j]->first)
            return false;
    }

    if(checker)
    {
        Inventario.push_back(new QPair <Celular, int> (cellphone, cardinalidad));
        return true;
    }
    else
        return false;
}

#endif // SUCURSAL_H
