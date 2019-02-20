#ifndef ADMINWINDOW_H
#define ADMINWINDOW_H

#include <QMainWindow>
#include <administrador.h>
#include <QMessageBox>
#include <QPixmap>
#include <store.h>
#include <storesonata.h>
#include <storeponiente.h>
#include <storeange.h>
#include <grafo.h>
#include <ubiserdan.h>
#include <QInputDialog>

namespace Ui {
class AdminWindow;
}

class AdminWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit AdminWindow(QWidget *parent = nullptr);
    ~AdminWindow();

private slots:
    void on_boton_celSanAndres_clicked();

    void on_boton_celSonata_clicked();

    void on_boton_celPoniente_clicked();

    void on_boton_celAnge_clicked();

    void on_boton_celSerdan_clicked();

    void on_boton_carritoSanAndres_clicked();

    void on_boton_infoSanAndres_clicked();

    void on_boton_infoSonata_clicked();

    void on_boton_infoPoniente_clicked();

    void on_boton_infoAnge_clicked();

    void on_boton_infoSerdan_clicked();

    void on_boton_carritoSonata_clicked();

    void on_boton_carritoPoniente_clicked();

    void on_boton_carritoAnge_clicked();

    void on_boton_carritoSerdan_clicked();

private:
    QHash<QString, celular> celulares;
    QHash<QString, sucursal> sucursales;
    QSqlQuery globalQuery;
    QPixmap celImg;
    QString clientID, clientName, clientLastName, clientCalle;
    Cliente currentClient;
    Ui::AdminWindow *ui;
    storePoniente * ubPoniente;
    ubiSerdan * ubSerdan;
    Cliente clientEnLinea;
    Store * ubSanAndres;
    storeAnge * ubAnge;
    Grafo graph;
    storeSonata * ubSonata;
    administrador admin;
    QSqlDatabase db;
    QString plantillaDeRecibo1, plantillaDeRecibo2, carpeta;
    void resetLabels();
};


#endif // ADMINWINDOW_H
