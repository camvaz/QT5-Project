#ifndef PERSONA_H
#define PERSONA_H
#include <QString>

class Persona
{
protected:
    QString apellido, nombre, calle, ciudad, colonia,
            CP, ID, noExterior, password, telefono;
public:
    Persona();
    Persona(QString&, QString&, QString&, QString&, QString&, QString&, QString&, QString&, QString&, QString&);
    QString getId()const;
};

#endif // PERSONA_H
