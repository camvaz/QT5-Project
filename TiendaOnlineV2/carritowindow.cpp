#include "carritowindow.h"
#include "ui_carritowindow.h"

carritoWindow::carritoWindow(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::carritoWindow)
{
    ui->setupUi(this);
}

carritoWindow::~carritoWindow()
{
    delete ui;
}
