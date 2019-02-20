/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.11.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionSobre_Qt;
    QAction *actionNuevo_Cliente;
    QWidget *centralWidget;
    QGroupBox *groupBox;
    QVBoxLayout *verticalLayout_2;
    QLabel *label;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label_2;
    QLineEdit *line_user;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_3;
    QLineEdit *line_pass;
    QPushButton *push_login;
    QPushButton *push_registro;
    QLabel *label_pic;
    QLabel *stateLabel;
    QMenuBar *menuBar;
    QMenu *menuOpciones;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(541, 387);
        MainWindow->setStyleSheet(QLatin1String("*{\n"
"background-color: #f7f2ea;\n"
"color: #7a0606;\n"
"font-family: VCR,Courier New,Courier,Lucida Sans Typewriter,Lucida Typewriter,monospace;\n"
"}\n"
"\n"
"QPushButton{\n"
"background-color: #cbbeb5;\n"
"}\n"
"\n"
""));
        actionSobre_Qt = new QAction(MainWindow);
        actionSobre_Qt->setObjectName(QStringLiteral("actionSobre_Qt"));
        QIcon icon;
        icon.addFile(QStringLiteral(":/Icons/img/png/007-package.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionSobre_Qt->setIcon(icon);
        actionNuevo_Cliente = new QAction(MainWindow);
        actionNuevo_Cliente->setObjectName(QStringLiteral("actionNuevo_Cliente"));
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/Icons/img/png/004-businessman.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionNuevo_Cliente->setIcon(icon1);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        groupBox = new QGroupBox(centralWidget);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setGeometry(QRect(244, 20, 271, 281));
        verticalLayout_2 = new QVBoxLayout(groupBox);
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setContentsMargins(11, 11, 11, 11);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        label = new QLabel(groupBox);
        label->setObjectName(QStringLiteral("label"));
        QFont font;
        font.setFamily(QStringLiteral("VCR,Courier New,Courier,Lucida Sans Typewriter,Lucida Typewriter,monospace"));
        font.setPointSize(14);
        label->setFont(font);
        label->setStyleSheet(QLatin1String("text-align:center;\n"
""));
        label->setAlignment(Qt::AlignCenter);

        verticalLayout_2->addWidget(label);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(6);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        label_2 = new QLabel(groupBox);
        label_2->setObjectName(QStringLiteral("label_2"));

        horizontalLayout->addWidget(label_2);

        line_user = new QLineEdit(groupBox);
        line_user->setObjectName(QStringLiteral("line_user"));

        horizontalLayout->addWidget(line_user);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        label_3 = new QLabel(groupBox);
        label_3->setObjectName(QStringLiteral("label_3"));

        horizontalLayout_2->addWidget(label_3);

        line_pass = new QLineEdit(groupBox);
        line_pass->setObjectName(QStringLiteral("line_pass"));
        line_pass->setEchoMode(QLineEdit::Password);

        horizontalLayout_2->addWidget(line_pass);


        verticalLayout->addLayout(horizontalLayout_2);

        push_login = new QPushButton(groupBox);
        push_login->setObjectName(QStringLiteral("push_login"));

        verticalLayout->addWidget(push_login);

        push_registro = new QPushButton(groupBox);
        push_registro->setObjectName(QStringLiteral("push_registro"));

        verticalLayout->addWidget(push_registro);


        verticalLayout_2->addLayout(verticalLayout);

        label_pic = new QLabel(centralWidget);
        label_pic->setObjectName(QStringLiteral("label_pic"));
        label_pic->setGeometry(QRect(20, 50, 181, 181));
        label_pic->setPixmap(QPixmap(QString::fromUtf8(":/celulares/img/celulares/iPhoneXR.png")));
        label_pic->setScaledContents(true);
        stateLabel = new QLabel(centralWidget);
        stateLabel->setObjectName(QStringLiteral("stateLabel"));
        stateLabel->setGeometry(QRect(110, 250, 47, 13));
        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 541, 21));
        menuOpciones = new QMenu(menuBar);
        menuOpciones->setObjectName(QStringLiteral("menuOpciones"));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        statusBar->setToolTipDuration(-1);
        MainWindow->setStatusBar(statusBar);

        menuBar->addAction(menuOpciones->menuAction());
        menuOpciones->addAction(actionNuevo_Cliente);
        menuOpciones->addSeparator();
        menuOpciones->addAction(actionSobre_Qt);
        mainToolBar->addAction(actionNuevo_Cliente);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", nullptr));
        actionSobre_Qt->setText(QApplication::translate("MainWindow", "Sobre Qt", nullptr));
        actionNuevo_Cliente->setText(QApplication::translate("MainWindow", "Nuevo Cliente", nullptr));
        groupBox->setTitle(QApplication::translate("MainWindow", "Log In", nullptr));
        label->setText(QApplication::translate("MainWindow", "<p style: \"text-align:center; \">SMARTPHONE<br>ONLINE<br>STORE</p>", nullptr));
        label_2->setText(QApplication::translate("MainWindow", "      ID:", nullptr));
        label_3->setText(QApplication::translate("MainWindow", "Password:", nullptr));
        push_login->setText(QApplication::translate("MainWindow", "Iniciar Sesi\303\263n", nullptr));
        push_registro->setText(QApplication::translate("MainWindow", "Registro", nullptr));
        label_pic->setText(QString());
        stateLabel->setText(QString());
        menuOpciones->setTitle(QApplication::translate("MainWindow", "Opciones", nullptr));
#ifndef QT_NO_TOOLTIP
        statusBar->setToolTip(QString());
#endif // QT_NO_TOOLTIP
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
