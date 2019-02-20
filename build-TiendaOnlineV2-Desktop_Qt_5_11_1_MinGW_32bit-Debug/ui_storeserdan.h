/********************************************************************************
** Form generated from reading UI file 'storeserdan.ui'
**
** Created by: Qt User Interface Compiler version 5.11.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_STORESERDAN_H
#define UI_STORESERDAN_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_storeSerdan
{
public:
    QLabel *label_direccion;
    QLabel *label;
    QPushButton *pushButton;

    void setupUi(QDialog *storeSerdan)
    {
        if (storeSerdan->objectName().isEmpty())
            storeSerdan->setObjectName(QStringLiteral("storeSerdan"));
        storeSerdan->resize(705, 424);
        label_direccion = new QLabel(storeSerdan);
        label_direccion->setObjectName(QStringLiteral("label_direccion"));
        label_direccion->setGeometry(QRect(10, 370, 531, 31));
        QFont font;
        font.setPointSize(12);
        label_direccion->setFont(font);
        label = new QLabel(storeSerdan);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(70, 10, 581, 341));
        label->setPixmap(QPixmap(QString::fromUtf8(":/grafo/img/sucursales/grafo3.jpg")));
        pushButton = new QPushButton(storeSerdan);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(560, 370, 111, 31));

        retranslateUi(storeSerdan);

        QMetaObject::connectSlotsByName(storeSerdan);
    } // setupUi

    void retranslateUi(QDialog *storeSerdan)
    {
        storeSerdan->setWindowTitle(QApplication::translate("storeSerdan", "Dialog", nullptr));
        label_direccion->setText(QApplication::translate("storeSerdan", "TextLabel", nullptr));
        label->setText(QString());
        pushButton->setText(QApplication::translate("storeSerdan", "Cerrar", nullptr));
    } // retranslateUi

};

namespace Ui {
    class storeSerdan: public Ui_storeSerdan {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_STORESERDAN_H
