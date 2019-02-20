#ifndef ADMINISTRADOR_H
#define ADMINISTRADOR_H
#include <QString>
#include <QtSql>
#include <QHash>
#include <persona.h>
#include <cliente.h>
#include <sucursal.h>
#include <solicitudcompra.h>
#include <documento.h>
#include <celular.h>
#include <qdebug.h>
#include <compra.h>

class administrador: public Persona
{
    QHash <QString, Cliente> container_Clientes;
    QHash <QString, sucursal> container_Sucursal;
    QHash <QString, solicitudCompra> container_Solicitudes;
    QHash <QString, documento> container_Documentos;
    QHash <QString, compra> container_Compra;
    QHash <QString, celular> container_Celular;
    friend class ClientWindow;
    QSqlDatabase db;

public:

    administrador();
    QHash <QString, Cliente>& getClientes(){return container_Clientes;}
    QHash <QString, sucursal>& getSucursales(){return container_Sucursal;}
    QHash <QString, solicitudCompra>& getSolicitudes(){return container_Solicitudes;}
    QHash <QString, documento>& getDocumentos() {return container_Documentos;}
    QHash <QString, compra>& getCompras() {return container_Compra;}
    QHash <QString, celular>& getCelulares() {return container_Celular;}
    void fillContainers();
};

#endif // ADMINISTRADOR_H

inline bool operator==(const Cliente &e1, const Cliente &e2)
{
    return e1.getId() == e2.getId();
}

inline uint qHash(const Cliente &key, uint seed)
{
    return qHash(key.getId(), seed);
}

inline bool operator==(const sucursal &e1, const sucursal &e2)
{
    return e1.getID() == e2.getID();
}

inline uint qHash(const sucursal &key, uint seed)
{
    return qHash(key.getID(), seed);
}

inline bool operator==(const solicitudCompra &e1, const solicitudCompra &e2)
{
    return e1.getID() == e2.getID();
}

inline uint qHash(const solicitudCompra &key, uint seed)
{
    return qHash(key.getID(), seed);
}

inline bool operator==(const documento &e1, const documento &e2)
{
    return e1.getID() == e2.getID();
}

inline uint qHash(const documento &key, uint seed)
{
    return qHash(key.getID(), seed);
}

inline bool operator==(const compra &e1, const compra &e2)
{
    return e1.getID() == e2.getID();
}

inline uint qHash(const compra &key, uint seed)
{
    return qHash(key.getID(), seed);
}

inline bool operator==(const celular &e1, const celular &e2)
{
    return e1.getAtributo(11) == e2.getAtributo(11);
}

inline uint qHash(const celular &key, uint seed)
{
    return qHash(key.getAtributo(11), seed);
}


