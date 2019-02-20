#ifndef TIENDA_V1_H
#define TIENDA_V1_H

#include <QMainWindow>
#include <celular.h>
#include <login.h>
#include <formulariocliente.h>
namespace Ui {
class Tienda_v1;
}

class Tienda_v1 : public QMainWindow
{
    Q_OBJECT

public:
    explicit Tienda_v1(QWidget *parent = nullptr);
    ~Tienda_v1();

private slots:
    void on_actionNueva_orden_triggered();

    void on_actionNuevo_Cliente_triggered();

private:
    Ui::Tienda_v1 *ui;
    logIn* logInBro;
    formularioCliente* formulario;
};

#endif // TIENDA_V1_H
