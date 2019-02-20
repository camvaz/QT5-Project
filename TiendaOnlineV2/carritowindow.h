#ifndef CARRITOWINDOW_H
#define CARRITOWINDOW_H

#include <QDialog>

namespace Ui {
class carritoWindow;
}

class carritoWindow : public QDialog
{
    Q_OBJECT

public:
    explicit carritoWindow(QWidget *parent = nullptr);
    ~carritoWindow();

private:
    Ui::carritoWindow *ui;
};

#endif // CARRITOWINDOW_H
