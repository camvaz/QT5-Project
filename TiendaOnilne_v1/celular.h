#ifndef CELULAR_H
#define CELULAR_H
#include <QString>


class Celular
{
    QString nombre,
    tec, os, peso,
    dimensiones, camara,
    pantalla, resolucion,
    carga, memoria;

public:
    Celular(QString &&newName, QString &&newTec, QString &&newOs, QString &&newPeso, QString &&newDimensiones,
            QString &&newCamara, QString &&newPantalla, QString &&newRes, QString &&newCarga, QString &&newMemoria):
        nombre(newName),
        tec(newTec), os(newOs), peso(newPeso),
        dimensiones(newDimensiones), camara(newCamara),
        pantalla(newPantalla), resolucion(newRes), carga(newCarga),
        memoria(newMemoria){}
    Celular();

    bool operator==(Celular &);
};


#endif // CELULAR_H
