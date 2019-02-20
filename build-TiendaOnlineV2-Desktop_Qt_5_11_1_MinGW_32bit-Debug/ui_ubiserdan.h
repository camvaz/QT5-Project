/********************************************************************************
** Form generated from reading UI file 'ubiserdan.ui'
**
** Created by: Qt User Interface Compiler version 5.11.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_UBISERDAN_H
#define UI_UBISERDAN_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_ubiSerdan
{
public:
    QLabel *label_direccion;
    QLabel *label;
    QPushButton *pushButton;

    void setupUi(QDialog *ubiSerdan)
    {
        if (ubiSerdan->objectName().isEmpty())
            ubiSerdan->setObjectName(QStringLiteral("ubiSerdan"));
        ubiSerdan->resize(725, 416);
        label_direccion = new QLabel(ubiSerdan);
        label_direccion->setObjectName(QStringLiteral("label_direccion"));
        label_direccion->setGeometry(QRect(10, 370, 531, 31));
        QFont font;
        font.setPointSize(12);
        label_direccion->setFont(font);
        label = new QLabel(ubiSerdan);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(70, 10, 581, 341));
        label->setPixmap(QPixmap(QString::fromUtf8(":/grafo/img/sucursales/grafo3.jpg")));
        pushButton = new QPushButton(ubiSerdan);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(560, 370, 111, 31));

        retranslateUi(ubiSerdan);

        QMetaObject::connectSlotsByName(ubiSerdan);
    } // setupUi

    void retranslateUi(QDialog *ubiSerdan)
    {
        ubiSerdan->setWindowTitle(QApplication::translate("ubiSerdan", "Dialog", nullptr));
        label_direccion->setText(QApplication::translate("ubiSerdan", "TextLabel", nullptr));
        label->setText(QString());
        pushButton->setText(QApplication::translate("ubiSerdan", "Cerrar", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ubiSerdan: public Ui_ubiSerdan {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_UBISERDAN_H
