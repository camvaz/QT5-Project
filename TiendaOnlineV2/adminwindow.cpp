#include "adminwindow.h"
#include "ui_adminwindow.h"
#include <QPixmap>
#include <QtMath>
AdminWindow::AdminWindow(QWidget *parent) :

    QMainWindow(parent),
    ui(new Ui::AdminWindow)
{
    ui->setupUi(this);
    setWindowTitle("Tienda");
    db = QSqlDatabase::database();
    admin.fillContainers();
//    ui->stateLabel->setText("Bienvenido " + currentClient.getName() + ". We got cellphones nd shit bro");
//    ui->statusbar->addPermanentWidget(ui->stateLabel);
    celImg.load(":/celulares/img/celulares/GooglePixel3.jpg");

    bool ok;
    clientID = QInputDialog::getText(this, "Inroduzca ID", "Por favor, introduzca ID de nuevo:", QLineEdit::Normal, "" ,&ok);


    plantillaDeRecibo1 = "------------------------SMARTPHONE ONLINE STORE---------------------------\nCONCEPTO:\n";
    plantillaDeRecibo2 = "\n\tCOMPRA EFECTUADA DESDE SMARTPHONE ONLINE STORE VERSION DE ESCRITORIO\n"
                         "\tTODOS LOS DERECHOS RESERVADOS. HECHO EN Qt CREATOR VERSION 5.11.1.\n"
                         "SOFTWARE REALIZADO POR:\n\tVICTOR MANUEL CAMPOS VAZQUEZ.\n"
                         "------------------------GRACIAS POR SU COMPRA-------------------------------";
    carpeta = "C:/Users/CamVaz/Desktop/Otoño 2018/POO II/ProyectoFinal/Recibos/";


    sucursales = admin.getSucursales();
    celulares = admin.getCelulares();
    QHash<QString, solicitudCompra> solicitudes = admin.getSolicitudes();
    QHash<QString, compra> compras = admin.getCompras();
    QHash<QString, documento> documentos = admin.getDocumentos();
    QHash<QString, Cliente> clientes = admin.getClientes();

    QHash<QString, Cliente>::iterator clientIter;

    clientIter = clientes.find(clientID);

    clientEnLinea = clientIter.value();

    clientName = clientEnLinea.getName();
    clientLastName = clientEnLinea.getLastName();
    clientCalle = clientEnLinea.getDireccion();

    ui->stateLabel->setText("Bienvenido " + clientName + " " +clientLastName + ". We got cellphones.");

    ui->statusbar->addPermanentWidget(ui->stateLabel);
    int calleInt = clientCalle.toInt();

    graph.Lee( 6, 6, calleInt);


    sucursal sanAndres = sucursales["idSuc1"];
    sucursal sonata = sucursales["idSuc2"];
    sucursal pte = sucursales["idSuc3"];
    sucursal serdan = sucursales["idSuc4"];
    sucursal ange = sucursales["idSuc5"];

//    QHash<QString,celular>::iterator celtemp;
//    celular celtemporal;

//    celtemp = celulares.find("idXR");
//    QString zeze = celtemp.value().getAtributo(0);
//    qDebug() << zeze;
//    ui->label_nombre->setText(zeze);

    QHash<QString,celular>::iterator celtemp;
    celular celtemporal;

    for(int i=0; i < sanAndres.getCantidadModelos(); i++)
    {
        if(sanAndres.Modelos[i] == "idLG")
        {
            celtemp = celulares.find("idLG");
            celtemporal = celtemp.value();
            ui->list_SanAndres->addItem(new QListWidgetItem(QIcon(celtemporal.getAtributo(10)), celtemporal.getAtributo(0)));
        }
        if(sanAndres.Modelos[i] == "idMoto")
        {
            celtemp = celulares.find("idMoto");
            celtemporal = celtemp.value();
            ui->list_SanAndres->addItem(new QListWidgetItem(QIcon(celtemporal.getAtributo(10)), celtemporal.getAtributo(0)));
        }
        if(sanAndres.Modelos[i] == "idOne")
        {
            celtemp = celulares.find("idOne");
            celtemporal = celtemp.value();
            ui->list_SanAndres->addItem(new QListWidgetItem(QIcon(celtemporal.getAtributo(10)), celtemporal.getAtributo(0)));
        }
        if(sanAndres.Modelos[i] == "idPix3")
        {
            celtemp = celulares.find("idPix3");
            celtemporal = celtemp.value();
            ui->list_SanAndres->addItem(new QListWidgetItem(QIcon(celtemporal.getAtributo(10)), celtemporal.getAtributo(0)));
        }
        if(sanAndres.Modelos[i] == "idSsg")
        {
            celtemp = celulares.find("idSsg");
            celtemporal = celtemp.value();
            ui->list_SanAndres->addItem(new QListWidgetItem(QIcon(celtemporal.getAtributo(10)), celtemporal.getAtributo(0)));
        }
        if(sanAndres.Modelos[i] == "idXR")
        {
            celtemp = celulares.find("idXR");
            celtemporal = celtemp.value();
            ui->list_SanAndres->addItem(new QListWidgetItem(QIcon(celtemporal.getAtributo(10)), celtemporal.getAtributo(0)));
        }
        if(sanAndres.Modelos[i] == "idXS")
        {
            celtemp = celulares.find("idXS");
            celtemporal = celtemp.value();
            ui->list_SanAndres->addItem(new QListWidgetItem(QIcon(celtemporal.getAtributo(10)), celtemporal.getAtributo(0)));
        }
    }

    for(int i=0; i < pte.getCantidadModelos(); i++)
    {
        if(pte.Modelos[i] == "idLG")
        {
            celtemp = celulares.find("idLG");
            celtemporal = celtemp.value();
            ui->list_poniente->addItem(new QListWidgetItem(QIcon(celtemporal.getAtributo(10)), celtemporal.getAtributo(0)));
        }
        if(pte.Modelos[i] == "idMoto")
        {
            celtemp = celulares.find("idMoto");
            celtemporal = celtemp.value();
            ui->list_poniente->addItem(new QListWidgetItem(QIcon(celtemporal.getAtributo(10)), celtemporal.getAtributo(0)));
        }
        if(pte.Modelos[i] == "idOne")
        {
            celtemp = celulares.find("idOne");
            celtemporal = celtemp.value();
            ui->list_poniente->addItem(new QListWidgetItem(QIcon(celtemporal.getAtributo(10)), celtemporal.getAtributo(0)));
        }
        if(pte.Modelos[i] == "idPix3")
        {
            celtemp = celulares.find("idPix3");
            celtemporal = celtemp.value();
            ui->list_poniente->addItem(new QListWidgetItem(QIcon(celtemporal.getAtributo(10)), celtemporal.getAtributo(0)));
        }
        if(pte.Modelos[i] == "idSsg")
        {
            celtemp = celulares.find("idSsg");
            celtemporal = celtemp.value();
            ui->list_poniente->addItem(new QListWidgetItem(QIcon(celtemporal.getAtributo(10)), celtemporal.getAtributo(0)));
        }
        if(pte.Modelos[i] == "idXR")
        {
            celtemp = celulares.find("idXR");
            celtemporal = celtemp.value();
            ui->list_poniente->addItem(new QListWidgetItem(QIcon(celtemporal.getAtributo(10)), celtemporal.getAtributo(0)));
        }
        if(pte.Modelos[i] == "idXS")
        {
            celtemp = celulares.find("idXS");
            celtemporal = celtemp.value();
            ui->list_poniente->addItem(new QListWidgetItem(QIcon(celtemporal.getAtributo(10)), celtemporal.getAtributo(0)));
        }
    }

    for(int i=0; i < serdan.getCantidadModelos(); i++)
    {
        if(serdan.Modelos[i] == "idLG")
        {
            celtemp = celulares.find("idLG");
            celtemporal = celtemp.value();
            ui->list_Serdan->addItem(new QListWidgetItem(QIcon(celtemporal.getAtributo(10)), celtemporal.getAtributo(0)));
        }
        if(serdan.Modelos[i] == "idMoto")
        {
            celtemp = celulares.find("idMoto");
            celtemporal = celtemp.value();
            ui->list_Serdan->addItem(new QListWidgetItem(QIcon(celtemporal.getAtributo(10)), celtemporal.getAtributo(0)));
        }
        if(serdan.Modelos[i] == "idOne")
        {
            celtemp = celulares.find("idOne");
            celtemporal = celtemp.value();
            ui->list_Serdan->addItem(new QListWidgetItem(QIcon(celtemporal.getAtributo(10)), celtemporal.getAtributo(0)));
        }
        if(serdan.Modelos[i] == "idPix3")
        {
            celtemp = celulares.find("idPix3");
            celtemporal = celtemp.value();
            ui->list_Serdan->addItem(new QListWidgetItem(QIcon(celtemporal.getAtributo(10)), celtemporal.getAtributo(0)));
        }
        if(serdan.Modelos[i] == "idSsg")
        {
            celtemp = celulares.find("idSsg");
            celtemporal = celtemp.value();
            ui->list_Serdan->addItem(new QListWidgetItem(QIcon(celtemporal.getAtributo(10)), celtemporal.getAtributo(0)));
        }
        if(serdan.Modelos[i] == "idXR")
        {
            celtemp = celulares.find("idXR");
            celtemporal = celtemp.value();
            ui->list_Serdan->addItem(new QListWidgetItem(QIcon(celtemporal.getAtributo(10)), celtemporal.getAtributo(0)));
        }
        if(serdan.Modelos[i] == "idXS")
        {
            celtemp = celulares.find("idXS");
            celtemporal = celtemp.value();
            ui->list_Serdan->addItem(new QListWidgetItem(QIcon(celtemporal.getAtributo(10)), celtemporal.getAtributo(0)));
        }
    }

    for(int i=0; i < sonata.getCantidadModelos(); i++)
    {
        if(sonata.Modelos[i] == "idLG")
        {
            celtemp = celulares.find("idLG");
            celtemporal = celtemp.value();
            ui->list_sonata->addItem(new QListWidgetItem(QIcon(celtemporal.getAtributo(10)), celtemporal.getAtributo(0)));
        }
        if(sonata.Modelos[i] == "idMoto")
        {
            celtemp = celulares.find("idMoto");
            celtemporal = celtemp.value();
            ui->list_sonata->addItem(new QListWidgetItem(QIcon(celtemporal.getAtributo(10)), celtemporal.getAtributo(0)));
        }
        if(sonata.Modelos[i] == "idOne")
        {
            celtemp = celulares.find("idOne");
            celtemporal = celtemp.value();
            ui->list_sonata->addItem(new QListWidgetItem(QIcon(celtemporal.getAtributo(10)), celtemporal.getAtributo(0)));
        }
        if(sonata.Modelos[i] == "idPix3")
        {
            celtemp = celulares.find("idPix3");
            celtemporal = celtemp.value();
            ui->list_sonata->addItem(new QListWidgetItem(QIcon(celtemporal.getAtributo(10)), celtemporal.getAtributo(0)));
        }
        if(sonata.Modelos[i] == "idSsg")
        {
            celtemp = celulares.find("idSsg");
            celtemporal = celtemp.value();
            ui->list_sonata->addItem(new QListWidgetItem(QIcon(celtemporal.getAtributo(10)), celtemporal.getAtributo(0)));
        }
        if(sonata.Modelos[i] == "idXR")
        {
            celtemp = celulares.find("idXR");
            celtemporal = celtemp.value();
            ui->list_sonata->addItem(new QListWidgetItem(QIcon(celtemporal.getAtributo(10)), celtemporal.getAtributo(0)));
        }
        if(sonata.Modelos[i] == "idXS")
        {
            celtemp = celulares.find("idXS");
            celtemporal = celtemp.value();
            ui->list_sonata->addItem(new QListWidgetItem(QIcon(celtemporal.getAtributo(10)), celtemporal.getAtributo(0)));
        }
    }

    for(int i=0; i < ange.getCantidadModelos(); i++)
    {
        if(ange.Modelos[i] == "idLG")
        {
            celtemp = celulares.find("idLG");
            celtemporal = celtemp.value();
            ui->list_ange->addItem(new QListWidgetItem(QIcon(celtemporal.getAtributo(10)), celtemporal.getAtributo(0)));
        }
        if(ange.Modelos[i] == "idMoto")
        {
            celtemp = celulares.find("idMoto");
            celtemporal = celtemp.value();
            ui->list_ange->addItem(new QListWidgetItem(QIcon(celtemporal.getAtributo(10)), celtemporal.getAtributo(0)));
        }
        if(ange.Modelos[i] == "idOne")
        {
            celtemp = celulares.find("idOne");
            celtemporal = celtemp.value();
            ui->list_ange->addItem(new QListWidgetItem(QIcon(celtemporal.getAtributo(10)), celtemporal.getAtributo(0)));
        }
        if(ange.Modelos[i] == "idPix3")
        {
            celtemp = celulares.find("idPix3");
            celtemporal = celtemp.value();
            ui->list_ange->addItem(new QListWidgetItem(QIcon(celtemporal.getAtributo(10)), celtemporal.getAtributo(0)));
        }
        if(ange.Modelos[i] == "idSsg")
        {
            celtemp = celulares.find("idSsg");
            celtemporal = celtemp.value();
            ui->list_ange->addItem(new QListWidgetItem(QIcon(celtemporal.getAtributo(10)), celtemporal.getAtributo(0)));
        }
        if(ange.Modelos[i] == "idXR")
        {
            celtemp = celulares.find("idXR");
            celtemporal = celtemp.value();
            ui->list_ange->addItem(new QListWidgetItem(QIcon(celtemporal.getAtributo(10)), celtemporal.getAtributo(0)));
        }
        if(ange.Modelos[i] == "idXS")
        {
            celtemp = celulares.find("idXS");
            celtemporal = celtemp.value();
            ui->list_ange->addItem(new QListWidgetItem(QIcon(celtemporal.getAtributo(10)), celtemporal.getAtributo(0)));
        }
    }
}

AdminWindow::~AdminWindow()
{
    delete ui;
}

void AdminWindow::resetLabels()
{
    ui->label_nombre->setText("Nombre:");
    ui->label_cam->setText("Camara:");
    ui->label_carga->setText("Tiempo de carga:");
    ui->label_dimensiones->setText("Dimensiones:");
    ui->label_memoria->setText("Almacenamiento:");
    ui->label_os->setText("OS:");
    ui->label_pantalla->setText("Pantalla:");
    ui->label_peso->setText("Peso:");
    ui->label_resolucion->setText("Resolucion:");
    ui->label_tec->setText("Tecnologia:");
    ui->label_stock->setText("STOCK:");
    ui->label_precio->setText("Precio:");
}

void AdminWindow::on_boton_celSanAndres_clicked()
{
    QHash<QString, celular>::iterator i;
    celular celtemp;

    if(ui->list_SanAndres->currentItem()->text() == "LG V40")
    {
        resetLabels();
        i = celulares.find("idLG");
        celtemp = i.value();
        ui->label_nombre->setText(ui->label_nombre->text()+ " " +celtemp.getAtributo(0));
        ui->label_cam->setText(ui->label_cam->text() + " " + celtemp.getAtributo(1));
        ui->label_carga->setText(ui->label_carga->text() + " " + celtemp.getAtributo(2));
        ui->label_dimensiones->setText(ui->label_dimensiones->text() + " " + celtemp.getAtributo(3));
        ui->label_memoria->setText(ui->label_memoria->text() + " " + celtemp.getAtributo(4));
        ui->label_os->setText(ui->label_os->text() + " " + celtemp.getAtributo(5));
        ui->label_pantalla->setText(ui->label_pantalla->text() + " " + celtemp.getAtributo(6));
        ui->label_peso->setText(ui->label_peso->text() + " " + celtemp.getAtributo(7));
        ui->label_resolucion->setText(ui->label_resolucion->text() + " " + celtemp.getAtributo(8));
        ui->label_tec->setText(ui->label_tec->text() + " " +celtemp.getAtributo(9));

        globalQuery.exec("SELECT cardinalidadCelular FROM sucursal_has_celulares WHERE Sucursal_idSucursal = 'idSuc1' AND Celulares_idCelulares = 'idLG'");
        if(globalQuery.size()>0)
        {
            globalQuery.first();
            ui->label_stock->setText(ui->label_stock->text() + " " +QString::number(globalQuery.value(0).toInt()));
        }
        else
            ui->label_stock->setText(ui->label_stock->text() + " 0");

        ui->label_precio->setText(ui->label_precio->text()+" $10000");

        celImg.load(celtemp.getAtributo(10));
        ui->label_pic->setPixmap( celImg.scaled(ui->label_pic->width(), ui->label_pic->height(), Qt::KeepAspectRatio));
    }

    if(ui->list_SanAndres->currentItem()->text() == "Moto G6")
    {
        resetLabels();
        i = celulares.find("idMoto");
        celtemp = i.value();
        ui->label_nombre->setText(ui->label_nombre->text()+ " " +celtemp.getAtributo(0));
        ui->label_cam->setText(ui->label_cam->text() + " " + celtemp.getAtributo(1));
        ui->label_carga->setText(ui->label_carga->text() + " " + celtemp.getAtributo(2));
        ui->label_dimensiones->setText(ui->label_dimensiones->text() + " " + celtemp.getAtributo(3));
        ui->label_memoria->setText(ui->label_memoria->text() + " " + celtemp.getAtributo(4));
        ui->label_os->setText(ui->label_os->text() + " " + celtemp.getAtributo(5));
        ui->label_pantalla->setText(ui->label_pantalla->text() + " " + celtemp.getAtributo(6));
        ui->label_peso->setText(ui->label_peso->text() + " " + celtemp.getAtributo(7));
        ui->label_resolucion->setText(ui->label_resolucion->text() + " " + celtemp.getAtributo(8));
        ui->label_tec->setText(ui->label_tec->text() + " " +celtemp.getAtributo(9));

        globalQuery.exec("SELECT cardinalidadCelular FROM sucursal_has_celulares WHERE Sucursal_idSucursal = 'idSuc1' AND Celulares_idCelulares = 'idMoto'");
        if(globalQuery.size()>0)
        {
            globalQuery.first();
            ui->label_stock->setText(ui->label_stock->text() + " " +QString::number(globalQuery.value(0).toInt()));
        }
        else
            ui->label_stock->setText(ui->label_stock->text() + " 0");

        ui->label_precio->setText(ui->label_precio->text()+" $11000");

        celImg.load(celtemp.getAtributo(10));
        ui->label_pic->setPixmap( celImg.scaled(ui->label_pic->width(), ui->label_pic->height(), Qt::KeepAspectRatio));
    }

    if(ui->list_SanAndres->currentItem()->text() == "One Plus 6T")
    {
        resetLabels();
        i = celulares.find("idOne");
        celtemp = i.value();
        ui->label_nombre->setText(ui->label_nombre->text()+ " " +celtemp.getAtributo(0));
        ui->label_cam->setText(ui->label_cam->text() + " " + celtemp.getAtributo(1));
        ui->label_carga->setText(ui->label_carga->text() + " " + celtemp.getAtributo(2));
        ui->label_dimensiones->setText(ui->label_dimensiones->text() + " " + celtemp.getAtributo(3));
        ui->label_memoria->setText(ui->label_memoria->text() + " " + celtemp.getAtributo(4));
        ui->label_os->setText(ui->label_os->text() + " " + celtemp.getAtributo(5));
        ui->label_pantalla->setText(ui->label_pantalla->text() + " " + celtemp.getAtributo(6));
        ui->label_peso->setText(ui->label_peso->text() + " " + celtemp.getAtributo(7));
        ui->label_resolucion->setText(ui->label_resolucion->text() + " " + celtemp.getAtributo(8));
        ui->label_tec->setText(ui->label_tec->text() + " " +celtemp.getAtributo(9));

        globalQuery.exec("SELECT cardinalidadCelular FROM sucursal_has_celulares WHERE Sucursal_idSucursal = 'idSuc1' AND Celulares_idCelulares = 'idOne'");
        if(globalQuery.size()>0)
        {
            globalQuery.first();
            ui->label_stock->setText(ui->label_stock->text() + " " +QString::number(globalQuery.value(0).toInt()));
        }
        else
            ui->label_stock->setText(ui->label_stock->text() + " 0");

        ui->label_precio->setText(ui->label_precio->text()+" $14000");

        celImg.load(celtemp.getAtributo(10));
        ui->label_pic->setPixmap( celImg.scaled(ui->label_pic->width(), ui->label_pic->height(), Qt::KeepAspectRatio));
    }

    if(ui->list_SanAndres->currentItem()->text() == "Google Pixel 3")
    {
        resetLabels();
        i = celulares.find("idPix3");
        celtemp = i.value();
        ui->label_nombre->setText(ui->label_nombre->text()+ " " +celtemp.getAtributo(0));
        ui->label_cam->setText(ui->label_cam->text() + " " + celtemp.getAtributo(1));
        ui->label_carga->setText(ui->label_carga->text() + " " + celtemp.getAtributo(2));
        ui->label_dimensiones->setText(ui->label_dimensiones->text() + " " + celtemp.getAtributo(3));
        ui->label_memoria->setText(ui->label_memoria->text() + " " + celtemp.getAtributo(4));
        ui->label_os->setText(ui->label_os->text() + " " + celtemp.getAtributo(5));
        ui->label_pantalla->setText(ui->label_pantalla->text() + " " + celtemp.getAtributo(6));
        ui->label_peso->setText(ui->label_peso->text() + " " + celtemp.getAtributo(7));
        ui->label_resolucion->setText(ui->label_resolucion->text() + " " + celtemp.getAtributo(8));
        ui->label_tec->setText(ui->label_tec->text() + " " +celtemp.getAtributo(9));

        globalQuery.exec("SELECT cardinalidadCelular FROM sucursal_has_celulares WHERE Sucursal_idSucursal = 'idSuc1' AND Celulares_idCelulares = 'idPix3'");
        if(globalQuery.size()>0)
        {
            globalQuery.first();
            ui->label_stock->setText(ui->label_stock->text() + " " +QString::number(globalQuery.value(0).toInt()));
        }
        else
            ui->label_stock->setText(ui->label_stock->text() + " 0");

        ui->label_precio->setText(ui->label_precio->text()+" $16000");

        celImg.load(celtemp.getAtributo(10));
        ui->label_pic->setPixmap( celImg.scaled(ui->label_pic->width(), ui->label_pic->height(), Qt::KeepAspectRatio));
    }

    if(ui->list_SanAndres->currentItem()->text() == "Samsung Galaxy Note 9")
    {
        resetLabels();
        i = celulares.find("idSsg");
        celtemp = i.value();
        ui->label_nombre->setText(ui->label_nombre->text()+ " " +celtemp.getAtributo(0));
        ui->label_cam->setText(ui->label_cam->text() + " " + celtemp.getAtributo(1));
        ui->label_carga->setText(ui->label_carga->text() + " " + celtemp.getAtributo(2));
        ui->label_dimensiones->setText(ui->label_dimensiones->text() + " " + celtemp.getAtributo(3));
        ui->label_memoria->setText(ui->label_memoria->text() + " " + celtemp.getAtributo(4));
        ui->label_os->setText(ui->label_os->text() + " " + celtemp.getAtributo(5));
        ui->label_pantalla->setText(ui->label_pantalla->text() + " " + celtemp.getAtributo(6));
        ui->label_peso->setText(ui->label_peso->text() + " " + celtemp.getAtributo(7));
        ui->label_resolucion->setText(ui->label_resolucion->text() + " " + celtemp.getAtributo(8));
        ui->label_tec->setText(ui->label_tec->text() + " " +celtemp.getAtributo(9));

        globalQuery.exec("SELECT cardinalidadCelular FROM sucursal_has_celulares WHERE Sucursal_idSucursal = 'idSuc1' AND Celulares_idCelulares = 'idSsg'");
        if(globalQuery.size()>0)
        {
            globalQuery.first();
            ui->label_stock->setText(ui->label_stock->text() + " " +QString::number(globalQuery.value(0).toInt()));
        }
        else
            ui->label_stock->setText(ui->label_stock->text() + " 0");

        ui->label_precio->setText(ui->label_precio->text()+" $16000");

        celImg.load(celtemp.getAtributo(10));
        ui->label_pic->setPixmap( celImg.scaled(ui->label_pic->width(), ui->label_pic->height(), Qt::KeepAspectRatio));
    }

    if(ui->list_SanAndres->currentItem()->text() == "iPhone XR")
    {
        resetLabels();
        i = celulares.find("idXR");
        celtemp = i.value();
        ui->label_nombre->setText(ui->label_nombre->text()+ " " +celtemp.getAtributo(0));
        ui->label_cam->setText(ui->label_cam->text() + " " + celtemp.getAtributo(1));
        ui->label_carga->setText(ui->label_carga->text() + " " + celtemp.getAtributo(2));
        ui->label_dimensiones->setText(ui->label_dimensiones->text() + " " + celtemp.getAtributo(3));
        ui->label_memoria->setText(ui->label_memoria->text() + " " + celtemp.getAtributo(4));
        ui->label_os->setText(ui->label_os->text() + " " + celtemp.getAtributo(5));
        ui->label_pantalla->setText(ui->label_pantalla->text() + " " + celtemp.getAtributo(6));
        ui->label_peso->setText(ui->label_peso->text() + " " + celtemp.getAtributo(7));
        ui->label_resolucion->setText(ui->label_resolucion->text() + " " + celtemp.getAtributo(8));
        ui->label_tec->setText(ui->label_tec->text() + " " +celtemp.getAtributo(9));

        globalQuery.exec("SELECT cardinalidadCelular FROM sucursal_has_celulares WHERE Sucursal_idSucursal = 'idSuc1' AND Celulares_idCelulares = 'idXR'");
        if(globalQuery.size()>0)
        {
            globalQuery.first();
            ui->label_stock->setText(ui->label_stock->text() + " " +QString::number(globalQuery.value(0).toInt()));
        }
        else
            ui->label_stock->setText(ui->label_stock->text() + " 0");

        ui->label_precio->setText(ui->label_precio->text()+" $20000");

        celImg.load(celtemp.getAtributo(10));
        ui->label_pic->setPixmap( celImg.scaled(ui->label_pic->width(), ui->label_pic->height(), Qt::KeepAspectRatio));
    }

    if(ui->list_SanAndres->currentItem()->text() == "iPhoneXS")
    {
        resetLabels();
        i = celulares.find("idXS");
        celtemp = i.value();
        ui->label_nombre->setText(ui->label_nombre->text()+ " " +celtemp.getAtributo(0));
        ui->label_cam->setText(ui->label_cam->text() + " " + celtemp.getAtributo(1));
        ui->label_carga->setText(ui->label_carga->text() + " " + celtemp.getAtributo(2));
        ui->label_dimensiones->setText(ui->label_dimensiones->text() + " " + celtemp.getAtributo(3));
        ui->label_memoria->setText(ui->label_memoria->text() + " " + celtemp.getAtributo(4));
        ui->label_os->setText(ui->label_os->text() + " " + celtemp.getAtributo(5));
        ui->label_pantalla->setText(ui->label_pantalla->text() + " " + celtemp.getAtributo(6));
        ui->label_peso->setText(ui->label_peso->text() + " " + celtemp.getAtributo(7));
        ui->label_resolucion->setText(ui->label_resolucion->text() + " " + celtemp.getAtributo(8));
        ui->label_tec->setText(ui->label_tec->text() + " " +celtemp.getAtributo(9));

        globalQuery.exec("SELECT cardinalidadCelular FROM sucursal_has_celulares WHERE Sucursal_idSucursal = 'idSuc1' AND Celulares_idCelulares = 'idXS'");
        if(globalQuery.size()>0)
        {
            globalQuery.first();
            ui->label_stock->setText(ui->label_stock->text() + " " +QString::number(globalQuery.value(0).toInt()));
        }
        else
            ui->label_stock->setText(ui->label_stock->text() + " 0");

        ui->label_precio->setText(ui->label_precio->text()+" $21000");

        celImg.load(celtemp.getAtributo(10));
        ui->label_pic->setPixmap( celImg.scaled(ui->label_pic->width(), ui->label_pic->height(), Qt::KeepAspectRatio));
    }
}



void AdminWindow::on_boton_celSonata_clicked()
{
    QHash<QString, celular>::iterator i;
    celular celtemp;

    if(ui->list_sonata->currentItem()->text() == "LG V40")
    {
        resetLabels();
        i = celulares.find("idLG");
        celtemp = i.value();
        ui->label_nombre->setText(ui->label_nombre->text()+ " " +celtemp.getAtributo(0));
        ui->label_cam->setText(ui->label_cam->text() + " " + celtemp.getAtributo(1));
        ui->label_carga->setText(ui->label_carga->text() + " " + celtemp.getAtributo(2));
        ui->label_dimensiones->setText(ui->label_dimensiones->text() + " " + celtemp.getAtributo(3));
        ui->label_memoria->setText(ui->label_memoria->text() + " " + celtemp.getAtributo(4));
        ui->label_os->setText(ui->label_os->text() + " " + celtemp.getAtributo(5));
        ui->label_pantalla->setText(ui->label_pantalla->text() + " " + celtemp.getAtributo(6));
        ui->label_peso->setText(ui->label_peso->text() + " " + celtemp.getAtributo(7));
        ui->label_resolucion->setText(ui->label_resolucion->text() + " " + celtemp.getAtributo(8));
        ui->label_tec->setText(ui->label_tec->text() + " " +celtemp.getAtributo(9));

        globalQuery.exec("SELECT cardinalidadCelular FROM sucursal_has_celulares WHERE Sucursal_idSucursal = 'idSuc2' AND Celulares_idCelulares = 'idLG'");
        if(globalQuery.size()>0)
        {
            globalQuery.first();
            ui->label_stock->setText(ui->label_stock->text() + " " +QString::number(globalQuery.value(0).toInt()));
        }
        else
            ui->label_stock->setText(ui->label_stock->text() + " 0");

        ui->label_precio->setText(ui->label_precio->text()+" $10000");

        celImg.load(celtemp.getAtributo(10));
        ui->label_pic->setPixmap( celImg.scaled(ui->label_pic->width(), ui->label_pic->height(), Qt::KeepAspectRatio));
    }

    if(ui->list_sonata->currentItem()->text() == "Moto G6")
    {
        resetLabels();
        i = celulares.find("idMoto");
        celtemp = i.value();
        ui->label_nombre->setText(ui->label_nombre->text()+ " " +celtemp.getAtributo(0));
        ui->label_cam->setText(ui->label_cam->text() + " " + celtemp.getAtributo(1));
        ui->label_carga->setText(ui->label_carga->text() + " " + celtemp.getAtributo(2));
        ui->label_dimensiones->setText(ui->label_dimensiones->text() + " " + celtemp.getAtributo(3));
        ui->label_memoria->setText(ui->label_memoria->text() + " " + celtemp.getAtributo(4));
        ui->label_os->setText(ui->label_os->text() + " " + celtemp.getAtributo(5));
        ui->label_pantalla->setText(ui->label_pantalla->text() + " " + celtemp.getAtributo(6));
        ui->label_peso->setText(ui->label_peso->text() + " " + celtemp.getAtributo(7));
        ui->label_resolucion->setText(ui->label_resolucion->text() + " " + celtemp.getAtributo(8));
        ui->label_tec->setText(ui->label_tec->text() + " " +celtemp.getAtributo(9));

        globalQuery.exec("SELECT cardinalidadCelular FROM sucursal_has_celulares WHERE Sucursal_idSucursal = 'idSuc2' AND Celulares_idCelulares = 'idMoto'");
        if(globalQuery.size()>0)
        {
            globalQuery.first();
            ui->label_stock->setText(ui->label_stock->text() + " " +QString::number(globalQuery.value(0).toInt()));
        }
        else
            ui->label_stock->setText(ui->label_stock->text() + " 0");

        ui->label_precio->setText(ui->label_precio->text()+" $11000");

        celImg.load(celtemp.getAtributo(10));
        ui->label_pic->setPixmap( celImg.scaled(ui->label_pic->width(), ui->label_pic->height(), Qt::KeepAspectRatio));
    }

    if(ui->list_sonata->currentItem()->text() == "One Plus 6T")
    {
        resetLabels();
        i = celulares.find("idOne");
        celtemp = i.value();
        ui->label_nombre->setText(ui->label_nombre->text()+ " " +celtemp.getAtributo(0));
        ui->label_cam->setText(ui->label_cam->text() + " " + celtemp.getAtributo(1));
        ui->label_carga->setText(ui->label_carga->text() + " " + celtemp.getAtributo(2));
        ui->label_dimensiones->setText(ui->label_dimensiones->text() + " " + celtemp.getAtributo(3));
        ui->label_memoria->setText(ui->label_memoria->text() + " " + celtemp.getAtributo(4));
        ui->label_os->setText(ui->label_os->text() + " " + celtemp.getAtributo(5));
        ui->label_pantalla->setText(ui->label_pantalla->text() + " " + celtemp.getAtributo(6));
        ui->label_peso->setText(ui->label_peso->text() + " " + celtemp.getAtributo(7));
        ui->label_resolucion->setText(ui->label_resolucion->text() + " " + celtemp.getAtributo(8));
        ui->label_tec->setText(ui->label_tec->text() + " " +celtemp.getAtributo(9));

        globalQuery.exec("SELECT cardinalidadCelular FROM sucursal_has_celulares WHERE Sucursal_idSucursal = 'idSuc2' AND Celulares_idCelulares = 'idOne'");
        if(globalQuery.size()>0)
        {
            globalQuery.first();
            ui->label_stock->setText(ui->label_stock->text() + " " +QString::number(globalQuery.value(0).toInt()));
        }
        else
            ui->label_stock->setText(ui->label_stock->text() + " 0");

        ui->label_precio->setText(ui->label_precio->text()+" $14000");

        celImg.load(celtemp.getAtributo(10));
        ui->label_pic->setPixmap( celImg.scaled(ui->label_pic->width(), ui->label_pic->height(), Qt::KeepAspectRatio));
    }

    if(ui->list_sonata->currentItem()->text() == "Google Pixel 3")
    {
        resetLabels();
        i = celulares.find("idPix3");
        celtemp = i.value();
        ui->label_nombre->setText(ui->label_nombre->text()+ " " +celtemp.getAtributo(0));
        ui->label_cam->setText(ui->label_cam->text() + " " + celtemp.getAtributo(1));
        ui->label_carga->setText(ui->label_carga->text() + " " + celtemp.getAtributo(2));
        ui->label_dimensiones->setText(ui->label_dimensiones->text() + " " + celtemp.getAtributo(3));
        ui->label_memoria->setText(ui->label_memoria->text() + " " + celtemp.getAtributo(4));
        ui->label_os->setText(ui->label_os->text() + " " + celtemp.getAtributo(5));
        ui->label_pantalla->setText(ui->label_pantalla->text() + " " + celtemp.getAtributo(6));
        ui->label_peso->setText(ui->label_peso->text() + " " + celtemp.getAtributo(7));
        ui->label_resolucion->setText(ui->label_resolucion->text() + " " + celtemp.getAtributo(8));
        ui->label_tec->setText(ui->label_tec->text() + " " +celtemp.getAtributo(9));

        globalQuery.exec("SELECT cardinalidadCelular FROM sucursal_has_celulares WHERE Sucursal_idSucursal = 'idSuc2' AND Celulares_idCelulares = 'idPix3'");
        if(globalQuery.size()>0)
        {
            globalQuery.first();
            ui->label_stock->setText(ui->label_stock->text() + " " +QString::number(globalQuery.value(0).toInt()));
        }
        else
            ui->label_stock->setText(ui->label_stock->text() + " 0");

        ui->label_precio->setText(ui->label_precio->text()+" $16000");

        celImg.load(celtemp.getAtributo(10));
        ui->label_pic->setPixmap( celImg.scaled(ui->label_pic->width(), ui->label_pic->height(), Qt::KeepAspectRatio));
    }

    if(ui->list_sonata->currentItem()->text() == "Samsung Galaxy Note 9")
    {
        resetLabels();
        i = celulares.find("idSsg");
        celtemp = i.value();
        ui->label_nombre->setText(ui->label_nombre->text()+ " " +celtemp.getAtributo(0));
        ui->label_cam->setText(ui->label_cam->text() + " " + celtemp.getAtributo(1));
        ui->label_carga->setText(ui->label_carga->text() + " " + celtemp.getAtributo(2));
        ui->label_dimensiones->setText(ui->label_dimensiones->text() + " " + celtemp.getAtributo(3));
        ui->label_memoria->setText(ui->label_memoria->text() + " " + celtemp.getAtributo(4));
        ui->label_os->setText(ui->label_os->text() + " " + celtemp.getAtributo(5));
        ui->label_pantalla->setText(ui->label_pantalla->text() + " " + celtemp.getAtributo(6));
        ui->label_peso->setText(ui->label_peso->text() + " " + celtemp.getAtributo(7));
        ui->label_resolucion->setText(ui->label_resolucion->text() + " " + celtemp.getAtributo(8));
        ui->label_tec->setText(ui->label_tec->text() + " " +celtemp.getAtributo(9));

        globalQuery.exec("SELECT cardinalidadCelular FROM sucursal_has_celulares WHERE Sucursal_idSucursal = 'idSuc2' AND Celulares_idCelulares = 'idSsg'");
        if(globalQuery.size()>0)
        {
            globalQuery.first();
            ui->label_stock->setText(ui->label_stock->text() + " " +QString::number(globalQuery.value(0).toInt()));
        }
        else
            ui->label_stock->setText(ui->label_stock->text() + " 0");

        ui->label_precio->setText(ui->label_precio->text()+" $16000");

        celImg.load(celtemp.getAtributo(10));
        ui->label_pic->setPixmap( celImg.scaled(ui->label_pic->width(), ui->label_pic->height(), Qt::KeepAspectRatio));
    }

    if(ui->list_sonata->currentItem()->text() == "iPhone XR")
    {
        resetLabels();
        i = celulares.find("idXR");
        celtemp = i.value();
        ui->label_nombre->setText(ui->label_nombre->text()+ " " +celtemp.getAtributo(0));
        ui->label_cam->setText(ui->label_cam->text() + " " + celtemp.getAtributo(1));
        ui->label_carga->setText(ui->label_carga->text() + " " + celtemp.getAtributo(2));
        ui->label_dimensiones->setText(ui->label_dimensiones->text() + " " + celtemp.getAtributo(3));
        ui->label_memoria->setText(ui->label_memoria->text() + " " + celtemp.getAtributo(4));
        ui->label_os->setText(ui->label_os->text() + " " + celtemp.getAtributo(5));
        ui->label_pantalla->setText(ui->label_pantalla->text() + " " + celtemp.getAtributo(6));
        ui->label_peso->setText(ui->label_peso->text() + " " + celtemp.getAtributo(7));
        ui->label_resolucion->setText(ui->label_resolucion->text() + " " + celtemp.getAtributo(8));
        ui->label_tec->setText(ui->label_tec->text() + " " +celtemp.getAtributo(9));

        globalQuery.exec("SELECT cardinalidadCelular FROM sucursal_has_celulares WHERE Sucursal_idSucursal = 'idSuc2' AND Celulares_idCelulares = 'idXR'");
        if(globalQuery.size()>0)
        {
            globalQuery.first();
            ui->label_stock->setText(ui->label_stock->text() + " " +QString::number(globalQuery.value(0).toInt()));
        }
        else
            ui->label_stock->setText(ui->label_stock->text() + " 0");

        ui->label_precio->setText(ui->label_precio->text()+" $20000");

        celImg.load(celtemp.getAtributo(10));
        ui->label_pic->setPixmap( celImg.scaled(ui->label_pic->width(), ui->label_pic->height(), Qt::KeepAspectRatio));
    }

    if(ui->list_sonata->currentItem()->text() == "iPhoneXS")
    {
        resetLabels();
        i = celulares.find("idXS");
        celtemp = i.value();
        ui->label_nombre->setText(ui->label_nombre->text()+ " " +celtemp.getAtributo(0));
        ui->label_cam->setText(ui->label_cam->text() + " " + celtemp.getAtributo(1));
        ui->label_carga->setText(ui->label_carga->text() + " " + celtemp.getAtributo(2));
        ui->label_dimensiones->setText(ui->label_dimensiones->text() + " " + celtemp.getAtributo(3));
        ui->label_memoria->setText(ui->label_memoria->text() + " " + celtemp.getAtributo(4));
        ui->label_os->setText(ui->label_os->text() + " " + celtemp.getAtributo(5));
        ui->label_pantalla->setText(ui->label_pantalla->text() + " " + celtemp.getAtributo(6));
        ui->label_peso->setText(ui->label_peso->text() + " " + celtemp.getAtributo(7));
        ui->label_resolucion->setText(ui->label_resolucion->text() + " " + celtemp.getAtributo(8));
        ui->label_tec->setText(ui->label_tec->text() + " " +celtemp.getAtributo(9));

        globalQuery.exec("SELECT cardinalidadCelular FROM sucursal_has_celulares WHERE Sucursal_idSucursal = 'idSuc2' AND Celulares_idCelulares = 'idXS'");
        if(globalQuery.size()>0)
        {
            globalQuery.first();
            ui->label_stock->setText(ui->label_stock->text() + " " +QString::number(globalQuery.value(0).toInt()));
        }
        else
            ui->label_stock->setText(ui->label_stock->text() + " 0");

        ui->label_precio->setText(ui->label_precio->text()+" $21000");

        celImg.load(celtemp.getAtributo(10));
        ui->label_pic->setPixmap( celImg.scaled(ui->label_pic->width(), ui->label_pic->height(), Qt::KeepAspectRatio));
    }
}

void AdminWindow::on_boton_celPoniente_clicked()
{
    QHash<QString, celular>::iterator i;
    celular celtemp;

    if(ui->list_poniente->currentItem()->text() == "LG V40")
    {
        resetLabels();
        i = celulares.find("idLG");
        celtemp = i.value();
        ui->label_nombre->setText(ui->label_nombre->text()+ " " +celtemp.getAtributo(0));
        ui->label_cam->setText(ui->label_cam->text() + " " + celtemp.getAtributo(1));
        ui->label_carga->setText(ui->label_carga->text() + " " + celtemp.getAtributo(2));
        ui->label_dimensiones->setText(ui->label_dimensiones->text() + " " + celtemp.getAtributo(3));
        ui->label_memoria->setText(ui->label_memoria->text() + " " + celtemp.getAtributo(4));
        ui->label_os->setText(ui->label_os->text() + " " + celtemp.getAtributo(5));
        ui->label_pantalla->setText(ui->label_pantalla->text() + " " + celtemp.getAtributo(6));
        ui->label_peso->setText(ui->label_peso->text() + " " + celtemp.getAtributo(7));
        ui->label_resolucion->setText(ui->label_resolucion->text() + " " + celtemp.getAtributo(8));
        ui->label_tec->setText(ui->label_tec->text() + " " +celtemp.getAtributo(9));

        globalQuery.exec("SELECT cardinalidadCelular FROM sucursal_has_celulares WHERE Sucursal_idSucursal = 'idSuc3' AND Celulares_idCelulares = 'idLG'");
        if(globalQuery.size()>0)
        {
            globalQuery.first();
            ui->label_stock->setText(ui->label_stock->text() + " " +QString::number(globalQuery.value(0).toInt()));
        }
        else
            ui->label_stock->setText(ui->label_stock->text() + " 0");

        ui->label_precio->setText(ui->label_precio->text()+" $10000");

        celImg.load(celtemp.getAtributo(10));
        ui->label_pic->setPixmap( celImg.scaled(ui->label_pic->width(), ui->label_pic->height(), Qt::KeepAspectRatio));
    }

    if(ui->list_poniente->currentItem()->text() == "Moto G6")
    {
        resetLabels();
        i = celulares.find("idMoto");
        celtemp = i.value();
        ui->label_nombre->setText(ui->label_nombre->text()+ " " +celtemp.getAtributo(0));
        ui->label_cam->setText(ui->label_cam->text() + " " + celtemp.getAtributo(1));
        ui->label_carga->setText(ui->label_carga->text() + " " + celtemp.getAtributo(2));
        ui->label_dimensiones->setText(ui->label_dimensiones->text() + " " + celtemp.getAtributo(3));
        ui->label_memoria->setText(ui->label_memoria->text() + " " + celtemp.getAtributo(4));
        ui->label_os->setText(ui->label_os->text() + " " + celtemp.getAtributo(5));
        ui->label_pantalla->setText(ui->label_pantalla->text() + " " + celtemp.getAtributo(6));
        ui->label_peso->setText(ui->label_peso->text() + " " + celtemp.getAtributo(7));
        ui->label_resolucion->setText(ui->label_resolucion->text() + " " + celtemp.getAtributo(8));
        ui->label_tec->setText(ui->label_tec->text() + " " +celtemp.getAtributo(9));

        globalQuery.exec("SELECT cardinalidadCelular FROM sucursal_has_celulares WHERE Sucursal_idSucursal = 'idSuc3' AND Celulares_idCelulares = 'idMoto'");
        if(globalQuery.size()>0)
        {
            globalQuery.first();
            ui->label_stock->setText(ui->label_stock->text() + " " +QString::number(globalQuery.value(0).toInt()));
        }
        else
            ui->label_stock->setText(ui->label_stock->text() + " 0");

        ui->label_precio->setText(ui->label_precio->text()+" $11000");

        celImg.load(celtemp.getAtributo(10));
        ui->label_pic->setPixmap( celImg.scaled(ui->label_pic->width(), ui->label_pic->height(), Qt::KeepAspectRatio));
    }

    if(ui->list_poniente->currentItem()->text() == "One Plus 6T")
    {
        resetLabels();
        i = celulares.find("idOne");
        celtemp = i.value();
        ui->label_nombre->setText(ui->label_nombre->text()+ " " +celtemp.getAtributo(0));
        ui->label_cam->setText(ui->label_cam->text() + " " + celtemp.getAtributo(1));
        ui->label_carga->setText(ui->label_carga->text() + " " + celtemp.getAtributo(2));
        ui->label_dimensiones->setText(ui->label_dimensiones->text() + " " + celtemp.getAtributo(3));
        ui->label_memoria->setText(ui->label_memoria->text() + " " + celtemp.getAtributo(4));
        ui->label_os->setText(ui->label_os->text() + " " + celtemp.getAtributo(5));
        ui->label_pantalla->setText(ui->label_pantalla->text() + " " + celtemp.getAtributo(6));
        ui->label_peso->setText(ui->label_peso->text() + " " + celtemp.getAtributo(7));
        ui->label_resolucion->setText(ui->label_resolucion->text() + " " + celtemp.getAtributo(8));
        ui->label_tec->setText(ui->label_tec->text() + " " +celtemp.getAtributo(9));

        globalQuery.exec("SELECT cardinalidadCelular FROM sucursal_has_celulares WHERE Sucursal_idSucursal = 'idSuc3' AND Celulares_idCelulares = 'idOne'");
        if(globalQuery.size()>0)
        {
            globalQuery.first();
            ui->label_stock->setText(ui->label_stock->text() + " " +QString::number(globalQuery.value(0).toInt()));
        }
        else
            ui->label_stock->setText(ui->label_stock->text() + " 0");

        ui->label_precio->setText(ui->label_precio->text()+" $14000");

        celImg.load(celtemp.getAtributo(10));
        ui->label_pic->setPixmap( celImg.scaled(ui->label_pic->width(), ui->label_pic->height(), Qt::KeepAspectRatio));
    }

    if(ui->list_poniente->currentItem()->text() == "Google Pixel 3")
    {
        resetLabels();
        i = celulares.find("idPix3");
        celtemp = i.value();
        ui->label_nombre->setText(ui->label_nombre->text()+ " " +celtemp.getAtributo(0));
        ui->label_cam->setText(ui->label_cam->text() + " " + celtemp.getAtributo(1));
        ui->label_carga->setText(ui->label_carga->text() + " " + celtemp.getAtributo(2));
        ui->label_dimensiones->setText(ui->label_dimensiones->text() + " " + celtemp.getAtributo(3));
        ui->label_memoria->setText(ui->label_memoria->text() + " " + celtemp.getAtributo(4));
        ui->label_os->setText(ui->label_os->text() + " " + celtemp.getAtributo(5));
        ui->label_pantalla->setText(ui->label_pantalla->text() + " " + celtemp.getAtributo(6));
        ui->label_peso->setText(ui->label_peso->text() + " " + celtemp.getAtributo(7));
        ui->label_resolucion->setText(ui->label_resolucion->text() + " " + celtemp.getAtributo(8));
        ui->label_tec->setText(ui->label_tec->text() + " " +celtemp.getAtributo(9));

        globalQuery.exec("SELECT cardinalidadCelular FROM sucursal_has_celulares WHERE Sucursal_idSucursal = 'idSuc3' AND Celulares_idCelulares = 'idPix3'");
        if(globalQuery.size()>0)
        {
            globalQuery.first();
            ui->label_stock->setText(ui->label_stock->text() + " " +QString::number(globalQuery.value(0).toInt()));
        }
        else
            ui->label_stock->setText(ui->label_stock->text() + " 0");

        ui->label_precio->setText(ui->label_precio->text()+" $16000");

        celImg.load(celtemp.getAtributo(10));
        ui->label_pic->setPixmap( celImg.scaled(ui->label_pic->width(), ui->label_pic->height(), Qt::KeepAspectRatio));
    }

    if(ui->list_poniente->currentItem()->text() == "Samsung Galaxy Note 9")
    {
        resetLabels();
        i = celulares.find("idSsg");
        celtemp = i.value();
        ui->label_nombre->setText(ui->label_nombre->text()+ " " +celtemp.getAtributo(0));
        ui->label_cam->setText(ui->label_cam->text() + " " + celtemp.getAtributo(1));
        ui->label_carga->setText(ui->label_carga->text() + " " + celtemp.getAtributo(2));
        ui->label_dimensiones->setText(ui->label_dimensiones->text() + " " + celtemp.getAtributo(3));
        ui->label_memoria->setText(ui->label_memoria->text() + " " + celtemp.getAtributo(4));
        ui->label_os->setText(ui->label_os->text() + " " + celtemp.getAtributo(5));
        ui->label_pantalla->setText(ui->label_pantalla->text() + " " + celtemp.getAtributo(6));
        ui->label_peso->setText(ui->label_peso->text() + " " + celtemp.getAtributo(7));
        ui->label_resolucion->setText(ui->label_resolucion->text() + " " + celtemp.getAtributo(8));
        ui->label_tec->setText(ui->label_tec->text() + " " +celtemp.getAtributo(9));

        globalQuery.exec("SELECT cardinalidadCelular FROM sucursal_has_celulares WHERE Sucursal_idSucursal = 'idSuc3' AND Celulares_idCelulares = 'idSsg'");
        if(globalQuery.size()>0)
        {
            globalQuery.first();
            ui->label_stock->setText(ui->label_stock->text() + " " +QString::number(globalQuery.value(0).toInt()));
        }
        else
            ui->label_stock->setText(ui->label_stock->text() + " 0");

        ui->label_precio->setText(ui->label_precio->text()+" $16000");

        celImg.load(celtemp.getAtributo(10));
        ui->label_pic->setPixmap( celImg.scaled(ui->label_pic->width(), ui->label_pic->height(), Qt::KeepAspectRatio));
    }

    if(ui->list_poniente->currentItem()->text() == "iPhone XR")
    {
        resetLabels();
        i = celulares.find("idXR");
        celtemp = i.value();
        ui->label_nombre->setText(ui->label_nombre->text()+ " " +celtemp.getAtributo(0));
        ui->label_cam->setText(ui->label_cam->text() + " " + celtemp.getAtributo(1));
        ui->label_carga->setText(ui->label_carga->text() + " " + celtemp.getAtributo(2));
        ui->label_dimensiones->setText(ui->label_dimensiones->text() + " " + celtemp.getAtributo(3));
        ui->label_memoria->setText(ui->label_memoria->text() + " " + celtemp.getAtributo(4));
        ui->label_os->setText(ui->label_os->text() + " " + celtemp.getAtributo(5));
        ui->label_pantalla->setText(ui->label_pantalla->text() + " " + celtemp.getAtributo(6));
        ui->label_peso->setText(ui->label_peso->text() + " " + celtemp.getAtributo(7));
        ui->label_resolucion->setText(ui->label_resolucion->text() + " " + celtemp.getAtributo(8));
        ui->label_tec->setText(ui->label_tec->text() + " " +celtemp.getAtributo(9));

        globalQuery.exec("SELECT cardinalidadCelular FROM sucursal_has_celulares WHERE Sucursal_idSucursal = 'idSuc3' AND Celulares_idCelulares = 'idXR'");
        if(globalQuery.size()>0)
        {
            globalQuery.first();
            ui->label_stock->setText(ui->label_stock->text() + " " +QString::number(globalQuery.value(0).toInt()));
        }
        else
            ui->label_stock->setText(ui->label_stock->text() + " 0");

        ui->label_precio->setText(ui->label_precio->text()+" $20000");

        celImg.load(celtemp.getAtributo(10));
        ui->label_pic->setPixmap( celImg.scaled(ui->label_pic->width(), ui->label_pic->height(), Qt::KeepAspectRatio));
    }

    if(ui->list_poniente->currentItem()->text() == "iPhoneXS")
    {
        resetLabels();
        i = celulares.find("idXS");
        celtemp = i.value();
        ui->label_nombre->setText(ui->label_nombre->text()+ " " +celtemp.getAtributo(0));
        ui->label_cam->setText(ui->label_cam->text() + " " + celtemp.getAtributo(1));
        ui->label_carga->setText(ui->label_carga->text() + " " + celtemp.getAtributo(2));
        ui->label_dimensiones->setText(ui->label_dimensiones->text() + " " + celtemp.getAtributo(3));
        ui->label_memoria->setText(ui->label_memoria->text() + " " + celtemp.getAtributo(4));
        ui->label_os->setText(ui->label_os->text() + " " + celtemp.getAtributo(5));
        ui->label_pantalla->setText(ui->label_pantalla->text() + " " + celtemp.getAtributo(6));
        ui->label_peso->setText(ui->label_peso->text() + " " + celtemp.getAtributo(7));
        ui->label_resolucion->setText(ui->label_resolucion->text() + " " + celtemp.getAtributo(8));
        ui->label_tec->setText(ui->label_tec->text() + " " +celtemp.getAtributo(9));

        globalQuery.exec("SELECT cardinalidadCelular FROM sucursal_has_celulares WHERE Sucursal_idSucursal = 'idSuc3' AND Celulares_idCelulares = 'idXS'");
        if(globalQuery.size()>0)
        {
            globalQuery.first();
            ui->label_stock->setText(ui->label_stock->text() + " " +QString::number(globalQuery.value(0).toInt()));
        }
        else
            ui->label_stock->setText(ui->label_stock->text() + " 0");

        ui->label_precio->setText(ui->label_precio->text()+" $21000");

        celImg.load(celtemp.getAtributo(10));
        ui->label_pic->setPixmap( celImg.scaled(ui->label_pic->width(), ui->label_pic->height(), Qt::KeepAspectRatio));
    }
}

void AdminWindow::on_boton_celAnge_clicked()
{
    QHash<QString, celular>::iterator i;
    celular celtemp;

    if(ui->list_ange->currentItem()->text() == "LG V40")
    {
        resetLabels();
        i = celulares.find("idLG");
        celtemp = i.value();
        ui->label_nombre->setText(ui->label_nombre->text()+ " " +celtemp.getAtributo(0));
        ui->label_cam->setText(ui->label_cam->text() + " " + celtemp.getAtributo(1));
        ui->label_carga->setText(ui->label_carga->text() + " " + celtemp.getAtributo(2));
        ui->label_dimensiones->setText(ui->label_dimensiones->text() + " " + celtemp.getAtributo(3));
        ui->label_memoria->setText(ui->label_memoria->text() + " " + celtemp.getAtributo(4));
        ui->label_os->setText(ui->label_os->text() + " " + celtemp.getAtributo(5));
        ui->label_pantalla->setText(ui->label_pantalla->text() + " " + celtemp.getAtributo(6));
        ui->label_peso->setText(ui->label_peso->text() + " " + celtemp.getAtributo(7));
        ui->label_resolucion->setText(ui->label_resolucion->text() + " " + celtemp.getAtributo(8));
        ui->label_tec->setText(ui->label_tec->text() + " " +celtemp.getAtributo(9));

        globalQuery.exec("SELECT cardinalidadCelular FROM sucursal_has_celulares WHERE Sucursal_idSucursal = 'idSuc5' AND Celulares_idCelulares = 'idLG'");
        if(globalQuery.size()>0)
        {
            globalQuery.first();
            ui->label_stock->setText(ui->label_stock->text() + " " +QString::number(globalQuery.value(0).toInt()));
        }
        else
            ui->label_stock->setText(ui->label_stock->text() + " 0");

        ui->label_precio->setText(ui->label_precio->text()+" $10000");

        celImg.load(celtemp.getAtributo(10));
        ui->label_pic->setPixmap( celImg.scaled(ui->label_pic->width(), ui->label_pic->height(), Qt::KeepAspectRatio));
    }

    if(ui->list_ange->currentItem()->text() == "Moto G6")
    {
        resetLabels();
        i = celulares.find("idMoto");
        celtemp = i.value();
        ui->label_nombre->setText(ui->label_nombre->text()+ " " +celtemp.getAtributo(0));
        ui->label_cam->setText(ui->label_cam->text() + " " + celtemp.getAtributo(1));
        ui->label_carga->setText(ui->label_carga->text() + " " + celtemp.getAtributo(2));
        ui->label_dimensiones->setText(ui->label_dimensiones->text() + " " + celtemp.getAtributo(3));
        ui->label_memoria->setText(ui->label_memoria->text() + " " + celtemp.getAtributo(4));
        ui->label_os->setText(ui->label_os->text() + " " + celtemp.getAtributo(5));
        ui->label_pantalla->setText(ui->label_pantalla->text() + " " + celtemp.getAtributo(6));
        ui->label_peso->setText(ui->label_peso->text() + " " + celtemp.getAtributo(7));
        ui->label_resolucion->setText(ui->label_resolucion->text() + " " + celtemp.getAtributo(8));
        ui->label_tec->setText(ui->label_tec->text() + " " +celtemp.getAtributo(9));

        globalQuery.exec("SELECT cardinalidadCelular FROM sucursal_has_celulares WHERE Sucursal_idSucursal = 'idSuc5' AND Celulares_idCelulares = 'idMoto'");
        if(globalQuery.size()>0)
        {
            globalQuery.first();
            ui->label_stock->setText(ui->label_stock->text() + " " +QString::number(globalQuery.value(0).toInt()));
        }
        else
            ui->label_stock->setText(ui->label_stock->text() + " 0");

        ui->label_precio->setText(ui->label_precio->text()+" $11000");

        celImg.load(celtemp.getAtributo(10));
        ui->label_pic->setPixmap( celImg.scaled(ui->label_pic->width(), ui->label_pic->height(), Qt::KeepAspectRatio));
    }

    if(ui->list_ange->currentItem()->text() == "One Plus 6T")
    {
        resetLabels();
        i = celulares.find("idOne");
        celtemp = i.value();
        ui->label_nombre->setText(ui->label_nombre->text()+ " " +celtemp.getAtributo(0));
        ui->label_cam->setText(ui->label_cam->text() + " " + celtemp.getAtributo(1));
        ui->label_carga->setText(ui->label_carga->text() + " " + celtemp.getAtributo(2));
        ui->label_dimensiones->setText(ui->label_dimensiones->text() + " " + celtemp.getAtributo(3));
        ui->label_memoria->setText(ui->label_memoria->text() + " " + celtemp.getAtributo(4));
        ui->label_os->setText(ui->label_os->text() + " " + celtemp.getAtributo(5));
        ui->label_pantalla->setText(ui->label_pantalla->text() + " " + celtemp.getAtributo(6));
        ui->label_peso->setText(ui->label_peso->text() + " " + celtemp.getAtributo(7));
        ui->label_resolucion->setText(ui->label_resolucion->text() + " " + celtemp.getAtributo(8));
        ui->label_tec->setText(ui->label_tec->text() + " " +celtemp.getAtributo(9));

        globalQuery.exec("SELECT cardinalidadCelular FROM sucursal_has_celulares WHERE Sucursal_idSucursal = 'idSuc5' AND Celulares_idCelulares = 'idOne'");
        if(globalQuery.size()>0)
        {
            globalQuery.first();
            ui->label_stock->setText(ui->label_stock->text() + " " +QString::number(globalQuery.value(0).toInt()));
        }
        else
            ui->label_stock->setText(ui->label_stock->text() + " 0");

        ui->label_precio->setText(ui->label_precio->text()+" $14000");

        celImg.load(celtemp.getAtributo(10));
        ui->label_pic->setPixmap( celImg.scaled(ui->label_pic->width(), ui->label_pic->height(), Qt::KeepAspectRatio));
    }

    if(ui->list_ange->currentItem()->text() == "Google Pixel 3")
    {
        resetLabels();
        i = celulares.find("idPix3");
        celtemp = i.value();
        ui->label_nombre->setText(ui->label_nombre->text()+ " " +celtemp.getAtributo(0));
        ui->label_cam->setText(ui->label_cam->text() + " " + celtemp.getAtributo(1));
        ui->label_carga->setText(ui->label_carga->text() + " " + celtemp.getAtributo(2));
        ui->label_dimensiones->setText(ui->label_dimensiones->text() + " " + celtemp.getAtributo(3));
        ui->label_memoria->setText(ui->label_memoria->text() + " " + celtemp.getAtributo(4));
        ui->label_os->setText(ui->label_os->text() + " " + celtemp.getAtributo(5));
        ui->label_pantalla->setText(ui->label_pantalla->text() + " " + celtemp.getAtributo(6));
        ui->label_peso->setText(ui->label_peso->text() + " " + celtemp.getAtributo(7));
        ui->label_resolucion->setText(ui->label_resolucion->text() + " " + celtemp.getAtributo(8));
        ui->label_tec->setText(ui->label_tec->text() + " " +celtemp.getAtributo(9));

        globalQuery.exec("SELECT cardinalidadCelular FROM sucursal_has_celulares WHERE Sucursal_idSucursal = 'idSuc5' AND Celulares_idCelulares = 'idPix3'");
        if(globalQuery.size()>0)
        {
            globalQuery.first();
            ui->label_stock->setText(ui->label_stock->text() + " " +QString::number(globalQuery.value(0).toInt()));
        }
        else
            ui->label_stock->setText(ui->label_stock->text() + " 0");

        ui->label_precio->setText(ui->label_precio->text()+" $16000");

        celImg.load(celtemp.getAtributo(10));
        ui->label_pic->setPixmap( celImg.scaled(ui->label_pic->width(), ui->label_pic->height(), Qt::KeepAspectRatio));
    }

    if(ui->list_ange->currentItem()->text() == "Samsung Galaxy Note 9")
    {
        resetLabels();
        i = celulares.find("idSsg");
        celtemp = i.value();
        ui->label_nombre->setText(ui->label_nombre->text()+ " " +celtemp.getAtributo(0));
        ui->label_cam->setText(ui->label_cam->text() + " " + celtemp.getAtributo(1));
        ui->label_carga->setText(ui->label_carga->text() + " " + celtemp.getAtributo(2));
        ui->label_dimensiones->setText(ui->label_dimensiones->text() + " " + celtemp.getAtributo(3));
        ui->label_memoria->setText(ui->label_memoria->text() + " " + celtemp.getAtributo(4));
        ui->label_os->setText(ui->label_os->text() + " " + celtemp.getAtributo(5));
        ui->label_pantalla->setText(ui->label_pantalla->text() + " " + celtemp.getAtributo(6));
        ui->label_peso->setText(ui->label_peso->text() + " " + celtemp.getAtributo(7));
        ui->label_resolucion->setText(ui->label_resolucion->text() + " " + celtemp.getAtributo(8));
        ui->label_tec->setText(ui->label_tec->text() + " " +celtemp.getAtributo(9));

        globalQuery.exec("SELECT cardinalidadCelular FROM sucursal_has_celulares WHERE Sucursal_idSucursal = 'idSuc5' AND Celulares_idCelulares = 'idSsg'");
        if(globalQuery.size()>0)
        {
            globalQuery.first();
            ui->label_stock->setText(ui->label_stock->text() + " " +QString::number(globalQuery.value(0).toInt()));
        }
        else
            ui->label_stock->setText(ui->label_stock->text() + " 0");

        ui->label_precio->setText(ui->label_precio->text()+" $16000");

        celImg.load(celtemp.getAtributo(10));
        ui->label_pic->setPixmap( celImg.scaled(ui->label_pic->width(), ui->label_pic->height(), Qt::KeepAspectRatio));
    }

    if(ui->list_ange->currentItem()->text() == "iPhone XR")
    {
        resetLabels();
        i = celulares.find("idXR");
        celtemp = i.value();
        ui->label_nombre->setText(ui->label_nombre->text()+ " " +celtemp.getAtributo(0));
        ui->label_cam->setText(ui->label_cam->text() + " " + celtemp.getAtributo(1));
        ui->label_carga->setText(ui->label_carga->text() + " " + celtemp.getAtributo(2));
        ui->label_dimensiones->setText(ui->label_dimensiones->text() + " " + celtemp.getAtributo(3));
        ui->label_memoria->setText(ui->label_memoria->text() + " " + celtemp.getAtributo(4));
        ui->label_os->setText(ui->label_os->text() + " " + celtemp.getAtributo(5));
        ui->label_pantalla->setText(ui->label_pantalla->text() + " " + celtemp.getAtributo(6));
        ui->label_peso->setText(ui->label_peso->text() + " " + celtemp.getAtributo(7));
        ui->label_resolucion->setText(ui->label_resolucion->text() + " " + celtemp.getAtributo(8));
        ui->label_tec->setText(ui->label_tec->text() + " " +celtemp.getAtributo(9));

        globalQuery.exec("SELECT cardinalidadCelular FROM sucursal_has_celulares WHERE Sucursal_idSucursal = 'idSuc5' AND Celulares_idCelulares = 'idXR'");
        if(globalQuery.size()>0)
        {
            globalQuery.first();
            ui->label_stock->setText(ui->label_stock->text() + " " +QString::number(globalQuery.value(0).toInt()));
        }
        else
            ui->label_stock->setText(ui->label_stock->text() + " 0");

        ui->label_precio->setText(ui->label_precio->text()+" $20000");

        celImg.load(celtemp.getAtributo(10));
        ui->label_pic->setPixmap( celImg.scaled(ui->label_pic->width(), ui->label_pic->height(), Qt::KeepAspectRatio));
    }

    if(ui->list_ange->currentItem()->text() == "iPhoneXS")
    {
        resetLabels();
        i = celulares.find("idXS");
        celtemp = i.value();
        ui->label_nombre->setText(ui->label_nombre->text()+ " " +celtemp.getAtributo(0));
        ui->label_cam->setText(ui->label_cam->text() + " " + celtemp.getAtributo(1));
        ui->label_carga->setText(ui->label_carga->text() + " " + celtemp.getAtributo(2));
        ui->label_dimensiones->setText(ui->label_dimensiones->text() + " " + celtemp.getAtributo(3));
        ui->label_memoria->setText(ui->label_memoria->text() + " " + celtemp.getAtributo(4));
        ui->label_os->setText(ui->label_os->text() + " " + celtemp.getAtributo(5));
        ui->label_pantalla->setText(ui->label_pantalla->text() + " " + celtemp.getAtributo(6));
        ui->label_peso->setText(ui->label_peso->text() + " " + celtemp.getAtributo(7));
        ui->label_resolucion->setText(ui->label_resolucion->text() + " " + celtemp.getAtributo(8));
        ui->label_tec->setText(ui->label_tec->text() + " " +celtemp.getAtributo(9));

        globalQuery.exec("SELECT cardinalidadCelular FROM sucursal_has_celulares WHERE Sucursal_idSucursal = 'idSuc5' AND Celulares_idCelulares = 'idXS'");
        if(globalQuery.size()>0)
        {
            globalQuery.first();
            ui->label_stock->setText(ui->label_stock->text() + " " +QString::number(globalQuery.value(0).toInt()));
        }
        else
            ui->label_stock->setText(ui->label_stock->text() + " 0");

        ui->label_precio->setText(ui->label_precio->text()+" $21000");

        celImg.load(celtemp.getAtributo(10));
        ui->label_pic->setPixmap( celImg.scaled(ui->label_pic->width(), ui->label_pic->height(), Qt::KeepAspectRatio));
    }
}

void AdminWindow::on_boton_celSerdan_clicked()
{
    QHash<QString, celular>::iterator i;
    celular celtemp;

    if(ui->list_Serdan->currentItem()->text() == "LG V40")
    {
        resetLabels();
        i = celulares.find("idLG");
        celtemp = i.value();
        ui->label_nombre->setText(ui->label_nombre->text()+ " " +celtemp.getAtributo(0));
        ui->label_cam->setText(ui->label_cam->text() + " " + celtemp.getAtributo(1));
        ui->label_carga->setText(ui->label_carga->text() + " " + celtemp.getAtributo(2));
        ui->label_dimensiones->setText(ui->label_dimensiones->text() + " " + celtemp.getAtributo(3));
        ui->label_memoria->setText(ui->label_memoria->text() + " " + celtemp.getAtributo(4));
        ui->label_os->setText(ui->label_os->text() + " " + celtemp.getAtributo(5));
        ui->label_pantalla->setText(ui->label_pantalla->text() + " " + celtemp.getAtributo(6));
        ui->label_peso->setText(ui->label_peso->text() + " " + celtemp.getAtributo(7));
        ui->label_resolucion->setText(ui->label_resolucion->text() + " " + celtemp.getAtributo(8));
        ui->label_tec->setText(ui->label_tec->text() + " " +celtemp.getAtributo(9));

        globalQuery.exec("SELECT cardinalidadCelular FROM sucursal_has_celulares WHERE Sucursal_idSucursal = 'idSuc4' AND Celulares_idCelulares = 'idLG'");
        if(globalQuery.size()>0)
        {
            globalQuery.first();
            ui->label_stock->setText(ui->label_stock->text() + " " +QString::number(globalQuery.value(0).toInt()));
        }
        else
            ui->label_stock->setText(ui->label_stock->text() + " 0");

        ui->label_precio->setText(ui->label_precio->text()+" $10000");

        celImg.load(celtemp.getAtributo(10));
        ui->label_pic->setPixmap( celImg.scaled(ui->label_pic->width(), ui->label_pic->height(), Qt::KeepAspectRatio));
    }

    if(ui->list_Serdan->currentItem()->text() == "Moto G6")
    {
        resetLabels();
        i = celulares.find("idMoto");
        celtemp = i.value();
        ui->label_nombre->setText(ui->label_nombre->text()+ " " +celtemp.getAtributo(0));
        ui->label_cam->setText(ui->label_cam->text() + " " + celtemp.getAtributo(1));
        ui->label_carga->setText(ui->label_carga->text() + " " + celtemp.getAtributo(2));
        ui->label_dimensiones->setText(ui->label_dimensiones->text() + " " + celtemp.getAtributo(3));
        ui->label_memoria->setText(ui->label_memoria->text() + " " + celtemp.getAtributo(4));
        ui->label_os->setText(ui->label_os->text() + " " + celtemp.getAtributo(5));
        ui->label_pantalla->setText(ui->label_pantalla->text() + " " + celtemp.getAtributo(6));
        ui->label_peso->setText(ui->label_peso->text() + " " + celtemp.getAtributo(7));
        ui->label_resolucion->setText(ui->label_resolucion->text() + " " + celtemp.getAtributo(8));
        ui->label_tec->setText(ui->label_tec->text() + " " +celtemp.getAtributo(9));

        globalQuery.exec("SELECT cardinalidadCelular FROM sucursal_has_celulares WHERE Sucursal_idSucursal = 'idSuc4' AND Celulares_idCelulares = 'idMoto'");
        if(globalQuery.size()>0)
        {
            globalQuery.first();
            ui->label_stock->setText(ui->label_stock->text() + " " +QString::number(globalQuery.value(0).toInt()));
        }
        else
            ui->label_stock->setText(ui->label_stock->text() + " 0");

        ui->label_precio->setText(ui->label_precio->text()+" $11000");

        celImg.load(celtemp.getAtributo(10));
        ui->label_pic->setPixmap( celImg.scaled(ui->label_pic->width(), ui->label_pic->height(), Qt::KeepAspectRatio));
    }

    if(ui->list_Serdan->currentItem()->text() == "One Plus 6T")
    {
        resetLabels();
        i = celulares.find("idOne");
        celtemp = i.value();
        ui->label_nombre->setText(ui->label_nombre->text()+ " " +celtemp.getAtributo(0));
        ui->label_cam->setText(ui->label_cam->text() + " " + celtemp.getAtributo(1));
        ui->label_carga->setText(ui->label_carga->text() + " " + celtemp.getAtributo(2));
        ui->label_dimensiones->setText(ui->label_dimensiones->text() + " " + celtemp.getAtributo(3));
        ui->label_memoria->setText(ui->label_memoria->text() + " " + celtemp.getAtributo(4));
        ui->label_os->setText(ui->label_os->text() + " " + celtemp.getAtributo(5));
        ui->label_pantalla->setText(ui->label_pantalla->text() + " " + celtemp.getAtributo(6));
        ui->label_peso->setText(ui->label_peso->text() + " " + celtemp.getAtributo(7));
        ui->label_resolucion->setText(ui->label_resolucion->text() + " " + celtemp.getAtributo(8));
        ui->label_tec->setText(ui->label_tec->text() + " " +celtemp.getAtributo(9));

        globalQuery.exec("SELECT cardinalidadCelular FROM sucursal_has_celulares WHERE Sucursal_idSucursal = 'idSuc4' AND Celulares_idCelulares = 'idOne'");
        if(globalQuery.size()>0)
        {
            globalQuery.first();
            ui->label_stock->setText(ui->label_stock->text() + " " +QString::number(globalQuery.value(0).toInt()));
        }
        else
            ui->label_stock->setText(ui->label_stock->text() + " 0");

        ui->label_precio->setText(ui->label_precio->text()+" $14000");

        celImg.load(celtemp.getAtributo(10));
        ui->label_pic->setPixmap( celImg.scaled(ui->label_pic->width(), ui->label_pic->height(), Qt::KeepAspectRatio));
    }

    if(ui->list_Serdan->currentItem()->text() == "Google Pixel 3")
    {
        resetLabels();
        i = celulares.find("idPix3");
        celtemp = i.value();
        ui->label_nombre->setText(ui->label_nombre->text()+ " " +celtemp.getAtributo(0));
        ui->label_cam->setText(ui->label_cam->text() + " " + celtemp.getAtributo(1));
        ui->label_carga->setText(ui->label_carga->text() + " " + celtemp.getAtributo(2));
        ui->label_dimensiones->setText(ui->label_dimensiones->text() + " " + celtemp.getAtributo(3));
        ui->label_memoria->setText(ui->label_memoria->text() + " " + celtemp.getAtributo(4));
        ui->label_os->setText(ui->label_os->text() + " " + celtemp.getAtributo(5));
        ui->label_pantalla->setText(ui->label_pantalla->text() + " " + celtemp.getAtributo(6));
        ui->label_peso->setText(ui->label_peso->text() + " " + celtemp.getAtributo(7));
        ui->label_resolucion->setText(ui->label_resolucion->text() + " " + celtemp.getAtributo(8));
        ui->label_tec->setText(ui->label_tec->text() + " " +celtemp.getAtributo(9));

        globalQuery.exec("SELECT cardinalidadCelular FROM sucursal_has_celulares WHERE Sucursal_idSucursal = 'idSuc4' AND Celulares_idCelulares = 'idPix3'");
        if(globalQuery.size()>0)
        {
            globalQuery.first();
            ui->label_stock->setText(ui->label_stock->text() + " " +QString::number(globalQuery.value(0).toInt()));
        }
        else
            ui->label_stock->setText(ui->label_stock->text() + " 0");

        ui->label_precio->setText(ui->label_precio->text()+" $16000");

        celImg.load(celtemp.getAtributo(10));
        ui->label_pic->setPixmap( celImg.scaled(ui->label_pic->width(), ui->label_pic->height(), Qt::KeepAspectRatio));
    }

    if(ui->list_Serdan->currentItem()->text() == "Samsung Galaxy Note 9")
    {
        resetLabels();
        i = celulares.find("idSsg");
        celtemp = i.value();
        ui->label_nombre->setText(ui->label_nombre->text()+ " " +celtemp.getAtributo(0));
        ui->label_cam->setText(ui->label_cam->text() + " " + celtemp.getAtributo(1));
        ui->label_carga->setText(ui->label_carga->text() + " " + celtemp.getAtributo(2));
        ui->label_dimensiones->setText(ui->label_dimensiones->text() + " " + celtemp.getAtributo(3));
        ui->label_memoria->setText(ui->label_memoria->text() + " " + celtemp.getAtributo(4));
        ui->label_os->setText(ui->label_os->text() + " " + celtemp.getAtributo(5));
        ui->label_pantalla->setText(ui->label_pantalla->text() + " " + celtemp.getAtributo(6));
        ui->label_peso->setText(ui->label_peso->text() + " " + celtemp.getAtributo(7));
        ui->label_resolucion->setText(ui->label_resolucion->text() + " " + celtemp.getAtributo(8));
        ui->label_tec->setText(ui->label_tec->text() + " " +celtemp.getAtributo(9));

        globalQuery.exec("SELECT cardinalidadCelular FROM sucursal_has_celulares WHERE Sucursal_idSucursal = 'idSuc4' AND Celulares_idCelulares = 'idSsg'");
        if(globalQuery.size()>0)
        {
            globalQuery.first();
            ui->label_stock->setText(ui->label_stock->text() + " " +QString::number(globalQuery.value(0).toInt()));
        }
        else
            ui->label_stock->setText(ui->label_stock->text() + " 0");

        ui->label_precio->setText(ui->label_precio->text()+" $16000");

        celImg.load(celtemp.getAtributo(10));
        ui->label_pic->setPixmap( celImg.scaled(ui->label_pic->width(), ui->label_pic->height(), Qt::KeepAspectRatio));
    }

    if(ui->list_Serdan->currentItem()->text() == "iPhone XR")
    {
        resetLabels();
        i = celulares.find("idXR");
        celtemp = i.value();
        ui->label_nombre->setText(ui->label_nombre->text()+ " " +celtemp.getAtributo(0));
        ui->label_cam->setText(ui->label_cam->text() + " " + celtemp.getAtributo(1));
        ui->label_carga->setText(ui->label_carga->text() + " " + celtemp.getAtributo(2));
        ui->label_dimensiones->setText(ui->label_dimensiones->text() + " " + celtemp.getAtributo(3));
        ui->label_memoria->setText(ui->label_memoria->text() + " " + celtemp.getAtributo(4));
        ui->label_os->setText(ui->label_os->text() + " " + celtemp.getAtributo(5));
        ui->label_pantalla->setText(ui->label_pantalla->text() + " " + celtemp.getAtributo(6));
        ui->label_peso->setText(ui->label_peso->text() + " " + celtemp.getAtributo(7));
        ui->label_resolucion->setText(ui->label_resolucion->text() + " " + celtemp.getAtributo(8));
        ui->label_tec->setText(ui->label_tec->text() + " " +celtemp.getAtributo(9));

        globalQuery.exec("SELECT cardinalidadCelular FROM sucursal_has_celulares WHERE Sucursal_idSucursal = 'idSuc4' AND Celulares_idCelulares = 'idXR'");
        if(globalQuery.size()>0)
        {
            globalQuery.first();
            ui->label_stock->setText(ui->label_stock->text() + " " +QString::number(globalQuery.value(0).toInt()));
        }
        else
            ui->label_stock->setText(ui->label_stock->text() + " 0");

        ui->label_precio->setText(ui->label_precio->text()+" $20000");

        celImg.load(celtemp.getAtributo(10));
        ui->label_pic->setPixmap( celImg.scaled(ui->label_pic->width(), ui->label_pic->height(), Qt::KeepAspectRatio));
    }

    if(ui->list_Serdan->currentItem()->text() == "iPhoneXS")
    {
        resetLabels();
        i = celulares.find("idXS");
        celtemp = i.value();
        ui->label_nombre->setText(ui->label_nombre->text()+ " " +celtemp.getAtributo(0));
        ui->label_cam->setText(ui->label_cam->text() + " " + celtemp.getAtributo(1));
        ui->label_carga->setText(ui->label_carga->text() + " " + celtemp.getAtributo(2));
        ui->label_dimensiones->setText(ui->label_dimensiones->text() + " " + celtemp.getAtributo(3));
        ui->label_memoria->setText(ui->label_memoria->text() + " " + celtemp.getAtributo(4));
        ui->label_os->setText(ui->label_os->text() + " " + celtemp.getAtributo(5));
        ui->label_pantalla->setText(ui->label_pantalla->text() + " " + celtemp.getAtributo(6));
        ui->label_peso->setText(ui->label_peso->text() + " " + celtemp.getAtributo(7));
        ui->label_resolucion->setText(ui->label_resolucion->text() + " " + celtemp.getAtributo(8));
        ui->label_tec->setText(ui->label_tec->text() + " " +celtemp.getAtributo(9));

        globalQuery.exec("SELECT cardinalidadCelular FROM sucursal_has_celulares WHERE Sucursal_idSucursal = 'idSuc4' AND Celulares_idCelulares = 'idXS'");
        if(globalQuery.size()>0)
        {
            globalQuery.first();
            ui->label_stock->setText(ui->label_stock->text() + " " +QString::number(globalQuery.value(0).toInt()));
        }
        else
            ui->label_stock->setText(ui->label_stock->text() + " 0");

        ui->label_precio->setText(ui->label_precio->text()+" $21000");

        celImg.load(celtemp.getAtributo(10));
        ui->label_pic->setPixmap( celImg.scaled(ui->label_pic->width(), ui->label_pic->height(), Qt::KeepAspectRatio));
    }
}

void AdminWindow::on_boton_carritoSanAndres_clicked()
{
    QString cantidad;
    cantidad = ui->label_stock->text();
    if(cantidad != "STOCK: 0" ){
        QSqlQuery query;
        bool ok;
        QString text = QInputDialog::getText(this, "Inroduzca filename", "Nombre del archivo:", QLineEdit::Normal, "" ,&ok);
        QFile file(carpeta + text +".txt");
        QString idSucursal, idCel;


        graph.Dijkstra(0);
        int minimaDistance = graph.getDistanciaMinima(5);

        if(ui->list_SanAndres->currentItem()->text()=="LG V40")
            idCel= "idLG";

        if(ui->list_SanAndres->currentItem()->text()=="Moto G6")
            idCel= "idMoto";

        if(ui->list_SanAndres->currentItem()->text()=="One Plus 6T")
            idCel= "idOne";

        if(ui->list_SanAndres->currentItem()->text()=="Samsung Galaxy Note 9")
            idCel= "idSsg";

        if(ui->list_SanAndres->currentItem()->text()=="iPhone XR")
            idCel= "idXR";

        if(ui->list_SanAndres->currentItem()->text()=="Google Pixel 3")
            idCel= "idPix3";

        if(ui->list_SanAndres->currentItem()->text()=="iPhoneXS")
            idCel= "idXS";

        idSucursal = "San Andres";

        if(query.exec("UPDATE sucursal_has_celulares SET cardinalidadCelular = cardinalidadCelular - 1 WHERE Sucursal_idSucursal = 'idSuc1' AND Celulares_idCelulares = '" + idCel +"';"))
            qDebug() << "update exitoso";

        if(!file.open(QFile::WriteOnly | QFile::Text)) {
           QMessageBox::warning(this, "title", "Archivo no abierto.");
        }

        QTextStream out(&file);

        out << plantillaDeRecibo1;

        out << ui->label_nombre->text() << "\t\t" << ui->label_precio->text() << "\n";

        out << "SUCURSAL: " << idSucursal;

        out << "\nCliente: " << clientName << " " << clientLastName;

        out << "\nTiempo aproximado de llegada: " << " " << minimaDistance/60 << " minutos. ";

        out << plantillaDeRecibo2;

        file.flush();
        file.close();
        qDebug() << text;
        QMessageBox::information(this, "Info", "Factura guardada con exito.");
    }
    else{
        QMessageBox::critical(this, "Error", "No se pueden comprar productos con stock 0.");
    }
}

void AdminWindow::on_boton_infoSanAndres_clicked()
{
    ubSanAndres = new Store(this);
    ubSanAndres->show();
}

void AdminWindow::on_boton_infoSonata_clicked()
{
    ubSonata = new storeSonata(this);
    ubSonata->show();
}

void AdminWindow::on_boton_infoPoniente_clicked()
{
    ubPoniente = new storePoniente(this);
    ubPoniente->show();
}

void AdminWindow::on_boton_infoAnge_clicked()
{
    ubAnge = new storeAnge(this);
    ubAnge->show();
}

void AdminWindow::on_boton_infoSerdan_clicked()
{
    ubSerdan = new ubiSerdan(this);
    ubSerdan->show();
}

void AdminWindow::on_boton_carritoSonata_clicked()
{
    QString cantidad;
    cantidad = ui->label_stock->text();
    if(cantidad != "STOCK: 0"){
        QSqlQuery query;
        bool ok;
        QString text = QInputDialog::getText(this, "Inroduzca filename", "Nombre del archivo:", QLineEdit::Normal, "" ,&ok);
        QFile file(carpeta + text +".txt");
        QString idSucursal, idCel;

        graph.Dijkstra(1);

        int minimaDistance = graph.getDistanciaMinima(5);

        if(ui->list_sonata->currentItem()->text()=="LG V40")
            idCel= "idLG";

        if(ui->list_sonata->currentItem()->text()=="Moto G6")
            idCel= "idMoto";

        if(ui->list_sonata->currentItem()->text()=="One Plus 6T")
            idCel= "idOne";

        if(ui->list_sonata->currentItem()->text()=="Samsung Galaxy Note 9")
            idCel= "idSsg";

        if(ui->list_sonata->currentItem()->text()=="iPhone XR")
            idCel= "idXR";

        if(ui->list_sonata->currentItem()->text()=="Google Pixel 3")
            idCel= "idPix3";

        if(ui->list_sonata->currentItem()->text()=="iPhoneXS")
            idCel= "idXS";

        idSucursal = "Sonata";

        if(query.exec("UPDATE sucursal_has_celulares SET cardinalidadCelular = cardinalidadCelular - 1 WHERE Sucursal_idSucursal = 'idSuc2' AND Celulares_idCelulares = '" + idCel +"';"))
            qDebug() << "update exitoso";

        if(!file.open(QFile::WriteOnly | QFile::Text)) {
           QMessageBox::warning(this, "title", "Archivo no abierto.");
        }

        QTextStream out(&file);

        out << plantillaDeRecibo1;

        out << ui->label_nombre->text() << "\t\t" << ui->label_precio->text() << "\n";

        out << "SUCURSAL: " << idSucursal;

        out << "\nCliente: " << clientName << " " << clientLastName;

        out << "\nTiempo aproximado de llegada: " << " " << minimaDistance/60 << " minutos.";

        out << plantillaDeRecibo2;

        file.flush();
        file.close();
        qDebug() << text;

        QMessageBox::information(this, "Info", "Factura guardada con exito.");

    }
    else
    {
        QMessageBox::critical(this, "Error", "No se pueden comprar productos con stock 0.");
    }
}

void AdminWindow::on_boton_carritoPoniente_clicked()
{
    QString cantidad;
    cantidad = ui->label_stock->text();
    if(cantidad != "STOCK: 0"){
        QSqlQuery query;
        bool ok;
        QString text = QInputDialog::getText(this, "Inroduzca filename", "Nombre del archivo:", QLineEdit::Normal, "" ,&ok);
        QFile file(carpeta + text +".txt");
        QString idSucursal, idCel;

        graph.Dijkstra(2);

        int minimaDistance = graph.getDistanciaMinima(5);

        if(ui->list_poniente->currentItem()->text()=="LG V40")
            idCel= "idLG";

        if(ui->list_poniente->currentItem()->text()=="Moto G6")
            idCel= "idMoto";

        if(ui->list_poniente->currentItem()->text()=="One Plus 6T")
            idCel= "idOne";

        if(ui->list_poniente->currentItem()->text()=="Samsung Galaxy Note 9")
            idCel= "idSsg";

        if(ui->list_poniente->currentItem()->text()=="iPhone XR")
            idCel= "idXR";

        if(ui->list_poniente->currentItem()->text()=="Google Pixel 3")
            idCel= "idPix3";

        if(ui->list_poniente->currentItem()->text()=="iPhoneXS")
            idCel= "idXS";

        idSucursal = "31 Poniente";

        if(query.exec("UPDATE sucursal_has_celulares SET cardinalidadCelular = cardinalidadCelular - 1 WHERE Sucursal_idSucursal = 'idSuc3' AND Celulares_idCelulares = '" + idCel +"';"))
            qDebug() << "update exitoso";

        if(!file.open(QFile::WriteOnly | QFile::Text)) {
           QMessageBox::warning(this, "title", "Archivo no abierto.");
        }

        QTextStream out(&file);

        out << plantillaDeRecibo1;

        out << ui->label_nombre->text() << "\t\t" << ui->label_precio->text() << "\n";

        out << "SUCURSAL: " << idSucursal;

        out << "\nCliente: " << clientName << " " << clientLastName;

        out << "\nTiempo aproximado de llegada: " << " " << minimaDistance/60 << " minutos.";

        out << plantillaDeRecibo2;

        file.flush();
        file.close();
        qDebug() << text;
        QMessageBox::information(this, "Info", "Factura guardada con exito.");

    }
    else
    {
        QMessageBox::critical(this, "Error", "No se pueden comprar productos con stock 0.");
    }
}

void AdminWindow::on_boton_carritoAnge_clicked()
{
    QString cantidad;
    cantidad = ui->label_stock->text();
    if(cantidad != "STOCK: 0"){
    QSqlQuery query;
    bool ok;
    QString text = QInputDialog::getText(this, "Inroduzca filename", "Nombre del archivo:", QLineEdit::Normal, "" ,&ok);
    QFile file(carpeta + text +".txt");
    QString idSucursal, idCel;

    graph.Dijkstra(4);

    int minimaDistance = graph.getDistanciaMinima(5);

    if(ui->list_ange->currentItem()->text()=="LG V40")
        idCel= "idLG";

    if(ui->list_ange->currentItem()->text()=="Moto G6")
        idCel= "idMoto";

    if(ui->list_ange->currentItem()->text()=="One Plus 6T")
        idCel= "idOne";

    if(ui->list_ange->currentItem()->text()=="Samsung Galaxy Note 9")
        idCel= "idSsg";

    if(ui->list_ange->currentItem()->text()=="iPhone XR")
        idCel= "idXR";

    if(ui->list_ange->currentItem()->text()=="Google Pixel 3")
        idCel= "idPix3";

    if(ui->list_ange->currentItem()->text()=="iPhoneXS")
        idCel= "idXS";

    idSucursal = "Angelopolis";

    if(query.exec("UPDATE sucursal_has_celulares SET cardinalidadCelular = cardinalidadCelular - 1 WHERE Sucursal_idSucursal = 'idSuc5' AND Celulares_idCelulares = '" + idCel +"';"))
        qDebug() << "update exitoso";

    if(!file.open(QFile::WriteOnly | QFile::Text)) {
       QMessageBox::warning(this, "title", "Archivo no abierto.");
    }

    QTextStream out(&file);

    out << plantillaDeRecibo1;

    out << ui->label_nombre->text() << "\t\t" << ui->label_precio->text() << "\n";

    out << "SUCURSAL: " << idSucursal;

    out << "\nCliente: " << clientName << " " << clientLastName;

    out << "\nTiempo aproximado de llegada: " << " " << minimaDistance/60 << " minutos.";

    out << plantillaDeRecibo2;

    file.flush();
    file.close();
    qDebug() << text;

    QMessageBox::information(this, "Info", "Factura guardada con exito.");

    }
    else
    {
        QMessageBox::critical(this, "Error", "No se pueden comprar productos con stock 0.");
    }
}

void AdminWindow::on_boton_carritoSerdan_clicked()
{
    QString cantidad;
    cantidad = ui->label_stock->text();
    if(cantidad != "STOCK: 0" ){
    QSqlQuery query;
    bool ok;
    QString text = QInputDialog::getText(this, "Inroduzca filename", "Nombre del archivo:", QLineEdit::Normal, "" ,&ok);
    QFile file(carpeta + text +".txt");
    QString idSucursal, idCel;

    graph.Dijkstra(3);

    int minimaDistance = graph.getDistanciaMinima(5);

    if(ui->list_Serdan->currentItem()->text()=="LG V40")
        idCel= "idLG";

    if(ui->list_Serdan->currentItem()->text()=="Moto G6")
        idCel= "idMoto";

    if(ui->list_Serdan->currentItem()->text()=="One Plus 6T")
        idCel= "idOne";

    if(ui->list_Serdan->currentItem()->text()=="Samsung Galaxy Note 9")
        idCel= "idSsg";

    if(ui->list_Serdan->currentItem()->text()=="iPhone XR")
        idCel= "idXR";

    if(ui->list_Serdan->currentItem()->text()=="Google Pixel 3")
        idCel= "idPix3";

    if(ui->list_Serdan->currentItem()->text()=="iPhoneXS")
        idCel= "idXS";

    idSucursal = "Galerias Serdan";

    if(query.exec("UPDATE sucursal_has_celulares SET cardinalidadCelular = cardinalidadCelular - 1 WHERE Sucursal_idSucursal = 'idSuc4' AND Celulares_idCelulares = '" + idCel +"';"))
        qDebug() << "update exitoso";

    if(!file.open(QFile::WriteOnly | QFile::Text)) {
       QMessageBox::warning(this, "title", "Archivo no abierto.");
    }

    QTextStream out(&file);

    out << plantillaDeRecibo1;

    out << ui->label_nombre->text() << "\t\t" << ui->label_precio->text() << "\n";

    out << "SUCURSAL: " << idSucursal;

    out << "\nCliente: " << clientName << " " << clientLastName;

    out << "\nTiempo aproximado de llegada: " << " " << minimaDistance/60 << " minutos.";

    out << plantillaDeRecibo2;

    file.flush();
    file.close();
    qDebug() << text;

    QMessageBox::information(this, "Info", "Factura guardada con exito.");

    }
    else
    {
        QMessageBox::critical(this, "Error", "No se pueden comprar productos con stock 0.");
    }
}
