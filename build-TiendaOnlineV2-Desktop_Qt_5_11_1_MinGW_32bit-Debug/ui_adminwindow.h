/********************************************************************************
** Form generated from reading UI file 'adminwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.11.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADMINWINDOW_H
#define UI_ADMINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_AdminWindow
{
public:
    QWidget *centralwidget;
    QTabWidget *tab_sucursales;
    QWidget *tab;
    QListWidget *list_SanAndres;
    QPushButton *boton_infoSanAndres;
    QPushButton *boton_carritoSanAndres;
    QPushButton *boton_celSanAndres;
    QWidget *tab_2;
    QListWidget *list_sonata;
    QPushButton *boton_infoSonata;
    QPushButton *boton_carritoSonata;
    QPushButton *boton_celSonata;
    QWidget *tab_3;
    QListWidget *list_poniente;
    QPushButton *boton_carritoPoniente;
    QPushButton *boton_infoPoniente;
    QPushButton *boton_celPoniente;
    QWidget *tab_4;
    QListWidget *list_ange;
    QPushButton *boton_infoAnge;
    QPushButton *boton_carritoAnge;
    QPushButton *boton_celAnge;
    QWidget *tab_5;
    QListWidget *list_Serdan;
    QPushButton *boton_infoSerdan;
    QPushButton *boton_carritoSerdan;
    QPushButton *boton_celSerdan;
    QGroupBox *groupBox;
    QLabel *label_pic;
    QLabel *label_stock;
    QLabel *label_nombre;
    QLabel *label_cam;
    QLabel *label_carga;
    QLabel *label_pantalla;
    QLabel *label_dimensiones;
    QLabel *label_resolucion;
    QLabel *label_peso;
    QLabel *label_tec;
    QLabel *label_memoria;
    QLabel *label_os;
    QLabel *label_precio;
    QLabel *stateLabel;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *AdminWindow)
    {
        if (AdminWindow->objectName().isEmpty())
            AdminWindow->setObjectName(QStringLiteral("AdminWindow"));
        AdminWindow->resize(911, 476);
        centralwidget = new QWidget(AdminWindow);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        tab_sucursales = new QTabWidget(centralwidget);
        tab_sucursales->setObjectName(QStringLiteral("tab_sucursales"));
        tab_sucursales->setGeometry(QRect(10, 10, 491, 351));
        tab = new QWidget();
        tab->setObjectName(QStringLiteral("tab"));
        list_SanAndres = new QListWidget(tab);
        list_SanAndres->setObjectName(QStringLiteral("list_SanAndres"));
        list_SanAndres->setGeometry(QRect(10, 10, 461, 261));
        boton_infoSanAndres = new QPushButton(tab);
        boton_infoSanAndres->setObjectName(QStringLiteral("boton_infoSanAndres"));
        boton_infoSanAndres->setGeometry(QRect(270, 280, 141, 31));
        boton_carritoSanAndres = new QPushButton(tab);
        boton_carritoSanAndres->setObjectName(QStringLiteral("boton_carritoSanAndres"));
        boton_carritoSanAndres->setGeometry(QRect(130, 280, 131, 31));
        boton_celSanAndres = new QPushButton(tab);
        boton_celSanAndres->setObjectName(QStringLiteral("boton_celSanAndres"));
        boton_celSanAndres->setGeometry(QRect(10, 280, 111, 31));
        tab_sucursales->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QStringLiteral("tab_2"));
        list_sonata = new QListWidget(tab_2);
        list_sonata->setObjectName(QStringLiteral("list_sonata"));
        list_sonata->setGeometry(QRect(10, 10, 461, 261));
        boton_infoSonata = new QPushButton(tab_2);
        boton_infoSonata->setObjectName(QStringLiteral("boton_infoSonata"));
        boton_infoSonata->setGeometry(QRect(270, 280, 141, 31));
        boton_carritoSonata = new QPushButton(tab_2);
        boton_carritoSonata->setObjectName(QStringLiteral("boton_carritoSonata"));
        boton_carritoSonata->setGeometry(QRect(130, 280, 131, 31));
        boton_celSonata = new QPushButton(tab_2);
        boton_celSonata->setObjectName(QStringLiteral("boton_celSonata"));
        boton_celSonata->setGeometry(QRect(10, 280, 111, 31));
        tab_sucursales->addTab(tab_2, QString());
        tab_3 = new QWidget();
        tab_3->setObjectName(QStringLiteral("tab_3"));
        list_poniente = new QListWidget(tab_3);
        list_poniente->setObjectName(QStringLiteral("list_poniente"));
        list_poniente->setGeometry(QRect(10, 10, 461, 261));
        boton_carritoPoniente = new QPushButton(tab_3);
        boton_carritoPoniente->setObjectName(QStringLiteral("boton_carritoPoniente"));
        boton_carritoPoniente->setGeometry(QRect(130, 280, 131, 31));
        boton_infoPoniente = new QPushButton(tab_3);
        boton_infoPoniente->setObjectName(QStringLiteral("boton_infoPoniente"));
        boton_infoPoniente->setGeometry(QRect(270, 280, 141, 31));
        boton_celPoniente = new QPushButton(tab_3);
        boton_celPoniente->setObjectName(QStringLiteral("boton_celPoniente"));
        boton_celPoniente->setGeometry(QRect(10, 280, 111, 31));
        tab_sucursales->addTab(tab_3, QString());
        tab_4 = new QWidget();
        tab_4->setObjectName(QStringLiteral("tab_4"));
        list_ange = new QListWidget(tab_4);
        list_ange->setObjectName(QStringLiteral("list_ange"));
        list_ange->setGeometry(QRect(10, 10, 461, 261));
        boton_infoAnge = new QPushButton(tab_4);
        boton_infoAnge->setObjectName(QStringLiteral("boton_infoAnge"));
        boton_infoAnge->setGeometry(QRect(270, 280, 141, 31));
        boton_carritoAnge = new QPushButton(tab_4);
        boton_carritoAnge->setObjectName(QStringLiteral("boton_carritoAnge"));
        boton_carritoAnge->setGeometry(QRect(130, 280, 131, 31));
        boton_celAnge = new QPushButton(tab_4);
        boton_celAnge->setObjectName(QStringLiteral("boton_celAnge"));
        boton_celAnge->setGeometry(QRect(10, 280, 111, 31));
        tab_sucursales->addTab(tab_4, QString());
        tab_5 = new QWidget();
        tab_5->setObjectName(QStringLiteral("tab_5"));
        list_Serdan = new QListWidget(tab_5);
        list_Serdan->setObjectName(QStringLiteral("list_Serdan"));
        list_Serdan->setGeometry(QRect(10, 10, 461, 261));
        boton_infoSerdan = new QPushButton(tab_5);
        boton_infoSerdan->setObjectName(QStringLiteral("boton_infoSerdan"));
        boton_infoSerdan->setGeometry(QRect(270, 280, 141, 31));
        boton_carritoSerdan = new QPushButton(tab_5);
        boton_carritoSerdan->setObjectName(QStringLiteral("boton_carritoSerdan"));
        boton_carritoSerdan->setGeometry(QRect(130, 280, 131, 31));
        boton_celSerdan = new QPushButton(tab_5);
        boton_celSerdan->setObjectName(QStringLiteral("boton_celSerdan"));
        boton_celSerdan->setGeometry(QRect(10, 280, 111, 31));
        tab_sucursales->addTab(tab_5, QString());
        groupBox = new QGroupBox(centralwidget);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setGeometry(QRect(510, 20, 391, 401));
        label_pic = new QLabel(groupBox);
        label_pic->setObjectName(QStringLiteral("label_pic"));
        label_pic->setGeometry(QRect(30, 30, 151, 171));
        label_stock = new QLabel(groupBox);
        label_stock->setObjectName(QStringLiteral("label_stock"));
        label_stock->setGeometry(QRect(200, 40, 151, 41));
        label_nombre = new QLabel(groupBox);
        label_nombre->setObjectName(QStringLiteral("label_nombre"));
        label_nombre->setGeometry(QRect(200, 120, 181, 31));
        QFont font;
        font.setPointSize(10);
        label_nombre->setFont(font);
        label_cam = new QLabel(groupBox);
        label_cam->setObjectName(QStringLiteral("label_cam"));
        label_cam->setGeometry(QRect(10, 220, 371, 16));
        label_carga = new QLabel(groupBox);
        label_carga->setObjectName(QStringLiteral("label_carga"));
        label_carga->setGeometry(QRect(10, 240, 371, 16));
        label_pantalla = new QLabel(groupBox);
        label_pantalla->setObjectName(QStringLiteral("label_pantalla"));
        label_pantalla->setGeometry(QRect(10, 260, 371, 16));
        label_dimensiones = new QLabel(groupBox);
        label_dimensiones->setObjectName(QStringLiteral("label_dimensiones"));
        label_dimensiones->setGeometry(QRect(10, 280, 371, 16));
        label_resolucion = new QLabel(groupBox);
        label_resolucion->setObjectName(QStringLiteral("label_resolucion"));
        label_resolucion->setGeometry(QRect(10, 300, 371, 16));
        label_peso = new QLabel(groupBox);
        label_peso->setObjectName(QStringLiteral("label_peso"));
        label_peso->setGeometry(QRect(10, 320, 371, 16));
        label_tec = new QLabel(groupBox);
        label_tec->setObjectName(QStringLiteral("label_tec"));
        label_tec->setGeometry(QRect(10, 340, 371, 16));
        label_memoria = new QLabel(groupBox);
        label_memoria->setObjectName(QStringLiteral("label_memoria"));
        label_memoria->setGeometry(QRect(10, 360, 371, 16));
        label_os = new QLabel(groupBox);
        label_os->setObjectName(QStringLiteral("label_os"));
        label_os->setGeometry(QRect(10, 380, 371, 16));
        label_precio = new QLabel(groupBox);
        label_precio->setObjectName(QStringLiteral("label_precio"));
        label_precio->setGeometry(QRect(200, 170, 181, 21));
        label_precio->setFont(font);
        stateLabel = new QLabel(centralwidget);
        stateLabel->setObjectName(QStringLiteral("stateLabel"));
        stateLabel->setGeometry(QRect(180, 390, 47, 13));
        AdminWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(AdminWindow);
        menubar->setObjectName(QStringLiteral("menubar"));
        menubar->setGeometry(QRect(0, 0, 911, 21));
        AdminWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(AdminWindow);
        statusbar->setObjectName(QStringLiteral("statusbar"));
        AdminWindow->setStatusBar(statusbar);

        retranslateUi(AdminWindow);

        tab_sucursales->setCurrentIndex(4);


        QMetaObject::connectSlotsByName(AdminWindow);
    } // setupUi

    void retranslateUi(QMainWindow *AdminWindow)
    {
        AdminWindow->setWindowTitle(QApplication::translate("AdminWindow", "MainWindow", nullptr));
        boton_infoSanAndres->setText(QApplication::translate("AdminWindow", "Informaci\303\263n Sucursal", nullptr));
        boton_carritoSanAndres->setText(QApplication::translate("AdminWindow", "Comprar", nullptr));
        boton_celSanAndres->setText(QApplication::translate("AdminWindow", "Ver Celular", nullptr));
        tab_sucursales->setTabText(tab_sucursales->indexOf(tab), QApplication::translate("AdminWindow", "San Andres", nullptr));
        boton_infoSonata->setText(QApplication::translate("AdminWindow", "Informaci\303\263n Sucursal", nullptr));
        boton_carritoSonata->setText(QApplication::translate("AdminWindow", "Comprar", nullptr));
        boton_celSonata->setText(QApplication::translate("AdminWindow", "Ver Celular", nullptr));
        tab_sucursales->setTabText(tab_sucursales->indexOf(tab_2), QApplication::translate("AdminWindow", "Sonata", nullptr));
        boton_carritoPoniente->setText(QApplication::translate("AdminWindow", "Comprar", nullptr));
        boton_infoPoniente->setText(QApplication::translate("AdminWindow", "Informaci\303\263n Sucursal", nullptr));
        boton_celPoniente->setText(QApplication::translate("AdminWindow", "Ver Celular", nullptr));
        tab_sucursales->setTabText(tab_sucursales->indexOf(tab_3), QApplication::translate("AdminWindow", "31 Poniente", nullptr));
        boton_infoAnge->setText(QApplication::translate("AdminWindow", "Informaci\303\263n Sucursal", nullptr));
        boton_carritoAnge->setText(QApplication::translate("AdminWindow", "Comprar", nullptr));
        boton_celAnge->setText(QApplication::translate("AdminWindow", "Ver Celular", nullptr));
        tab_sucursales->setTabText(tab_sucursales->indexOf(tab_4), QApplication::translate("AdminWindow", "Angel\303\263polis", nullptr));
        boton_infoSerdan->setText(QApplication::translate("AdminWindow", "Informaci\303\263n Sucursal", nullptr));
        boton_carritoSerdan->setText(QApplication::translate("AdminWindow", "Comprar", nullptr));
        boton_celSerdan->setText(QApplication::translate("AdminWindow", "Ver Celular", nullptr));
        tab_sucursales->setTabText(tab_sucursales->indexOf(tab_5), QApplication::translate("AdminWindow", "Galerias Serdan", nullptr));
        groupBox->setTitle(QApplication::translate("AdminWindow", "Caracter\303\255sticas:", nullptr));
        label_pic->setText(QApplication::translate("AdminWindow", "<p style=\"text-align:center;\">Im\303\241gen del Tel\303\251fono </p>", nullptr));
        label_stock->setText(QApplication::translate("AdminWindow", "<b>STOCK:</b>", nullptr));
        label_nombre->setText(QApplication::translate("AdminWindow", "Nombre:", nullptr));
        label_cam->setText(QApplication::translate("AdminWindow", "Camara:", nullptr));
        label_carga->setText(QApplication::translate("AdminWindow", "Tiempo de carga:", nullptr));
        label_pantalla->setText(QApplication::translate("AdminWindow", "Pantalla:", nullptr));
        label_dimensiones->setText(QApplication::translate("AdminWindow", "Dimensiones:", nullptr));
        label_resolucion->setText(QApplication::translate("AdminWindow", "Resolucion:", nullptr));
        label_peso->setText(QApplication::translate("AdminWindow", "Peso:", nullptr));
        label_tec->setText(QApplication::translate("AdminWindow", "Tecnologia:", nullptr));
        label_memoria->setText(QApplication::translate("AdminWindow", "Memoria:", nullptr));
        label_os->setText(QApplication::translate("AdminWindow", "OS:", nullptr));
        label_precio->setText(QApplication::translate("AdminWindow", "Precio:", nullptr));
        stateLabel->setText(QApplication::translate("AdminWindow", "TextLabel", nullptr));
    } // retranslateUi

};

namespace Ui {
    class AdminWindow: public Ui_AdminWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADMINWINDOW_H
