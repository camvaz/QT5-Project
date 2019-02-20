#include "form.h"
#include "ui_form.h"
#include <qmessagebox.h>

Form::Form(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Form)
{
    ui->setupUi(this);
    QPixmap pix(":/img/img/yeet.png");
    int w = ui->label_pic->width();
    int h = ui->label_pic->height();
    ui->label_pic->setPixmap(pix.scaled(w,h,Qt::KeepAspectRatio));
}

Form::~Form()
{
    delete ui;
}

void Form::on_pushButton_clicked()
{
    QString username = ui->line_user->text();
    QString password = ui->line_pass->text();

    if(username == "test" && password == "test")
    {
        hide();
        this->parentWidget()->show();
    }
    else{
        QMessageBox::warning(this, "Error", "Username and password is not correct");
    }
}
