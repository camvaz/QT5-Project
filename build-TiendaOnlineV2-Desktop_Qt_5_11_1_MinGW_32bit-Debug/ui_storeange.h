/********************************************************************************
** Form generated from reading UI file 'storeange.ui'
**
** Created by: Qt User Interface Compiler version 5.11.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_STOREANGE_H
#define UI_STOREANGE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_storeAnge
{
public:
    QPushButton *pushButton;
    QLabel *label_direccion;
    QLabel *label;

    void setupUi(QDialog *storeAnge)
    {
        if (storeAnge->objectName().isEmpty())
            storeAnge->setObjectName(QStringLiteral("storeAnge"));
        storeAnge->resize(705, 419);
        pushButton = new QPushButton(storeAnge);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(570, 370, 111, 31));
        label_direccion = new QLabel(storeAnge);
        label_direccion->setObjectName(QStringLiteral("label_direccion"));
        label_direccion->setGeometry(QRect(20, 370, 531, 31));
        QFont font;
        font.setPointSize(12);
        label_direccion->setFont(font);
        label = new QLabel(storeAnge);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(80, 10, 581, 341));
        label->setPixmap(QPixmap(QString::fromUtf8(":/grafo/img/sucursales/grafo3.jpg")));

        retranslateUi(storeAnge);

        QMetaObject::connectSlotsByName(storeAnge);
    } // setupUi

    void retranslateUi(QDialog *storeAnge)
    {
        storeAnge->setWindowTitle(QApplication::translate("storeAnge", "Dialog", nullptr));
        pushButton->setText(QApplication::translate("storeAnge", "Cerrar", nullptr));
        label_direccion->setText(QApplication::translate("storeAnge", "TextLabel", nullptr));
        label->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class storeAnge: public Ui_storeAnge {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_STOREANGE_H
