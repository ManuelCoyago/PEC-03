#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QtWidgets>
QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_pushButton_clicked();

    void on_actionnueva_tarea_triggered();

private:
    Ui::MainWindow *ui;
    void agregarFila(int numero, const QString &descripcion, const QString &prioridad, bool hecho);
    QTableWidget *tabla;
};
#endif // MAINWINDOW_H
