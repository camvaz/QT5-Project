/********************************************************************************
** Form generated from reading UI file 'clientwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.11.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CLIENTWINDOW_H
#define UI_CLIENTWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTableView>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ClientWindow
{
public:
    QAction *actionVer_Carrito;
    QAction *actionVer_perfil;
    QWidget *centralwidget;
    QTabWidget *tabWidget;
    QWidget *suc_SanAndres;
    QPushButton *info_SanAndres;
    QPushButton *info_SanAndres_2;
    QTableView *table_sanAndres;
    QWidget *suc_sonata;
    QPushButton *info_sonata;
    QPushButton *info_SanAndres_3;
    QTableWidget *table_Sonata;
    QWidget *suc_31;
    QPushButton *info_31;
    QPushButton *info_SanAndres_4;
    QTableWidget *table_31;
    QWidget *suc_Galerias;
    QPushButton *info_Galerias;
    QPushButton *info_SanAndres_5;
    QTableWidget *table_Serdan;
    QWidget *suc_Ange;
    QPushButton *info_Ange;
    QPushButton *info_SanAndres_6;
    QTableWidget *table_Ange;
    QGroupBox *groupBox;
    QLabel *label_pic;
    QLabel *label_Nombre;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout_2;
    QLabel *label_tec;
    QLabel *label_OS;
    QLabel *label_peso;
    QLabel *label_dimension;
    QLabel *label_camara;
    QLabel *label_tampantalla;
    QLabel *label_res;
    QLabel *label_carga;
    QLabel *label_memoria;
    QWidget *layoutWidget_2;
    QVBoxLayout *verticalLayout;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *label_7;
    QLabel *label_8;
    QLabel *label_9;
    QLabel *label_10;
    QLabel *label_11;
    QPushButton *pushButton;
    QLabel *labelAUX;
    QMenuBar *menubar;
    QMenu *menuOpciones;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *ClientWindow)
    {
        if (ClientWindow->objectName().isEmpty())
            ClientWindow->setObjectName(QStringLiteral("ClientWindow"));
        ClientWindow->resize(941, 522);
        actionVer_Carrito = new QAction(ClientWindow);
        actionVer_Carrito->setObjectName(QStringLiteral("actionVer_Carrito"));
        QIcon icon;
        icon.addFile(QStringLiteral(":/Icons/img/png/006-shopping-cart.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionVer_Carrito->setIcon(icon);
        actionVer_perfil = new QAction(ClientWindow);
        actionVer_perfil->setObjectName(QStringLiteral("actionVer_perfil"));
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/Icons/img/png/020-businesswoman.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionVer_perfil->setIcon(icon1);
        centralwidget = new QWidget(ClientWindow);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        tabWidget = new QTabWidget(centralwidget);
        tabWidget->setObjectName(QStringLiteral("tabWidget"));
        tabWidget->setGeometry(QRect(0, 20, 611, 431));
        tabWidget->setTabShape(QTabWidget::Triangular);
        suc_SanAndres = new QWidget();
        suc_SanAndres->setObjectName(QStringLiteral("suc_SanAndres"));
        info_SanAndres = new QPushButton(suc_SanAndres);
        info_SanAndres->setObjectName(QStringLiteral("info_SanAndres"));
        info_SanAndres->setGeometry(QRect(390, 370, 201, 21));
        info_SanAndres_2 = new QPushButton(suc_SanAndres);
        info_SanAndres_2->setObjectName(QStringLiteral("info_SanAndres_2"));
        info_SanAndres_2->setGeometry(QRect(170, 370, 201, 21));
        table_sanAndres = new QTableView(suc_SanAndres);
        table_sanAndres->setObjectName(QStringLiteral("table_sanAndres"));
        table_sanAndres->setGeometry(QRect(10, 10, 581, 351));
        tabWidget->addTab(suc_SanAndres, QString());
        suc_sonata = new QWidget();
        suc_sonata->setObjectName(QStringLiteral("suc_sonata"));
        info_sonata = new QPushButton(suc_sonata);
        info_sonata->setObjectName(QStringLiteral("info_sonata"));
        info_sonata->setGeometry(QRect(390, 370, 201, 21));
        info_SanAndres_3 = new QPushButton(suc_sonata);
        info_SanAndres_3->setObjectName(QStringLiteral("info_SanAndres_3"));
        info_SanAndres_3->setGeometry(QRect(170, 370, 201, 21));
        table_Sonata = new QTableWidget(suc_sonata);
        table_Sonata->setObjectName(QStringLiteral("table_Sonata"));
        table_Sonata->setGeometry(QRect(10, 10, 581, 351));
        tabWidget->addTab(suc_sonata, QString());
        suc_31 = new QWidget();
        suc_31->setObjectName(QStringLiteral("suc_31"));
        info_31 = new QPushButton(suc_31);
        info_31->setObjectName(QStringLiteral("info_31"));
        info_31->setGeometry(QRect(390, 370, 201, 21));
        info_SanAndres_4 = new QPushButton(suc_31);
        info_SanAndres_4->setObjectName(QStringLiteral("info_SanAndres_4"));
        info_SanAndres_4->setGeometry(QRect(170, 370, 201, 21));
        table_31 = new QTableWidget(suc_31);
        table_31->setObjectName(QStringLiteral("table_31"));
        table_31->setGeometry(QRect(10, 10, 581, 351));
        tabWidget->addTab(suc_31, QString());
        suc_Galerias = new QWidget();
        suc_Galerias->setObjectName(QStringLiteral("suc_Galerias"));
        info_Galerias = new QPushButton(suc_Galerias);
        info_Galerias->setObjectName(QStringLiteral("info_Galerias"));
        info_Galerias->setGeometry(QRect(390, 370, 201, 21));
        info_SanAndres_5 = new QPushButton(suc_Galerias);
        info_SanAndres_5->setObjectName(QStringLiteral("info_SanAndres_5"));
        info_SanAndres_5->setGeometry(QRect(170, 370, 201, 21));
        table_Serdan = new QTableWidget(suc_Galerias);
        table_Serdan->setObjectName(QStringLiteral("table_Serdan"));
        table_Serdan->setGeometry(QRect(10, 10, 581, 351));
        tabWidget->addTab(suc_Galerias, QString());
        suc_Ange = new QWidget();
        suc_Ange->setObjectName(QStringLiteral("suc_Ange"));
        info_Ange = new QPushButton(suc_Ange);
        info_Ange->setObjectName(QStringLiteral("info_Ange"));
        info_Ange->setGeometry(QRect(390, 370, 201, 21));
        info_SanAndres_6 = new QPushButton(suc_Ange);
        info_SanAndres_6->setObjectName(QStringLiteral("info_SanAndres_6"));
        info_SanAndres_6->setGeometry(QRect(170, 370, 201, 21));
        table_Ange = new QTableWidget(suc_Ange);
        table_Ange->setObjectName(QStringLiteral("table_Ange"));
        table_Ange->setGeometry(QRect(10, 10, 581, 351));
        tabWidget->addTab(suc_Ange, QString());
        groupBox = new QGroupBox(centralwidget);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setGeometry(QRect(610, 20, 321, 471));
        label_pic = new QLabel(groupBox);
        label_pic->setObjectName(QStringLiteral("label_pic"));
        label_pic->setGeometry(QRect(60, 30, 201, 171));
        label_pic->setMargin(0);
        label_Nombre = new QLabel(groupBox);
        label_Nombre->setObjectName(QStringLiteral("label_Nombre"));
        label_Nombre->setGeometry(QRect(20, 210, 281, 31));
        layoutWidget = new QWidget(groupBox);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(160, 250, 141, 176));
        verticalLayout_2 = new QVBoxLayout(layoutWidget);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        label_tec = new QLabel(layoutWidget);
        label_tec->setObjectName(QStringLiteral("label_tec"));

        verticalLayout_2->addWidget(label_tec);

        label_OS = new QLabel(layoutWidget);
        label_OS->setObjectName(QStringLiteral("label_OS"));

        verticalLayout_2->addWidget(label_OS);

        label_peso = new QLabel(layoutWidget);
        label_peso->setObjectName(QStringLiteral("label_peso"));

        verticalLayout_2->addWidget(label_peso);

        label_dimension = new QLabel(layoutWidget);
        label_dimension->setObjectName(QStringLiteral("label_dimension"));

        verticalLayout_2->addWidget(label_dimension);

        label_camara = new QLabel(layoutWidget);
        label_camara->setObjectName(QStringLiteral("label_camara"));

        verticalLayout_2->addWidget(label_camara);

        label_tampantalla = new QLabel(layoutWidget);
        label_tampantalla->setObjectName(QStringLiteral("label_tampantalla"));

        verticalLayout_2->addWidget(label_tampantalla);

        label_res = new QLabel(layoutWidget);
        label_res->setObjectName(QStringLiteral("label_res"));

        verticalLayout_2->addWidget(label_res);

        label_carga = new QLabel(layoutWidget);
        label_carga->setObjectName(QStringLiteral("label_carga"));

        verticalLayout_2->addWidget(label_carga);

        label_memoria = new QLabel(layoutWidget);
        label_memoria->setObjectName(QStringLiteral("label_memoria"));

        verticalLayout_2->addWidget(label_memoria);

        layoutWidget_2 = new QWidget(groupBox);
        layoutWidget_2->setObjectName(QStringLiteral("layoutWidget_2"));
        layoutWidget_2->setGeometry(QRect(20, 250, 135, 176));
        verticalLayout = new QVBoxLayout(layoutWidget_2);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        label_2 = new QLabel(layoutWidget_2);
        label_2->setObjectName(QStringLiteral("label_2"));

        verticalLayout->addWidget(label_2);

        label_3 = new QLabel(layoutWidget_2);
        label_3->setObjectName(QStringLiteral("label_3"));

        verticalLayout->addWidget(label_3);

        label_4 = new QLabel(layoutWidget_2);
        label_4->setObjectName(QStringLiteral("label_4"));

        verticalLayout->addWidget(label_4);

        label_5 = new QLabel(layoutWidget_2);
        label_5->setObjectName(QStringLiteral("label_5"));

        verticalLayout->addWidget(label_5);

        label_7 = new QLabel(layoutWidget_2);
        label_7->setObjectName(QStringLiteral("label_7"));

        verticalLayout->addWidget(label_7);

        label_8 = new QLabel(layoutWidget_2);
        label_8->setObjectName(QStringLiteral("label_8"));

        verticalLayout->addWidget(label_8);

        label_9 = new QLabel(layoutWidget_2);
        label_9->setObjectName(QStringLiteral("label_9"));

        verticalLayout->addWidget(label_9);

        label_10 = new QLabel(layoutWidget_2);
        label_10->setObjectName(QStringLiteral("label_10"));

        verticalLayout->addWidget(label_10);

        label_11 = new QLabel(layoutWidget_2);
        label_11->setObjectName(QStringLiteral("label_11"));

        verticalLayout->addWidget(label_11);

        pushButton = new QPushButton(groupBox);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(220, 440, 75, 23));
        labelAUX = new QLabel(centralwidget);
        labelAUX->setObjectName(QStringLiteral("labelAUX"));
        labelAUX->setGeometry(QRect(70, 460, 261, 16));
        ClientWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(ClientWindow);
        menubar->setObjectName(QStringLiteral("menubar"));
        menubar->setGeometry(QRect(0, 0, 941, 21));
        menuOpciones = new QMenu(menubar);
        menuOpciones->setObjectName(QStringLiteral("menuOpciones"));
        ClientWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(ClientWindow);
        statusbar->setObjectName(QStringLiteral("statusbar"));
        statusbar->setSizeGripEnabled(true);
        ClientWindow->setStatusBar(statusbar);

        menubar->addAction(menuOpciones->menuAction());
        menuOpciones->addAction(actionVer_perfil);
        menuOpciones->addAction(actionVer_Carrito);

        retranslateUi(ClientWindow);

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(ClientWindow);
    } // setupUi

    void retranslateUi(QMainWindow *ClientWindow)
    {
        ClientWindow->setWindowTitle(QApplication::translate("ClientWindow", "MainWindow", nullptr));
        actionVer_Carrito->setText(QApplication::translate("ClientWindow", "Ver Carrito", nullptr));
        actionVer_perfil->setText(QApplication::translate("ClientWindow", "Ver perfil", nullptr));
        info_SanAndres->setText(QApplication::translate("ClientWindow", "Informaci\303\263n de sucursal", nullptr));
        info_SanAndres_2->setText(QApplication::translate("ClientWindow", "Agregar al carrito", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(suc_SanAndres), QApplication::translate("ClientWindow", "San Andr\303\251s", nullptr));
        info_sonata->setText(QApplication::translate("ClientWindow", "Informaci\303\263n de sucursal", nullptr));
        info_SanAndres_3->setText(QApplication::translate("ClientWindow", "Agregar al carrito", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(suc_sonata), QApplication::translate("ClientWindow", "Sonata", nullptr));
        info_31->setText(QApplication::translate("ClientWindow", "Informaci\303\263n de sucursal", nullptr));
        info_SanAndres_4->setText(QApplication::translate("ClientWindow", "Agregar al carrito", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(suc_31), QApplication::translate("ClientWindow", "31 Poniente", nullptr));
        info_Galerias->setText(QApplication::translate("ClientWindow", "Informaci\303\263n de sucursal", nullptr));
        info_SanAndres_5->setText(QApplication::translate("ClientWindow", "Agregar al carrito", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(suc_Galerias), QApplication::translate("ClientWindow", "Galer\303\255as Serd\303\241n", nullptr));
        info_Ange->setText(QApplication::translate("ClientWindow", "Informaci\303\263n de sucursal", nullptr));
        info_SanAndres_6->setText(QApplication::translate("ClientWindow", "Agregar al carrito", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(suc_Ange), QApplication::translate("ClientWindow", "Angel\303\263polis", nullptr));
        groupBox->setTitle(QApplication::translate("ClientWindow", "Caracter\303\255sticas", nullptr));
        label_pic->setText(QApplication::translate("ClientWindow", "Haga click en un dispositivo<br> y en el boton mostrar para<br>ver informaci\303\263n", nullptr));
        label_Nombre->setText(QApplication::translate("ClientWindow", "<p style=\"text-align: center\">Nombre del celular</p>", nullptr));
        label_tec->setText(QString());
        label_OS->setText(QString());
        label_peso->setText(QString());
        label_dimension->setText(QString());
        label_camara->setText(QString());
        label_tampantalla->setText(QString());
        label_res->setText(QString());
        label_carga->setText(QString());
        label_memoria->setText(QString());
        label_2->setText(QApplication::translate("ClientWindow", "Tecnolog\303\255a:", nullptr));
        label_3->setText(QApplication::translate("ClientWindow", "OS:", nullptr));
        label_4->setText(QApplication::translate("ClientWindow", "Peso:", nullptr));
        label_5->setText(QApplication::translate("ClientWindow", "Dimensiones:", nullptr));
        label_7->setText(QApplication::translate("ClientWindow", "C\303\241mara:", nullptr));
        label_8->setText(QApplication::translate("ClientWindow", "Tama\303\261o de pantalla:", nullptr));
        label_9->setText(QApplication::translate("ClientWindow", "Resoluci\303\263n:", nullptr));
        label_10->setText(QApplication::translate("ClientWindow", "Tiempo de carga:", nullptr));
        label_11->setText(QApplication::translate("ClientWindow", "Memoria:", nullptr));
        pushButton->setText(QApplication::translate("ClientWindow", "Mostrar", nullptr));
        labelAUX->setText(QApplication::translate("ClientWindow", "TextLabel", nullptr));
        menuOpciones->setTitle(QApplication::translate("ClientWindow", "Opciones...", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ClientWindow: public Ui_ClientWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CLIENTWINDOW_H
