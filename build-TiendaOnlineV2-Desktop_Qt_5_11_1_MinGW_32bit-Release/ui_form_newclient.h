/********************************************************************************
** Form generated from reading UI file 'form_newclient.ui'
**
** Created by: Qt User Interface Compiler version 5.11.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FORM_NEWCLIENT_H
#define UI_FORM_NEWCLIENT_H

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

class Ui_Form_newClient
{
public:
    QWidget *layoutWidget;
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
    QLineEdit *linePago;
    QLineEdit *lineTelefono;
    QLineEdit *lineCalle;
    QLineEdit *lineNo;
    QLineEdit *lineColonia;
    QLineEdit *lineCP;
    QLineEdit *lineCiudad;
    QLineEdit *linePass;
    QWidget *layoutWidget_2;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QLabel *label_11;
    QLabel *label_12;
    QLineEdit *lineID;

    void setupUi(QDialog *Form_newClient)
    {
        if (Form_newClient->objectName().isEmpty())
            Form_newClient->setObjectName(QStringLiteral("Form_newClient"));
        Form_newClient->resize(500, 385);
        layoutWidget = new QWidget(Form_newClient);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(10, 80, 481, 262));
        horizontalLayout = new QHBoxLayout(layoutWidget);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        label = new QLabel(layoutWidget);
        label->setObjectName(QStringLiteral("label"));
        QFont font;
        font.setPointSize(10);
        label->setFont(font);

        verticalLayout_2->addWidget(label);

        label_2 = new QLabel(layoutWidget);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setFont(font);

        verticalLayout_2->addWidget(label_2);

        label_7 = new QLabel(layoutWidget);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setFont(font);

        verticalLayout_2->addWidget(label_7);

        label_3 = new QLabel(layoutWidget);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setFont(font);

        verticalLayout_2->addWidget(label_3);

        label_4 = new QLabel(layoutWidget);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setFont(font);

        verticalLayout_2->addWidget(label_4);

        label_5 = new QLabel(layoutWidget);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setFont(font);

        verticalLayout_2->addWidget(label_5);

        label_6 = new QLabel(layoutWidget);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setFont(font);

        verticalLayout_2->addWidget(label_6);

        label_8 = new QLabel(layoutWidget);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setFont(font);

        verticalLayout_2->addWidget(label_8);

        label_9 = new QLabel(layoutWidget);
        label_9->setObjectName(QStringLiteral("label_9"));
        label_9->setFont(font);

        verticalLayout_2->addWidget(label_9);

        label_10 = new QLabel(layoutWidget);
        label_10->setObjectName(QStringLiteral("label_10"));
        label_10->setFont(font);

        verticalLayout_2->addWidget(label_10);


        horizontalLayout->addLayout(verticalLayout_2);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        lineNombre = new QLineEdit(layoutWidget);
        lineNombre->setObjectName(QStringLiteral("lineNombre"));
        lineNombre->setFont(font);

        verticalLayout->addWidget(lineNombre);

        lineApellido = new QLineEdit(layoutWidget);
        lineApellido->setObjectName(QStringLiteral("lineApellido"));
        lineApellido->setFont(font);

        verticalLayout->addWidget(lineApellido);

        linePago = new QLineEdit(layoutWidget);
        linePago->setObjectName(QStringLiteral("linePago"));

        verticalLayout->addWidget(linePago);

        lineTelefono = new QLineEdit(layoutWidget);
        lineTelefono->setObjectName(QStringLiteral("lineTelefono"));

        verticalLayout->addWidget(lineTelefono);

        lineCalle = new QLineEdit(layoutWidget);
        lineCalle->setObjectName(QStringLiteral("lineCalle"));

        verticalLayout->addWidget(lineCalle);

        lineNo = new QLineEdit(layoutWidget);
        lineNo->setObjectName(QStringLiteral("lineNo"));

        verticalLayout->addWidget(lineNo);

        lineColonia = new QLineEdit(layoutWidget);
        lineColonia->setObjectName(QStringLiteral("lineColonia"));

        verticalLayout->addWidget(lineColonia);

        lineCP = new QLineEdit(layoutWidget);
        lineCP->setObjectName(QStringLiteral("lineCP"));

        verticalLayout->addWidget(lineCP);

        lineCiudad = new QLineEdit(layoutWidget);
        lineCiudad->setObjectName(QStringLiteral("lineCiudad"));

        verticalLayout->addWidget(lineCiudad);

        linePass = new QLineEdit(layoutWidget);
        linePass->setObjectName(QStringLiteral("linePass"));

        verticalLayout->addWidget(linePass);


        horizontalLayout->addLayout(verticalLayout);

        layoutWidget_2 = new QWidget(Form_newClient);
        layoutWidget_2->setObjectName(QStringLiteral("layoutWidget_2"));
        layoutWidget_2->setGeometry(QRect(10, 350, 301, 25));
        horizontalLayout_2 = new QHBoxLayout(layoutWidget_2);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        pushButton = new QPushButton(layoutWidget_2);
        pushButton->setObjectName(QStringLiteral("pushButton"));

        horizontalLayout_2->addWidget(pushButton);

        pushButton_2 = new QPushButton(layoutWidget_2);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));

        horizontalLayout_2->addWidget(pushButton_2);

        label_11 = new QLabel(Form_newClient);
        label_11->setObjectName(QStringLiteral("label_11"));
        label_11->setGeometry(QRect(10, 10, 471, 19));
        QFont font1;
        font1.setPointSize(12);
        label_11->setFont(font1);
        label_11->setAlignment(Qt::AlignCenter);
        label_12 = new QLabel(Form_newClient);
        label_12->setObjectName(QStringLiteral("label_12"));
        label_12->setGeometry(QRect(10, 50, 161, 16));
        label_12->setFont(font);
        lineID = new QLineEdit(Form_newClient);
        lineID->setObjectName(QStringLiteral("lineID"));
        lineID->setGeometry(QRect(180, 50, 113, 20));

        retranslateUi(Form_newClient);

        QMetaObject::connectSlotsByName(Form_newClient);
    } // setupUi

    void retranslateUi(QDialog *Form_newClient)
    {
        Form_newClient->setWindowTitle(QApplication::translate("Form_newClient", "Dialog", nullptr));
        label->setText(QApplication::translate("Form_newClient", "Nombre:", nullptr));
        label_2->setText(QApplication::translate("Form_newClient", "Apellidos:", nullptr));
        label_7->setText(QApplication::translate("Form_newClient", "Info. Pago:", nullptr));
        label_3->setText(QApplication::translate("Form_newClient", "Tel\303\251fono:", nullptr));
        label_4->setText(QApplication::translate("Form_newClient", "Calle:", nullptr));
        label_5->setText(QApplication::translate("Form_newClient", "No. Exterior:", nullptr));
        label_6->setText(QApplication::translate("Form_newClient", "Colonia:", nullptr));
        label_8->setText(QApplication::translate("Form_newClient", "C\303\263digo Postal:", nullptr));
        label_9->setText(QApplication::translate("Form_newClient", "Ciudad:", nullptr));
        label_10->setText(QApplication::translate("Form_newClient", "Contrase\303\261a:", nullptr));
        pushButton->setText(QApplication::translate("Form_newClient", "Agregar nuevo cliente", nullptr));
        pushButton_2->setText(QApplication::translate("Form_newClient", "Cancelar", nullptr));
        label_11->setText(QApplication::translate("Form_newClient", "FORMULARIO DE NUEVO CLIENTE", nullptr));
        label_12->setText(QApplication::translate("Form_newClient", "ID(Se usara para login): ", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Form_newClient: public Ui_Form_newClient {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FORM_NEWCLIENT_H
