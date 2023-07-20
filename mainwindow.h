#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

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
    // Slot para lidar com o clique no botão de soma
    void on_btnSoma_clicked();

    // Slot para lidar com o clique no botão de subtração
    void on_btnSubtracao_clicked();

    // Slot para lidar com o clique no botão de multiplicação
    void on_btnMultiplicacao_clicked();

    // Slot para lidar com o clique no botão de divisão
    void on_btnDivisao_clicked();

private:
    Ui::MainWindow *ui;
};
#endif // MAINWINDOW_H
