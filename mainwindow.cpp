#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "nuevatarea.h"
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    tabla = new QTableWidget(this);
    tabla->setRowCount(0);
    tabla->setColumnCount(4);

    QStringList cabeceras;
    cabeceras << "Número" << "Descripción" << "Prioridad" << "Hecho";
    tabla->setHorizontalHeaderLabels(cabeceras);

    tabla->setSelectionBehavior(QAbstractItemView::SelectRows);

    setCentralWidget(tabla);

}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::agregarFila(int numero, const QString &descripcion, const QString &prioridad, bool hecho)
{
    int fila = tabla->rowCount();
    tabla->insertRow(fila);

    QTableWidgetItem *itemNumero = new QTableWidgetItem(QString::number(numero));
    itemNumero->setFlags(itemNumero->flags() ^ Qt::ItemIsEditable);
    tabla->setItem(fila, 0, itemNumero);

    QTableWidgetItem *itemDescripcion = new QTableWidgetItem(descripcion);
    tabla->setItem(fila, 1, itemDescripcion);

    QTableWidgetItem *itemPrioridad = new QTableWidgetItem(prioridad);
    tabla->setItem(fila, 2, itemPrioridad);

    QTableWidgetItem *itemHecho = new QTableWidgetItem();
    itemHecho->setFlags(itemHecho->flags() | Qt::ItemIsUserCheckable);
    itemHecho->setCheckState(hecho ? Qt::Checked : Qt::Unchecked);
    tabla->setItem(fila, 3, itemHecho);
}


void MainWindow::on_pushButton_clicked()
{
    NuevaTarea ventana;
    ventana.exec();
}


void MainWindow::on_actionnueva_tarea_triggered()
{
    NuevaTarea ventana;
    ventana.exec();
}

