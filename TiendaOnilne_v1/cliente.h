#ifndef CLIENTE_H
#define CLIENTE_H
#include <QString>

class Cliente
{
    QString nombre, apellidos, sexo,
    telefono, calle, noExterior, colonia,
    CP, ciudad, password;
public:
    Cliente(){}
    Cliente(QString, QString, QString, QString, QString, QString, QString, QString, QString, QString);
    void setObject(QString, QString, QString, QString, QString, QString, QString, QString, QString, QString);
    friend class formularioCliente;
};

#endif // CLIENTE_H
