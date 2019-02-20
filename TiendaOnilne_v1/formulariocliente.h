#ifndef FORMULARIOCLIENTE_H
#define FORMULARIOCLIENTE_H

#include <QDialog>
#include <fstream>
namespace Ui {
class formularioCliente;
}

class formularioCliente : public QDialog
{
    Q_OBJECT

public:
    explicit formularioCliente(QWidget *parent = nullptr);
    ~formularioCliente();

private slots:
    void on_pushButton_2_clicked();

    void on_pushButton_clicked();

private:
    Ui::formularioCliente *ui;
};

#endif // FORMULARIOCLIENTE_H
