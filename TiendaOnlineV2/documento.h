#ifndef DOCUMENTO_H
#define DOCUMENTO_H
#include <QString>

class documento
{
    QString file_path, ID;
//    Cliente *Client;
//    compra *Orden;
public:
    documento();
    void setData(QString&, QString&);
//    void setCliente(Cliente&);
//    void setCompra(compra&);
    QString getID()const;
    QString getFile();
};

#endif // DOCUMENTO_H
