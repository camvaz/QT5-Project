/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.11.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

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
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QTabWidget *tabWidget;
    QWidget *suc_sonata;
    QListWidget *list_Sonata;
    QPushButton *info_sonata;
    QWidget *suc_SanAndres;
    QListWidget *list_SanAndres;
    QPushButton *info_SanAndres;
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
    QLabel *label;
    QLabel *label_;
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
    QWidget *widget;
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
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(963, 503);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        tabWidget = new QTabWidget(centralwidget);
        tabWidget->setObjectName(QStringLiteral("tabWidget"));
        tabWidget->setGeometry(QRect(10, 30, 601, 421));
        suc_sonata = new QWidget();
        suc_sonata->setObjectName(QStringLiteral("suc_sonata"));
        list_Sonata = new QListWidget(suc_sonata);
        list_Sonata->setObjectName(QStringLiteral("list_Sonata"));
        list_Sonata->setGeometry(QRect(10, 10, 571, 351));
        info_sonata = new QPushButton(suc_sonata);
        info_sonata->setObjectName(QStringLiteral("info_sonata"));
        info_sonata->setGeometry(QRect(450, 370, 131, 21));
        tabWidget->addTab(suc_sonata, QString());
        suc_SanAndres = new QWidget();
        suc_SanAndres->setObjectName(QStringLiteral("suc_SanAndres"));
        list_SanAndres = new QListWidget(suc_SanAndres);
        list_SanAndres->setObjectName(QStringLiteral("list_SanAndres"));
        list_SanAndres->setGeometry(QRect(10, 10, 571, 351));
        info_SanAndres = new QPushButton(suc_SanAndres);
        info_SanAndres->setObjectName(QStringLiteral("info_SanAndres"));
        info_SanAndres->setGeometry(QRect(450, 370, 131, 21));
        tabWidget->addTab(suc_SanAndres, QString());
        suc_31 = new QWidget();
        suc_31->setObjectName(QStringLiteral("suc_31"));
        list_31 = new QListWidget(suc_31);
        list_31->setObjectName(QStringLiteral("list_31"));
        list_31->setGeometry(QRect(10, 10, 571, 351));
        info_31 = new QPushButton(suc_31);
        info_31->setObjectName(QStringLiteral("info_31"));
        info_31->setGeometry(QRect(450, 370, 131, 21));
        tabWidget->addTab(suc_31, QString());
        suc_Galerias = new QWidget();
        suc_Galerias->setObjectName(QStringLiteral("suc_Galerias"));
        list_Galerias = new QListWidget(suc_Galerias);
        list_Galerias->setObjectName(QStringLiteral("list_Galerias"));
        list_Galerias->setGeometry(QRect(10, 10, 571, 351));
        info_Galerias = new QPushButton(suc_Galerias);
        info_Galerias->setObjectName(QStringLiteral("info_Galerias"));
        info_Galerias->setGeometry(QRect(450, 370, 131, 21));
        tabWidget->addTab(suc_Galerias, QString());
        suc_Ange = new QWidget();
        suc_Ange->setObjectName(QStringLiteral("suc_Ange"));
        list_Ange = new QListWidget(suc_Ange);
        list_Ange->setObjectName(QStringLiteral("list_Ange"));
        list_Ange->setGeometry(QRect(10, 10, 571, 351));
        info_Ange = new QPushButton(suc_Ange);
        info_Ange->setObjectName(QStringLiteral("info_Ange"));
        info_Ange->setGeometry(QRect(450, 370, 131, 21));
        tabWidget->addTab(suc_Ange, QString());
        groupBox = new QGroupBox(centralwidget);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setGeometry(QRect(640, 30, 311, 421));
        label = new QLabel(groupBox);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(60, 30, 201, 171));
        label->setMargin(0);
        label_ = new QLabel(groupBox);
        label_->setObjectName(QStringLiteral("label_"));
        label_->setGeometry(QRect(20, 210, 281, 31));
        layoutWidget = new QWidget(groupBox);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(130, 250, 171, 167));
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

        widget = new QWidget(groupBox);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setGeometry(QRect(20, 250, 100, 167));
        verticalLayout = new QVBoxLayout(widget);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        label_2 = new QLabel(widget);
        label_2->setObjectName(QStringLiteral("label_2"));

        verticalLayout->addWidget(label_2);

        label_3 = new QLabel(widget);
        label_3->setObjectName(QStringLiteral("label_3"));

        verticalLayout->addWidget(label_3);

        label_4 = new QLabel(widget);
        label_4->setObjectName(QStringLiteral("label_4"));

        verticalLayout->addWidget(label_4);

        label_5 = new QLabel(widget);
        label_5->setObjectName(QStringLiteral("label_5"));

        verticalLayout->addWidget(label_5);

        label_7 = new QLabel(widget);
        label_7->setObjectName(QStringLiteral("label_7"));

        verticalLayout->addWidget(label_7);

        label_8 = new QLabel(widget);
        label_8->setObjectName(QStringLiteral("label_8"));

        verticalLayout->addWidget(label_8);

        label_9 = new QLabel(widget);
        label_9->setObjectName(QStringLiteral("label_9"));

        verticalLayout->addWidget(label_9);

        label_10 = new QLabel(widget);
        label_10->setObjectName(QStringLiteral("label_10"));

        verticalLayout->addWidget(label_10);

        label_11 = new QLabel(widget);
        label_11->setObjectName(QStringLiteral("label_11"));

        verticalLayout->addWidget(label_11);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QStringLiteral("menubar"));
        menubar->setGeometry(QRect(0, 0, 963, 21));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QStringLiteral("statusbar"));
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", nullptr));
        info_sonata->setText(QApplication::translate("MainWindow", "Informaci\303\263n de sucursal", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(suc_sonata), QApplication::translate("MainWindow", "Sonata", nullptr));
        info_SanAndres->setText(QApplication::translate("MainWindow", "Informaci\303\263n de sucursal", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(suc_SanAndres), QApplication::translate("MainWindow", "San Andr\303\251s", nullptr));
        info_31->setText(QApplication::translate("MainWindow", "Informaci\303\263n de sucursal", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(suc_31), QApplication::translate("MainWindow", "31 Poniente", nullptr));
        info_Galerias->setText(QApplication::translate("MainWindow", "Informaci\303\263n de sucursal", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(suc_Galerias), QApplication::translate("MainWindow", "Galer\303\255as Serd\303\241n", nullptr));
        info_Ange->setText(QApplication::translate("MainWindow", "Informaci\303\263n de sucursal", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(suc_Ange), QApplication::translate("MainWindow", "Angel\303\263polis", nullptr));
        groupBox->setTitle(QApplication::translate("MainWindow", "Caracter\303\255sticas", nullptr));
        label->setText(QApplication::translate("MainWindow", "Haga click en un dispositivo<br> para ver informaci\303\263n", nullptr));
        label_->setText(QApplication::translate("MainWindow", "<p style=\"text-align: center\">Nombre del celular</p>", nullptr));
        label_tec->setText(QString());
        label_OS->setText(QString());
        label_peso->setText(QString());
        label_dimension->setText(QString());
        label_camara->setText(QString());
        label_tampantalla->setText(QString());
        label_res->setText(QString());
        label_carga->setText(QString());
        label_memoria->setText(QString());
        label_2->setText(QApplication::translate("MainWindow", "Tecnolog\303\255a:", nullptr));
        label_3->setText(QApplication::translate("MainWindow", "OS:", nullptr));
        label_4->setText(QApplication::translate("MainWindow", "Peso:", nullptr));
        label_5->setText(QApplication::translate("MainWindow", "Dimensiones:", nullptr));
        label_7->setText(QApplication::translate("MainWindow", "C\303\241mara:", nullptr));
        label_8->setText(QApplication::translate("MainWindow", "Tama\303\261o de pantalla:", nullptr));
        label_9->setText(QApplication::translate("MainWindow", "Resoluci\303\263n:", nullptr));
        label_10->setText(QApplication::translate("MainWindow", "Tiempo de carga:", nullptr));
        label_11->setText(QApplication::translate("MainWindow", "Memoria:", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
