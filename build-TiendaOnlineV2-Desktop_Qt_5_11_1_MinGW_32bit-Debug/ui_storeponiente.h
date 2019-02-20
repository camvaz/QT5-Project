/********************************************************************************
** Form generated from reading UI file 'storeponiente.ui'
**
** Created by: Qt User Interface Compiler version 5.11.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_STOREPONIENTE_H
#define UI_STOREPONIENTE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_storePoniente
{
public:
    QLabel *label_direccion;
    QLabel *label;
    QPushButton *pushButton;

    void setupUi(QDialog *storePoniente)
    {
        if (storePoniente->objectName().isEmpty())
            storePoniente->setObjectName(QStringLiteral("storePoniente"));
        storePoniente->resize(686, 455);
        label_direccion = new QLabel(storePoniente);
        label_direccion->setObjectName(QStringLiteral("label_direccion"));
        label_direccion->setGeometry(QRect(10, 380, 531, 31));
        QFont font;
        font.setPointSize(12);
        label_direccion->setFont(font);
        label = new QLabel(storePoniente);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(70, 20, 581, 341));
        label->setPixmap(QPixmap(QString::fromUtf8(":/grafo/img/sucursales/grafo3.jpg")));
        pushButton = new QPushButton(storePoniente);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(560, 380, 111, 31));

        retranslateUi(storePoniente);

        QMetaObject::connectSlotsByName(storePoniente);
    } // setupUi

    void retranslateUi(QDialog *storePoniente)
    {
        storePoniente->setWindowTitle(QApplication::translate("storePoniente", "Dialog", nullptr));
        label_direccion->setText(QApplication::translate("storePoniente", "TextLabel", nullptr));
        label->setText(QString());
        pushButton->setText(QApplication::translate("storePoniente", "Cerrar", nullptr));
    } // retranslateUi

};

namespace Ui {
    class storePoniente: public Ui_storePoniente {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_STOREPONIENTE_H
