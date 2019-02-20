#include "administrador.h"



administrador::administrador()
{
    db = QSqlDatabase::database();
}

void administrador::fillContainers()
{
    if(db.open()){

        QSqlQuery query;

        if(query.exec("SELECT * FROM `celulares`")){
                if(query.size() >0){

                celular tmpCel;
                QString tmpNombre,
                tmpTec, tmpOs, tmpPeso,
                tmpDimensiones, tmpCamara,
                tmpPantalla, tmpResolucion,
                tmpCarga, tmpMemoria, tmpImagen, tmpID;

                while(query.next())
                {
                    tmpID = query.value(0).toString();
                    tmpNombre = query.value(1).toString();
                    tmpCamara = query.value(2).toString();
                    tmpCarga = query.value(3).toString();
                    tmpPantalla = query.value(4).toString();
                    tmpDimensiones = query.value(5).toString();
                    tmpResolucion = query.value(6).toString();
                    tmpPeso = query.value(7).toString();
                    tmpTec = query.value(8).toString();
                    tmpImagen = query.value(9).toString();
                    tmpMemoria = query.value(10).toString();
                    tmpOs = query.value(11).toString();
                    tmpCel.setObject(tmpID, tmpNombre, tmpTec, tmpOs, tmpPeso, tmpDimensiones, tmpCamara, tmpPantalla
                                     , tmpResolucion, tmpCarga, tmpMemoria, tmpImagen);
                    container_Celular.insert(tmpID, tmpCel);
                }
            }
        }else{
            qDebug() << query.lastError().driverText() << query.lastError().text();
        }

        if(query.exec("SELECT * FROM `sucursal`")){
            if(query.size()>0){
                QSqlQuery query2;
                if(query2.exec("SELECT * FROM `sucursal_has_celulares`"))
                    if(query2.size()>0)
                    {
                        sucursal tmpSucursal;
                        QHash<QString, sucursal>::iterator i;
                        QString tempID, tempNombre, tempLocation, tempIDSuc, tempIDcel;
//                        QVector<QPair <celular, int>>tempInv;
//                        QPair<celular, int> tempPar;
                        int tempInt;
                        while(query.next()){

                            tempID = query.value(0).toString();
                            tempNombre = query.value(2).toString();
                            tempLocation = query.value(1).toString();
                            tmpSucursal.setData(tempID, tempLocation, tempNombre);
                            qDebug() << query.value(1).toString();
                            container_Sucursal.insert(tempID, tmpSucursal);
                        }
                        while(query2.next()){
                            tempIDSuc = query2.value(0).toString();
                            tempInt = query2.value(2).toInt();
                            tempIDcel = query2.value(1).toString();
                            i = container_Sucursal.find(tempIDSuc);
                            i.value().fillInventario(tempIDcel, tempInt);

//                            if(container_Sucursal[tempIDSuc].getID() == tempIDSuc)
//                            {
//                                tmpSucCon = container_Sucursal[query2.value(0).toString()];
//                                tmpCel = container_Celular[query2.value(1).toString()];
//                                tempInt = query2.value(2).toInt();
//                                tmpSucCon.fillInventario(tmpCel, tempInt);
//                                tempInv = tmpSucCon.getInventario();
//                                tempPar.first = container_Celular[query2.value(1).toString()];
//                                tempPar.second = query2.value(2).toInt();
//                                tempInv.push_back(tempPar);
//                            }
                        }
                    }
            }
        }else{
            qDebug() << query.lastError().driverText() << query.lastError().text();
        }

        if(query.exec("SELECT * FROM `documentos`"))
        {
            if(query.size()>0)
            {
                QString tmpID, tmpfile_path;
                documento tmpDoc;
                while(query.next())
                {
                    tmpID = query.value(0).toString();
                    tmpfile_path = query.value(1).toString();
                    tmpDoc.setData(tmpID, tmpfile_path);
                    container_Documentos.insert(tmpID, tmpDoc);
                }
            }
        }else{
            qDebug() << query.lastError().driverText() << query.lastError().text();
        }
        if(query.exec("SELECT * FROM `solicitudes`")){
            if(query.size()>0){
                solicitudCompra tmpSol;
                QString tmpID, tmpDesc, tmpLocKey,
                        tempIDcel, tempIDsol;
                int tempInt;
                while(query.next()){
                    tmpID =query.value(0).toString();
                    tmpDesc = query.value(1).toString();
                    tmpLocKey=query.value(2).toString();
                    container_Solicitudes.insert(tmpID, tmpSol);
                }
                QSqlQuery query2;
                if(query2.exec("SELECT * FROM `solicitudes_has_celulares`"))
                    if(query2.size()>0)
                    {
                        QHash<QString, solicitudCompra>::iterator i;
                        while(query2.next()){
                            tempIDsol = query2.value(0).toString();
                            tempIDcel = query2.value(1).toString();
                            tempInt = query2.value(3).toInt();
                            i = container_Solicitudes.find(tempIDsol);
                            i.value().setInventario(tempIDcel,tempInt);
                        }
                    }
            }
        }
        else{
                qDebug() << query.lastError().driverText() << query.lastError().text();
            }
        if(query.exec("SELECT * FROM `clientes`")){
            if(query.size()>0)
            {
                QString newApellido, newNombre, newCalle, newCiudad, newColonia,
                        newCP, newID, newnoExterior, newPassword, newTelefono, newPaymentInfo;
                Cliente tempCliente;
                while(query.next()){
                    newID = query.value(0).toString();
                    newApellido = query.value(1).toString();
                    newNombre = query.value(2).toString();
                    newCalle = query.value(3).toString();
                    newCiudad = query.value(4).toString();
                    newColonia = query.value(5).toString();
                    newCP = query.value(6).toString();
                    newnoExterior = query.value(7).toString();
                    newTelefono = query.value(8).toString();
                    qDebug() << query.value(1).toString();
                    newPassword = query.value(10).toString();
                    newPaymentInfo = query.value(9).toString();
                    tempCliente.setObject(newNombre, newApellido, newCalle, newCiudad, newColonia, newCP, newID,
                                          newnoExterior, newTelefono, newPassword, newPaymentInfo);
                    container_Clientes.insert(newID, tempCliente);
                }
            }
        }else{
            qDebug() << query.lastError().driverText() << query.lastError().text();
        }
        if(query.exec("SELECT * FROM `compras`"))
        {
            if(query.size()>0)
            {
                QString tmpID, tmpDescripcion, tmpStatus;
                compra tmpCompra;
                while(query.next())
                {
                    tmpID = query.value(0).toString();
                    tmpDescripcion = query.value(1).toString();
                    tmpStatus = query.value(2).toString();
                    tmpCompra.setObject(tmpID, tmpDescripcion, tmpStatus);
                    foreach(Cliente e, container_Clientes){
                        if(e.getId() == query.value(4).toString())
                            tmpCompra.setCliente(e);
                    }
                    foreach(documento e, container_Documentos){
                        if(e.getID() == query.value(5).toString())
                            tmpCompra.setDocumento(e);
                    }
                    foreach(sucursal e, container_Sucursal ){
                        if(e.getID() == query.value(6).toString())
                            tmpCompra.setSucursal(e);
                    }
                    foreach(solicitudCompra b, container_Solicitudes){
                        if(b.getID() == query.value(7).toString())
                            tmpCompra.setSolicitud(b);
                    }
                }
            }
        }else{
            qDebug() << query.lastError().driverText() << query.lastError().text();
        }
    }
}
