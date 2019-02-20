#include "grafogl.h"
#include "ui_grafogl.h"

grafogl::grafogl(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::grafogl)
{
    ui->setupUi(this);
}

grafogl::~grafogl()
{
    delete ui;
}
