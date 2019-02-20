#ifndef SUCURSAL_H
#define SUCURSAL_H
#include <qstring.h>
#include <QVector>
#include <QPair>
#include <QList>
#include <celular.h>
#include <lista.h>
class sucursal
{
    QString ID, nombre, ubicacion;
    QString *Modelos;
    int *qty;
    QString modAct;
    int cantidadModelos;
public:
    sucursal();
    QString getID()const;
    QString * getModelos(){return Modelos;}
    int * getQty() {return qty;}
    void setData(QString, QString, QString);
    void fillInventario(QString a, int);
    bool operator=(sucursal);
//    QVector <QPair <celular, int> >& getCont();
    friend class AdminWindow;
    int getCantidadModelos();
};

#endif // SUCURSAL_H
