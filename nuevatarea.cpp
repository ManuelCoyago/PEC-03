#include "nuevatarea.h"
#include "ui_nuevatarea.h"

NuevaTarea::NuevaTarea(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::NuevaTarea)
{
    ui->setupUi(this);
}

NuevaTarea::~NuevaTarea()
{
    delete ui;
}

void NuevaTarea::on_lineEdit_textChanged(const QString &arg1)
{
    //quiero que lo que ponga en este qline edit se mande a
    //la parte de descripcion en la tabla que se creo anteriormente
}

