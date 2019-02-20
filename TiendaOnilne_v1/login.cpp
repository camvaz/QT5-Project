#include "login.h"
#include "ui_login.h"
#include <qmessagebox.h>

logIn::logIn(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::logIn)
{
    ui->setupUi(this);
    QPixmap pix(":/celulares/img/celulares/iPhoneXR.png");
    int w = ui->label_pic->width();
    int h = ui->label_pic->height();
    ui->label_pic->setPixmap(pix.scaled(w,h,Qt::KeepAspectRatio));
}

logIn::~logIn()
{
    delete ui;
}

void logIn::on_pushButton_clicked()
{
    if(ui->line_pass->text() == "test" && ui->line_pass->text() == "test"){
        this->hide();
        this->parentWidget()->show();
    }
    else{
        QMessageBox::warning(this, "Error", "Nombre de usuario o contraseña incorrectos.");
    }
}
