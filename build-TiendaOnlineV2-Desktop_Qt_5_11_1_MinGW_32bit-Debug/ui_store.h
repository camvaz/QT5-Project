/********************************************************************************
** Form generated from reading UI file 'store.ui'
**
** Created by: Qt User Interface Compiler version 5.11.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_STORE_H
#define UI_STORE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_Store
{
public:
    QLabel *label;
    QLabel *label_direccion;
    QPushButton *pushButton;

    void setupUi(QDialog *Store)
    {
        if (Store->objectName().isEmpty())
            Store->setObjectName(QStringLiteral("Store"));
        Store->resize(724, 428);
        label = new QLabel(Store);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(80, 10, 581, 341));
        label->setPixmap(QPixmap(QString::fromUtf8(":/grafo/img/sucursales/grafo3.jpg")));
        label_direccion = new QLabel(Store);
        label_direccion->setObjectName(QStringLiteral("label_direccion"));
        label_direccion->setGeometry(QRect(20, 370, 531, 31));
        QFont font;
        font.setPointSize(12);
        label_direccion->setFont(font);
        pushButton = new QPushButton(Store);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(570, 370, 111, 31));

        retranslateUi(Store);

        QMetaObject::connectSlotsByName(Store);
    } // setupUi

    void retranslateUi(QDialog *Store)
    {
        Store->setWindowTitle(QApplication::translate("Store", "Dialog", nullptr));
        label->setText(QString());
        label_direccion->setText(QApplication::translate("Store", "TextLabel", nullptr));
        pushButton->setText(QApplication::translate("Store", "Cerrar", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Store: public Ui_Store {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_STORE_H
