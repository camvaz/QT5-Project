/********************************************************************************
** Form generated from reading UI file 'storesonata.ui'
**
** Created by: Qt User Interface Compiler version 5.11.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_STORESONATA_H
#define UI_STORESONATA_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_storeSonata
{
public:
    QLabel *label;
    QLabel *label_direccion;
    QPushButton *pushButton;

    void setupUi(QDialog *storeSonata)
    {
        if (storeSonata->objectName().isEmpty())
            storeSonata->setObjectName(QStringLiteral("storeSonata"));
        storeSonata->resize(697, 435);
        label = new QLabel(storeSonata);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(80, 10, 581, 341));
        label->setPixmap(QPixmap(QString::fromUtf8(":/grafo/img/sucursales/grafo3.jpg")));
        label_direccion = new QLabel(storeSonata);
        label_direccion->setObjectName(QStringLiteral("label_direccion"));
        label_direccion->setGeometry(QRect(20, 370, 531, 31));
        QFont font;
        font.setPointSize(12);
        label_direccion->setFont(font);
        pushButton = new QPushButton(storeSonata);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(570, 370, 111, 31));

        retranslateUi(storeSonata);

        QMetaObject::connectSlotsByName(storeSonata);
    } // setupUi

    void retranslateUi(QDialog *storeSonata)
    {
        storeSonata->setWindowTitle(QApplication::translate("storeSonata", "Dialog", nullptr));
        label->setText(QString());
        label_direccion->setText(QApplication::translate("storeSonata", "TextLabel", nullptr));
        pushButton->setText(QApplication::translate("storeSonata", "Cerrar", nullptr));
    } // retranslateUi

};

namespace Ui {
    class storeSonata: public Ui_storeSonata {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_STORESONATA_H
