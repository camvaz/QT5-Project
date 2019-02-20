/********************************************************************************
** Form generated from reading UI file 'login.ui'
**
** Created by: Qt User Interface Compiler version 5.11.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOGIN_H
#define UI_LOGIN_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_logIn
{
public:
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
    QPushButton *pushButton;
    QLabel *label_pic;

    void setupUi(QDialog *logIn)
    {
        if (logIn->objectName().isEmpty())
            logIn->setObjectName(QStringLiteral("logIn"));
        logIn->resize(475, 266);
        groupBox = new QGroupBox(logIn);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setGeometry(QRect(230, 30, 215, 201));
        verticalLayout_2 = new QVBoxLayout(groupBox);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        label = new QLabel(groupBox);
        label->setObjectName(QStringLiteral("label"));
        QFont font;
        font.setPointSize(14);
        label->setFont(font);
        label->setStyleSheet(QLatin1String("text-align:center;\n"
""));
        label->setAlignment(Qt::AlignCenter);

        verticalLayout_2->addWidget(label);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        label_2 = new QLabel(groupBox);
        label_2->setObjectName(QStringLiteral("label_2"));

        horizontalLayout->addWidget(label_2);

        line_user = new QLineEdit(groupBox);
        line_user->setObjectName(QStringLiteral("line_user"));

        horizontalLayout->addWidget(line_user);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        label_3 = new QLabel(groupBox);
        label_3->setObjectName(QStringLiteral("label_3"));

        horizontalLayout_2->addWidget(label_3);

        line_pass = new QLineEdit(groupBox);
        line_pass->setObjectName(QStringLiteral("line_pass"));
        line_pass->setEchoMode(QLineEdit::Password);

        horizontalLayout_2->addWidget(line_pass);


        verticalLayout->addLayout(horizontalLayout_2);


        verticalLayout_2->addLayout(verticalLayout);

        pushButton = new QPushButton(groupBox);
        pushButton->setObjectName(QStringLiteral("pushButton"));

        verticalLayout_2->addWidget(pushButton);

        label_pic = new QLabel(logIn);
        label_pic->setObjectName(QStringLiteral("label_pic"));
        label_pic->setGeometry(QRect(40, 40, 171, 171));

        retranslateUi(logIn);

        QMetaObject::connectSlotsByName(logIn);
    } // setupUi

    void retranslateUi(QDialog *logIn)
    {
        logIn->setWindowTitle(QApplication::translate("logIn", "Dialog", nullptr));
        groupBox->setTitle(QApplication::translate("logIn", "Log In", nullptr));
        label->setText(QApplication::translate("logIn", "<p style: \"text-align:center; \">SMARTPHONE<br>ONLINE<br>STORE</p>", nullptr));
        label_2->setText(QApplication::translate("logIn", "Username:", nullptr));
        label_3->setText(QApplication::translate("logIn", "Password:", nullptr));
        pushButton->setText(QApplication::translate("logIn", "Log In", nullptr));
        label_pic->setText(QApplication::translate("logIn", "TextLabel", nullptr));
    } // retranslateUi

};

namespace Ui {
    class logIn: public Ui_logIn {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOGIN_H
