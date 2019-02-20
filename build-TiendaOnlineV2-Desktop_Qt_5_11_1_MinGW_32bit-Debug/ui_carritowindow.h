/********************************************************************************
** Form generated from reading UI file 'carritowindow.ui'
**
** Created by: Qt User Interface Compiler version 5.11.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CARRITOWINDOW_H
#define UI_CARRITOWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QTableWidget>

QT_BEGIN_NAMESPACE

class Ui_carritoWindow
{
public:
    QTableWidget *tableWidget;

    void setupUi(QDialog *carritoWindow)
    {
        if (carritoWindow->objectName().isEmpty())
            carritoWindow->setObjectName(QStringLiteral("carritoWindow"));
        carritoWindow->resize(596, 328);
        tableWidget = new QTableWidget(carritoWindow);
        tableWidget->setObjectName(QStringLiteral("tableWidget"));
        tableWidget->setGeometry(QRect(100, 50, 301, 151));

        retranslateUi(carritoWindow);

        QMetaObject::connectSlotsByName(carritoWindow);
    } // setupUi

    void retranslateUi(QDialog *carritoWindow)
    {
        carritoWindow->setWindowTitle(QApplication::translate("carritoWindow", "Dialog", nullptr));
    } // retranslateUi

};

namespace Ui {
    class carritoWindow: public Ui_carritoWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CARRITOWINDOW_H
