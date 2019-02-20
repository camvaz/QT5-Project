/********************************************************************************
** Form generated from reading UI file 'formulariocliente.ui'
**
** Created by: Qt User Interface Compiler version 5.11.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FORMULARIOCLIENTE_H
#define UI_FORMULARIOCLIENTE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_formularioCliente
{
public:
    QLabel *label_11;
    QWidget *widget;
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout_2;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_7;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *label_6;
    QLabel *label_8;
    QLabel *label_9;
    QLabel *label_10;
    QVBoxLayout *verticalLayout;
    QLineEdit *lineNombre;
    QLineEdit *lineApellido;
    QLineEdit *lineSexo;
    QLineEdit *lineTelefono;
    QLineEdit *lineCalle;
    QLineEdit *lineNo;
    QLineEdit *lineColonia;
    QLineEdit *lineCP;
    QLineEdit *lineCiudad;
    QLineEdit *linePass;
    QWidget *widget1;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *pushButton;
    QPushButton *pushButton_2;

    void setupUi(QDialog *formularioCliente)
    {
        if (formularioCliente->objectName().isEmpty())
            formularioCliente->setObjectName(QStringLiteral("formularioCliente"));
        formularioCliente->resize(504, 375);
        label_11 = new QLabel(formularioCliente);
        label_11->setObjectName(QStringLiteral("label_11"));
        label_11->setGeometry(QRect(9, 9, 201, 19));
        QFont font;
        font.setPointSize(12);
        label_11->setFont(font);
        label_11->setAlignment(Qt::AlignCenter);
        widget = new QWidget(formularioCliente);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setGeometry(QRect(9, 61, 481, 262));
        horizontalLayout = new QHBoxLayout(widget);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        label = new QLabel(widget);
        label->setObjectName(QStringLiteral("label"));
        QFont font1;
        font1.setPointSize(10);
        label->setFont(font1);

        verticalLayout_2->addWidget(label);

        label_2 = new QLabel(widget);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setFont(font1);

        verticalLayout_2->addWidget(label_2);

        label_7 = new QLabel(widget);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setFont(font1);

        verticalLayout_2->addWidget(label_7);

        label_3 = new QLabel(widget);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setFont(font1);

        verticalLayout_2->addWidget(label_3);

        label_4 = new QLabel(widget);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setFont(font1);

        verticalLayout_2->addWidget(label_4);

        label_5 = new QLabel(widget);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setFont(font1);

        verticalLayout_2->addWidget(label_5);

        label_6 = new QLabel(widget);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setFont(font1);

        verticalLayout_2->addWidget(label_6);

        label_8 = new QLabel(widget);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setFont(font1);

        verticalLayout_2->addWidget(label_8);

        label_9 = new QLabel(widget);
        label_9->setObjectName(QStringLiteral("label_9"));
        label_9->setFont(font1);

        verticalLayout_2->addWidget(label_9);

        label_10 = new QLabel(widget);
        label_10->setObjectName(QStringLiteral("label_10"));
        label_10->setFont(font1);

        verticalLayout_2->addWidget(label_10);


        horizontalLayout->addLayout(verticalLayout_2);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        lineNombre = new QLineEdit(widget);
        lineNombre->setObjectName(QStringLiteral("lineNombre"));
        lineNombre->setFont(font1);

        verticalLayout->addWidget(lineNombre);

        lineApellido = new QLineEdit(widget);
        lineApellido->setObjectName(QStringLiteral("lineApellido"));
        lineApellido->setFont(font1);

        verticalLayout->addWidget(lineApellido);

        lineSexo = new QLineEdit(widget);
        lineSexo->setObjectName(QStringLiteral("lineSexo"));

        verticalLayout->addWidget(lineSexo);

        lineTelefono = new QLineEdit(widget);
        lineTelefono->setObjectName(QStringLiteral("lineTelefono"));

        verticalLayout->addWidget(lineTelefono);

        lineCalle = new QLineEdit(widget);
        lineCalle->setObjectName(QStringLiteral("lineCalle"));

        verticalLayout->addWidget(lineCalle);

        lineNo = new QLineEdit(widget);
        lineNo->setObjectName(QStringLiteral("lineNo"));

        verticalLayout->addWidget(lineNo);

        lineColonia = new QLineEdit(widget);
        lineColonia->setObjectName(QStringLiteral("lineColonia"));

        verticalLayout->addWidget(lineColonia);

        lineCP = new QLineEdit(widget);
        lineCP->setObjectName(QStringLiteral("lineCP"));

        verticalLayout->addWidget(lineCP);

        lineCiudad = new QLineEdit(widget);
        lineCiudad->setObjectName(QStringLiteral("lineCiudad"));

        verticalLayout->addWidget(lineCiudad);

        linePass = new QLineEdit(widget);
        linePass->setObjectName(QStringLiteral("linePass"));

        verticalLayout->addWidget(linePass);


        horizontalLayout->addLayout(verticalLayout);

        widget1 = new QWidget(formularioCliente);
        widget1->setObjectName(QStringLiteral("widget1"));
        widget1->setGeometry(QRect(10, 330, 301, 25));
        horizontalLayout_2 = new QHBoxLayout(widget1);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        pushButton = new QPushButton(widget1);
        pushButton->setObjectName(QStringLiteral("pushButton"));

        horizontalLayout_2->addWidget(pushButton);

        pushButton_2 = new QPushButton(widget1);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));

        horizontalLayout_2->addWidget(pushButton_2);


        retranslateUi(formularioCliente);

        QMetaObject::connectSlotsByName(formularioCliente);
    } // setupUi

    void retranslateUi(QDialog *formularioCliente)
    {
        formularioCliente->setWindowTitle(QApplication::translate("formularioCliente", "Dialog", nullptr));
        label_11->setText(QApplication::translate("formularioCliente", "FORMULARIO DEL CLIENTE", nullptr));
        label->setText(QApplication::translate("formularioCliente", "Nombre:", nullptr));
        label_2->setText(QApplication::translate("formularioCliente", "Apellidos:", nullptr));
        label_7->setText(QApplication::translate("formularioCliente", "Sexo:", nullptr));
        label_3->setText(QApplication::translate("formularioCliente", "Tel\303\251fono:", nullptr));
        label_4->setText(QApplication::translate("formularioCliente", "Calle:", nullptr));
        label_5->setText(QApplication::translate("formularioCliente", "No. Exterior:", nullptr));
        label_6->setText(QApplication::translate("formularioCliente", "Colonia:", nullptr));
        label_8->setText(QApplication::translate("formularioCliente", "C\303\263digo Postal:", nullptr));
        label_9->setText(QApplication::translate("formularioCliente", "Ciudad:", nullptr));
        label_10->setText(QApplication::translate("formularioCliente", "Contrase\303\261a:", nullptr));
        pushButton->setText(QApplication::translate("formularioCliente", "Agregar nuevo cliente", nullptr));
        pushButton_2->setText(QApplication::translate("formularioCliente", "Cancelar", nullptr));
    } // retranslateUi

};

namespace Ui {
    class formularioCliente: public Ui_formularioCliente {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FORMULARIOCLIENTE_H
