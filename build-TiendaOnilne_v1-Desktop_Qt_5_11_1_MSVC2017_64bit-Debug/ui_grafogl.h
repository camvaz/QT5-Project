/********************************************************************************
** Form generated from reading UI file 'grafogl.ui'
**
** Created by: Qt User Interface Compiler version 5.11.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GRAFOGL_H
#define UI_GRAFOGL_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QOpenGLWidget>

QT_BEGIN_NAMESPACE

class Ui_grafogl
{
public:
    QOpenGLWidget *openGLWidget;
    QOpenGLWidget *openGLWidget_2;

    void setupUi(QDialog *grafogl)
    {
        if (grafogl->objectName().isEmpty())
            grafogl->setObjectName(QStringLiteral("grafogl"));
        grafogl->resize(512, 308);
        openGLWidget = new QOpenGLWidget(grafogl);
        openGLWidget->setObjectName(QStringLiteral("openGLWidget"));
        openGLWidget->setGeometry(QRect(-130, 510, 300, 200));
        openGLWidget_2 = new QOpenGLWidget(grafogl);
        openGLWidget_2->setObjectName(QStringLiteral("openGLWidget_2"));
        openGLWidget_2->setGeometry(QRect(130, 40, 300, 200));

        retranslateUi(grafogl);

        QMetaObject::connectSlotsByName(grafogl);
    } // setupUi

    void retranslateUi(QDialog *grafogl)
    {
        grafogl->setWindowTitle(QApplication::translate("grafogl", "Dialog", nullptr));
    } // retranslateUi

};

namespace Ui {
    class grafogl: public Ui_grafogl {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GRAFOGL_H
