#ifndef GRAFOGL_H
#define GRAFOGL_H

#include <QDialog>

namespace Ui {
class grafogl;
}

class grafogl : public QDialog
{
    Q_OBJECT

public:
    explicit grafogl(QWidget *parent = nullptr);
    ~grafogl();

private:
    Ui::grafogl *ui;
};

#endif // GRAFOGL_H
