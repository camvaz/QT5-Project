#ifndef SOLICITUDCOMPRA_H
#define SOLICITUDCOMPRA_H
#include <QString>
#include <QVector>
#include <QPair>
#include <celular.h>

class solicitudCompra
{
    QString ID, descripcion, locationkey;
    QString *Modelos;
    int numModelos;
    int *qty;
public:
    solicitudCompra();
    void setData(QString&, QString&, QString&);
    void setInventario(QString, int);
    QString getID()const;
    friend class ClientWindow;
};

#endif // SOLICITUDCOMPRA_H
