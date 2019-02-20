/********************************************************************************
** Form generated from reading UI file 'tienda_v1.ui'
**
** Created by: Qt User Interface Compiler version 5.11.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TIENDA_V1_H
#define UI_TIENDA_V1_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Tienda_v1
{
public:
    QAction *actionNueva_orden;
    QAction *actionNuevo_Cliente;
    QAction *actionVisualizar_Sucursales;
    QWidget *centralWidget;
    QTabWidget *tabWidget;
    QWidget *suc_SanAndres;
    QListWidget *list_SanAndres;
    QPushButton *info_SanAndres;
    QWidget *suc_sonata;
    QListWidget *list_Sonata;
    QPushButton *info_sonata;
    QWidget *suc_31;
    QListWidget *list_31;
    QPushButton *info_31;
    QWidget *suc_Galerias;
    QListWidget *list_Galerias;
    QPushButton *info_Galerias;
    QWidget *suc_Ange;
    QListWidget *list_Ange;
    QPushButton *info_Ange;
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
    QMenuBar *menuBar;
    QMenu *menuArchivo;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *Tienda_v1)
    {
        if (Tienda_v1->objectName().isEmpty())
            Tienda_v1->setObjectName(QStringLiteral("Tienda_v1"));
        Tienda_v1->resize(952, 574);
        Tienda_v1->setStyleSheet(QLatin1String("*{\n"
"background-color: #f7f2ea;\n"
"color: #7a0606;\n"
"font-family: VCR,Courier New,Courier,Lucida Sans Typewriter,Lucida Typewriter,monospace;\n"
"}\n"
"\n"
"QPushButton{\n"
"	font-size: 14px;\n"
"	opacity: 0.6;\n"
"	border-radius: 2px; \n"
"	background-color: #d0d0d0;\n"
"	width: 40%;\n"
"	height: 40%;\n"
"}\n"
"\n"
"QPushButton:hover{\n"
"	opacity:1;\n"
"}"));
        actionNueva_orden = new QAction(Tienda_v1);
        actionNueva_orden->setObjectName(QStringLiteral("actionNueva_orden"));
        QIcon icon;
        icon.addFile(QStringLiteral(":/icons/img/png/006-shopping-cart.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionNueva_orden->setIcon(icon);
        actionNueva_orden->setShortcutVisibleInContextMenu(false);
        actionNuevo_Cliente = new QAction(Tienda_v1);
        actionNuevo_Cliente->setObjectName(QStringLiteral("actionNuevo_Cliente"));
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/icons/img/png/004-businessman.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionNuevo_Cliente->setIcon(icon1);
        actionVisualizar_Sucursales = new QAction(Tienda_v1);
        actionVisualizar_Sucursales->setObjectName(QStringLiteral("actionVisualizar_Sucursales"));
        QIcon icon2;
        icon2.addFile(QStringLiteral(":/icons/img/png/023-earth-globe.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionVisualizar_Sucursales->setIcon(icon2);
        centralWidget = new QWidget(Tienda_v1);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        tabWidget = new QTabWidget(centralWidget);
        tabWidget->setObjectName(QStringLiteral("tabWidget"));
        tabWidget->setGeometry(QRect(10, 20, 611, 431));
        tabWidget->setTabShape(QTabWidget::Triangular);
        suc_SanAndres = new QWidget();
        suc_SanAndres->setObjectName(QStringLiteral("suc_SanAndres"));
        list_SanAndres = new QListWidget(suc_SanAndres);
        list_SanAndres->setObjectName(QStringLiteral("list_SanAndres"));
        list_SanAndres->setGeometry(QRect(10, 10, 581, 351));
        info_SanAndres = new QPushButton(suc_SanAndres);
        info_SanAndres->setObjectName(QStringLiteral("info_SanAndres"));
        info_SanAndres->setGeometry(QRect(390, 370, 201, 21));
        tabWidget->addTab(suc_SanAndres, QString());
        suc_sonata = new QWidget();
        suc_sonata->setObjectName(QStringLiteral("suc_sonata"));
        list_Sonata = new QListWidget(suc_sonata);
        list_Sonata->setObjectName(QStringLiteral("list_Sonata"));
        list_Sonata->setGeometry(QRect(10, 10, 581, 351));
        info_sonata = new QPushButton(suc_sonata);
        info_sonata->setObjectName(QStringLiteral("info_sonata"));
        info_sonata->setGeometry(QRect(390, 370, 201, 21));
        tabWidget->addTab(suc_sonata, QString());
        suc_31 = new QWidget();
        suc_31->setObjectName(QStringLiteral("suc_31"));
        list_31 = new QListWidget(suc_31);
        list_31->setObjectName(QStringLiteral("list_31"));
        list_31->setGeometry(QRect(10, 10, 581, 351));
        info_31 = new QPushButton(suc_31);
        info_31->setObjectName(QStringLiteral("info_31"));
        info_31->setGeometry(QRect(390, 370, 201, 21));
        tabWidget->addTab(suc_31, QString());
        suc_Galerias = new QWidget();
        suc_Galerias->setObjectName(QStringLiteral("suc_Galerias"));
        list_Galerias = new QListWidget(suc_Galerias);
        list_Galerias->setObjectName(QStringLiteral("list_Galerias"));
        list_Galerias->setGeometry(QRect(10, 10, 581, 351));
        info_Galerias = new QPushButton(suc_Galerias);
        info_Galerias->setObjectName(QStringLiteral("info_Galerias"));
        info_Galerias->setGeometry(QRect(390, 370, 201, 21));
        tabWidget->addTab(suc_Galerias, QString());
        suc_Ange = new QWidget();
        suc_Ange->setObjectName(QStringLiteral("suc_Ange"));
        list_Ange = new QListWidget(suc_Ange);
        list_Ange->setObjectName(QStringLiteral("list_Ange"));
        list_Ange->setGeometry(QRect(10, 10, 581, 351));
        info_Ange = new QPushButton(suc_Ange);
        info_Ange->setObjectName(QStringLiteral("info_Ange"));
        info_Ange->setGeometry(QRect(390, 370, 201, 21));
        tabWidget->addTab(suc_Ange, QString());
        groupBox = new QGroupBox(centralWidget);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setGeometry(QRect(620, 20, 321, 471));
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
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setContentsMargins(11, 11, 11, 11);
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
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
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
        Tienda_v1->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(Tienda_v1);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 952, 21));
        menuArchivo = new QMenu(menuBar);
        menuArchivo->setObjectName(QStringLiteral("menuArchivo"));
        Tienda_v1->setMenuBar(menuBar);
        mainToolBar = new QToolBar(Tienda_v1);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        Tienda_v1->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(Tienda_v1);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        Tienda_v1->setStatusBar(statusBar);

        menuBar->addAction(menuArchivo->menuAction());
        menuArchivo->addAction(actionNueva_orden);
        menuArchivo->addAction(actionNuevo_Cliente);
        menuArchivo->addSeparator();
        menuArchivo->addAction(actionVisualizar_Sucursales);
        mainToolBar->addAction(actionNueva_orden);
        mainToolBar->addAction(actionNuevo_Cliente);
        mainToolBar->addAction(actionVisualizar_Sucursales);

        retranslateUi(Tienda_v1);

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(Tienda_v1);
    } // setupUi

    void retranslateUi(QMainWindow *Tienda_v1)
    {
        Tienda_v1->setWindowTitle(QApplication::translate("Tienda_v1", "Tienda_v1", nullptr));
        actionNueva_orden->setText(QApplication::translate("Tienda_v1", "Nueva orden...", nullptr));
        actionNuevo_Cliente->setText(QApplication::translate("Tienda_v1", "Nuevo Cliente...", nullptr));
        actionVisualizar_Sucursales->setText(QApplication::translate("Tienda_v1", "Visualizar Sucursales...", nullptr));
        info_SanAndres->setText(QApplication::translate("Tienda_v1", "Informaci\303\263n de sucursal", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(suc_SanAndres), QApplication::translate("Tienda_v1", "San Andr\303\251s", nullptr));
        info_sonata->setText(QApplication::translate("Tienda_v1", "Informaci\303\263n de sucursal", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(suc_sonata), QApplication::translate("Tienda_v1", "Sonata", nullptr));
        info_31->setText(QApplication::translate("Tienda_v1", "Informaci\303\263n de sucursal", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(suc_31), QApplication::translate("Tienda_v1", "31 Poniente", nullptr));
        info_Galerias->setText(QApplication::translate("Tienda_v1", "Informaci\303\263n de sucursal", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(suc_Galerias), QApplication::translate("Tienda_v1", "Galer\303\255as Serd\303\241n", nullptr));
        info_Ange->setText(QApplication::translate("Tienda_v1", "Informaci\303\263n de sucursal", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(suc_Ange), QApplication::translate("Tienda_v1", "Angel\303\263polis", nullptr));
        groupBox->setTitle(QApplication::translate("Tienda_v1", "Caracter\303\255sticas", nullptr));
        label_pic->setText(QApplication::translate("Tienda_v1", "Haga click en un dispositivo<br> y en el boton mostrar para<br>ver informaci\303\263n", nullptr));
        label_Nombre->setText(QApplication::translate("Tienda_v1", "<p style=\"text-align: center\">Nombre del celular</p>", nullptr));
        label_tec->setText(QString());
        label_OS->setText(QString());
        label_peso->setText(QString());
        label_dimension->setText(QString());
        label_camara->setText(QString());
        label_tampantalla->setText(QString());
        label_res->setText(QString());
        label_carga->setText(QString());
        label_memoria->setText(QString());
        label_2->setText(QApplication::translate("Tienda_v1", "Tecnolog\303\255a:", nullptr));
        label_3->setText(QApplication::translate("Tienda_v1", "OS:", nullptr));
        label_4->setText(QApplication::translate("Tienda_v1", "Peso:", nullptr));
        label_5->setText(QApplication::translate("Tienda_v1", "Dimensiones:", nullptr));
        label_7->setText(QApplication::translate("Tienda_v1", "C\303\241mara:", nullptr));
        label_8->setText(QApplication::translate("Tienda_v1", "Tama\303\261o de pantalla:", nullptr));
        label_9->setText(QApplication::translate("Tienda_v1", "Resoluci\303\263n:", nullptr));
        label_10->setText(QApplication::translate("Tienda_v1", "Tiempo de carga:", nullptr));
        label_11->setText(QApplication::translate("Tienda_v1", "Memoria:", nullptr));
        pushButton->setText(QApplication::translate("Tienda_v1", "Mostrar", nullptr));
        menuArchivo->setTitle(QApplication::translate("Tienda_v1", "Archivo", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Tienda_v1: public Ui_Tienda_v1 {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TIENDA_V1_H
