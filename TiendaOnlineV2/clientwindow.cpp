#include "clientwindow.h"
#include "ui_clientwindow.h"


ClientWindow::ClientWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::ClientWindow)
{
//    this->setWindowTitle("Smartphone Online Store");
//    db = QSqlDatabase::database();
//    admin.fillContainers();

//    QHash<QString,sucursal> sucursales = admin.getSucursales();
//    QHash<QString, celular> celulares = admin.getCelulares();
//    QHash<QString, solicitudCompra> solicitudes = admin.getSolicitudes();
//    QHash<QString, compra> compras = admin.getCompras();
//    QHash<QString, documento> documentos = admin.getDocumentos();
//    QHash<QString, Cliente> clientes = admin.getClientes();

//    sucursal sanAndres = sucursales["idSuc1"];
//    sucursal sonata = sucursales["idSuc2"];
//    sucursal pte = sucursales["idSuc3"];
//    sucursal serdan = sucursales["idSuc4"];
//    sucursal ange = sucursales["idSuc5"];

//    QHash<QString,celular>::iterator celtemp;
//    celular celtemporal;

//    celtemp = celulares.find("idXR");
//    QString zeze = celtemp.value().getAtributo(0);
//    qDebug() << zeze;
//    QString qeqe = ui->label_Nombre->text();

//    qDebug() << sanAndres.getCantidadModelos();
//    qDebug() << sanAndres.Modelos[1];
//    qDebug() << celulares.value("idXR").getAtributo(10);
//    QSqlQuery query;

//    QSqlQueryModel * recordSanAndres = new QSqlQueryModel();
//    QSqlQueryModel * recordSonata;
//    QSqlQueryModel * recordPoniente;
//    QSqlQueryModel * recordSerdan;
//    QSqlQueryModel * recordAnge;
//    query.exec("SELECT * FROM sucursal_has_celulares WHERE Sucursal_idSucursal = 'idSuc1'");
//    if(query.size()>0){
//        recordSanAndres->setQuery(query);
//        ui->table_sanAndres->setModel(recordSanAndres);

//    }
//    try {
//        QString a = celulares.value("idXR").getAtributo(10);
//        QString b = celulares.value("idXR").getAtributo(0);
//        QListWidgetItem *newItem = new QListWidgetItem(QIcon(a), b);
//        ui->list_SanAndres->addItem(newItem);
//    } catch (QException e) {
//        qDebug() << e.what();
//    }{}

//    try{
//    QHash<QString,celular>::iterator celtemp;
//    celular celtemporal;

//    for(int i=0; i < sanAndres.getCantidadModelos(); i++)
//    {
//        if(sanAndres.Modelos[i] == "idLG")
//        {
//            celtemp = celulares.find("idLG");
//            celtemporal = celtemp.value();
//            ui->list_SanAndres->addItem(new QListWidgetItem(QIcon(celtemporal.getAtributo(10)), celtemporal.getAtributo(0)));
//        }
//        if(sanAndres.Modelos[i] == "idMoto")
//        {
//            celtemp = celulares.find("idMoto");
//            celtemporal = celtemp.value();
//            ui->list_SanAndres->addItem(new QListWidgetItem(QIcon(celtemporal.getAtributo(10)), celtemporal.getAtributo(0)));
//        }
//        if(sanAndres.Modelos[i] == "idOne")
//        {
//            celtemp = celulares.find("idOne");
//            celtemporal = celtemp.value();
//            ui->list_SanAndres->addItem(new QListWidgetItem(QIcon(celtemporal.getAtributo(10)), celtemporal.getAtributo(0)));
//        }
//        if(sanAndres.Modelos[i] == "idPix3")
//        {
//            celtemp = celulares.find("idPix3");
//            celtemporal = celtemp.value();
//            ui->list_SanAndres->addItem(new QListWidgetItem(QIcon(celtemporal.getAtributo(10)), celtemporal.getAtributo(0)));
//        }
//        if(sanAndres.Modelos[i] == "idSsg")
//        {
//            celtemp = celulares.find("idSsg");
//            celtemporal = celtemp.value();
//            ui->list_SanAndres->addItem(new QListWidgetItem(QIcon(celtemporal.getAtributo(10)), celtemporal.getAtributo(0)));
//        }
//        if(sanAndres.Modelos[i] == "idXR")
//        {
//            celtemp = celulares.find("idXR");
//            celtemporal = celtemp.value();
//            ui->list_SanAndres->addItem(new QListWidgetItem(QIcon(celtemporal.getAtributo(10)), celtemporal.getAtributo(0)));
//        }
//        if(sanAndres.Modelos[i] == "idXS")
//        {
//            celtemp = celulares.find("idXS");
//            celtemporal = celtemp.value();
//            ui->list_SanAndres->addItem(new QListWidgetItem(QIcon(celtemporal.getAtributo(10)), celtemporal.getAtributo(0)));
//        }
//    }
//    }catch(QException e){ qDebug() << e.what(); }





//       db = QSqlDatabase::database();

//    if(db.open())
//    {
//        QSqlQuery query;
//        if(query.exec("SELECT * FROM `proyectov3`.`sucursal_has_celulares` WHERE `idSucursal` = 'idSuc1'"))
//        {
//            if(query.size()>0)
//            {
//                QSqlQuery query2;
//                while(query.next())
//                {
//                    if(query2.exec("SELECT * FROM `proyectov3`.`celulares` WHERE idCelulares = '"+ query.value(1).toString() +"'")){
//                        if(query2.size()>0)
//                            ui->list_SanAndres->addItem(new QListWidgetItem(QIcon(query2.value(9).toString()),query2.value(1).toString()));
//                        qDebug() << query.value(1).toString();
//                        qDebug() << query2.value(9).toString();
//                        qDebug() << query2.value(1).toString();

//                    }
//                }
//            }
//        }
//    }









//    QVector<QListWidgetItem*>suc1;
//    QVector<QListWidgetItem*>suc2;
//    QVector<QListWidgetItem*>suc3;
//    QVector<QListWidgetItem*>suc4;
//    QVector<QListWidgetItem*>suc5;
//    QVector<QPair<celular, int>>tmpInventario;
//    celular tmpCel;
//    int tmpCard;
//    QVector<QPair<celular, int>>::iterator i;
//    foreach(sucursal e, admin.container_Sucursal){
//        tmpInventario = e.getCont();
//        if(e.getID()=="idSuc1")
//        {
//           i = tmpInventario.begin();
//           while(i != tmpInventario.end())
//           {
//               tmpCel = i->first;
//               tmpCard = i->second;
//               suc1.push_back(new QListWidgetItem(QIcon(tmpCel.getAtributo(10)), tmpCel.getAtributo(1) + "\t" +
//                                                  QString::number(tmpCard)));
//           }
//        }
//        if(e.getID()=="idSuc2")
//        {
//             i = tmpInventario.begin();
//             while(i != tmpInventario.end())
//             {
//                 tmpCel = i->first;
//                 tmpCard = i->second;
//                 suc2.push_back(new QListWidgetItem(QIcon(tmpCel.getAtributo(10)), tmpCel.getAtributo(1) + "\t" +
//                                                     QString::number(tmpCard)));
//             }
//        }
//        if(e.getID()=="idSuc3")
//        {
//           i = tmpInventario.begin();
//           while(i != tmpInventario.end())
//           {
//               tmpCel = i->first;
//               tmpCard = i->second;
//               suc3.push_back(new QListWidgetItem(QIcon(tmpCel.getAtributo(10)), tmpCel.getAtributo(1) + "\t" +
//                                                  QString::number(tmpCard)));
//           }
//        }
//        if(e.getID()=="idSuc4")
//        {
//           i = tmpInventario.begin();
//           while(i != tmpInventario.end())
//           {
//               tmpCel = i->first;
//               tmpCard = i->second;
//               suc4.push_back(new QListWidgetItem(QIcon(tmpCel.getAtributo(10)), tmpCel.getAtributo(1) + "\t" +
//                                                  QString::number(tmpCard)));
//           }
//        }
//        if(e.getID()=="idSuc5")
//        {
//           i = tmpInventario.begin();
//           while(i != tmpInventario.end())
//           {
//               tmpCel = i->first;
//               tmpCard = i->second;
//               suc5.push_back(new QListWidgetItem(QIcon(tmpCel.getAtributo(10)), tmpCel.getAtributo(1) + "\t" +
//                                                  QString::number(tmpCard)));
//           }
//        }
//    }

//    foreach(QListWidgetItem *e, suc1){
//        ui->list_SanAndres->addItem(e);
//    }

//    foreach(QListWidgetItem *e, suc2){
//        ui->list_SanAndres->addItem(e);
//    }

//    foreach(QListWidgetItem *e, suc3){
//        ui->list_SanAndres->addItem(e);
//    }

//    foreach(QListWidgetItem *e, suc4){
//        ui->list_SanAndres->addItem(e);
//    }

//    foreach(QListWidgetItem *e, suc5){
//        ui->list_SanAndres->addItem(e);
//    }


    ui->setupUi(this);
}

ClientWindow::~ClientWindow()
{
    delete ui;
}
