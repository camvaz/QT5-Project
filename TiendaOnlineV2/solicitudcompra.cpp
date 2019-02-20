#include "solicitudcompra.h"

solicitudCompra::solicitudCompra()
{
    numModelos = 0;
}

void solicitudCompra::setData(QString &newID, QString &newDescripcion, QString &newlocationkey)
{
    this->ID = newID;
    this->descripcion = newDescripcion;
    this->locationkey = newlocationkey;
}

void solicitudCompra::setInventario(QString cel, int card)
{
    Modelos[numModelos] = cel;
    qty[numModelos] =card;
    ++numModelos;
}

QString solicitudCompra::getID() const
{
    return this->ID;
}
