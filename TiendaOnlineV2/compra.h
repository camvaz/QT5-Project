#ifndef COMPRA_H
#define COMPRA_H
#include <QString>
#include <cliente.h>
#include <documento.h>
#include <sucursal.h>
#include <solicitudcompra.h>

class compra
{
    QString ID, descripcion, status;
    Cliente Client;
    documento Documento;
    sucursal Sucursal;
    solicitudCompra solicitud;
public:
    compra();
    QString getID()const;
    void setObject(QString&, QString&, QString&);
    void setCliente(Cliente&);
    void setDocumento(documento&);
    void setSucursal(sucursal&);
    void setSolicitud(solicitudCompra&);
};

#endif // COMPRA_H
