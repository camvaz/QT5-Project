#ifndef LOGIN_H
#define LOGIN_H

#include <QDialog>

namespace Ui {
class logIn;
}

class logIn : public QDialog
{
    Q_OBJECT

public:
    explicit logIn(QWidget *parent = nullptr);
    ~logIn();

private slots:
    void on_pushButton_clicked();

private:
    Ui::logIn *ui;
};

#endif // LOGIN_H
