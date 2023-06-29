#ifndef NUEVATAREA_H
#define NUEVATAREA_H

#include <QDialog>

namespace Ui {
class NuevaTarea;
}

class NuevaTarea : public QDialog
{
    Q_OBJECT

public:
    explicit NuevaTarea(QWidget *parent = nullptr);
    ~NuevaTarea();

private slots:
    void on_lineEdit_textChanged(const QString &arg1);

private:
    Ui::NuevaTarea *ui;
};

#endif // NUEVATAREA_H
