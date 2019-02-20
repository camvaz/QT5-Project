#ifndef CLIENTE_H
#define CLIENTE_H
#include <persona.h>

class Cliente:public Persona
{
    QString paymentInfo;
public:
    Cliente();
    Cliente(const Cliente& e);
    Cliente(const Cliente* e);
    Cliente(QString&, QString&, QString&, QString&, QString&, QString&, QString&, QString&, QString&, QString&, QString&);
    void buscarDocumentos(QString&);
    QString getPaymentInfo();
    void realizarSolicitud();
    void buscarSolicitud(QString&);
    QString getName(){return this->nombre;}
    QString getLastName(){return this->apellido;}
    QString getDireccion(){return this->calle; }
    void setObject(QString&, QString&, QString&, QString&, QString&, QString&, QString&, QString&, QString&, QString&, QString&);
};

#endif // CLIENTE_H
