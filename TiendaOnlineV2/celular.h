#ifndef CELULAR_H
#define CELULAR_H
#include <QString>

class celular
{
    QString ID, nombre,
    tec, os, peso,
    dimensiones, camara,
    pantalla, resolucion,
    carga, memoria, imagen;
public:
    celular();
    celular(const celular&);
    celular(QString &&id, QString &&newName, QString &&newTec, QString &&newOs, QString &&newPeso, QString &&newDimensiones,
            QString &&newCamara, QString &&newPantalla, QString &&newRes, QString &&newCarga, QString &&newMemoria, QString&& newImagen):
        ID(id),
        nombre(newName),
        tec(newTec), os(newOs), peso(newPeso),
        dimensiones(newDimensiones), camara(newCamara),
        pantalla(newPantalla), resolucion(newRes), carga(newCarga),
        memoria(newMemoria), imagen(newImagen){}
    bool operator=(celular);
    void setObject(QString &newID, QString &newName, QString &newTec, QString &newOs, QString &newPeso, QString &newDimensiones,
                            QString &newCamara, QString &newPantalla, QString &newRes, QString &newCarga, QString &newMemoria, QString &newImagen)
    {
        this->ID=newID;
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
        this->imagen = newImagen;
    }
    QString getAtributo(int&&)const;
    QString getID();
    friend class ClientWindow;
};

#endif // CELULAR_H
