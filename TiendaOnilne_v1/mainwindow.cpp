#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QMessageBox>

MainWindow::MainWindow(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::MainWindow)
{
//    ui->setupUi(this);
//    QListWidgetItem *item = new QListWidgetItem(QIcon(":/rec/img/exit.png"), "Mark");
//    QListWidgetItem *item1 = new QListWidgetItem(QIcon(":/rec/img/newFile.png"), "John");
//    QListWidgetItem *item2 = new QListWidgetItem(QIcon(":/rec/img/openFile.png"), "July");

//    ui->listWidget->addItem(item);
//    ui->listWidget->addItem(item1);
//    ui->listWidget->addItem(item2);
}

MainWindow::~MainWindow()
{
    delete ui;
}
