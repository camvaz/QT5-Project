/********************************************************************************
** Form generated from reading UI file 'form.ui'
**
** Created by: Qt User Interface Compiler version 5.11.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FORM_H
#define UI_FORM_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Form
{
public:
    QLabel *label_pic;
    QGroupBox *groupBox;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout_3;
    QVBoxLayout *verticalLayout_2;
    QLabel *label;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_2;
    QLineEdit *line_user;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_4;
    QLineEdit *line_pass;
    QPushButton *pushButton;

    void setupUi(QWidget *Form)
    {
        if (Form->objectName().isEmpty())
            Form->setObjectName(QStringLiteral("Form"));
        Form->resize(782, 437);
        Form->setStyleSheet(QLatin1String("*{\n"
"background-color: #f7f2ea;\n"
"color: #7a0606;\n"
"font-family: VCR,Courier New,Courier,Lucida Sans Typewriter,Lucida Typewriter,monospace;\n"
"}\n"
"\n"
"QPushButton{\n"
"	font-size: 14px;\n"
"	opacity: 0.6;\n"
"	border-radius: 2px; \n"
"	background-color: #d0d0d0;\n"
"	width: 40%;\n"
"	color: #7a0606;\n"
"	height: 40%;\n"
"}\n"
"\n"
"QPushButton:hover{\n"
"	opacity:1;\n"
"}"));
        label_pic = new QLabel(Form);
        label_pic->setObjectName(QStringLiteral("label_pic"));
        label_pic->setGeometry(QRect(30, 40, 441, 371));
        groupBox = new QGroupBox(Form);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setGeometry(QRect(490, 50, 271, 331));
        layoutWidget = new QWidget(groupBox);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(10, 30, 251, 281));
        verticalLayout_3 = new QVBoxLayout(layoutWidget);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        label = new QLabel(layoutWidget);
        label->setObjectName(QStringLiteral("label"));

        verticalLayout_2->addWidget(label);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        label_2 = new QLabel(layoutWidget);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setStyleSheet(QStringLiteral("font-size:14px"));

        horizontalLayout_2->addWidget(label_2);

        line_user = new QLineEdit(layoutWidget);
        line_user->setObjectName(QStringLiteral("line_user"));
        line_user->setStyleSheet(QStringLiteral("font-size:14px;"));
        line_user->setFrame(true);

        horizontalLayout_2->addWidget(line_user);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        label_4 = new QLabel(layoutWidget);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setStyleSheet(QStringLiteral("font-size: 14px;"));

        horizontalLayout_3->addWidget(label_4);

        line_pass = new QLineEdit(layoutWidget);
        line_pass->setObjectName(QStringLiteral("line_pass"));
        line_pass->setStyleSheet(QStringLiteral("font-size:14px"));
        line_pass->setFrame(true);
        line_pass->setEchoMode(QLineEdit::Password);

        horizontalLayout_3->addWidget(line_pass);


        verticalLayout->addLayout(horizontalLayout_3);


        verticalLayout_2->addLayout(verticalLayout);

        pushButton = new QPushButton(layoutWidget);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setStyleSheet(QStringLiteral("color:solid black;"));

        verticalLayout_2->addWidget(pushButton);


        verticalLayout_3->addLayout(verticalLayout_2);


        retranslateUi(Form);

        QMetaObject::connectSlotsByName(Form);
    } // setupUi

    void retranslateUi(QWidget *Form)
    {
        Form->setWindowTitle(QApplication::translate("Form", "Form", nullptr));
        label_pic->setText(QString());
        groupBox->setTitle(QString());
        label->setText(QApplication::translate("Form", "<p style=\"text-align: center; font-size: 22px\"><b>YEEZY<br>ONLINE<br>STORE</b></p>", nullptr));
        label_2->setText(QApplication::translate("Form", "USERNAME:", nullptr));
        label_4->setText(QApplication::translate("Form", "PASSWORD:", nullptr));
        pushButton->setText(QApplication::translate("Form", "LOGIN", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Form: public Ui_Form {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FORM_H
