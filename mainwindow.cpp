#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

int valorUm, valorDois, resultado;

void MainWindow::on_btnSoma_clicked()
{
    valorUm = ui->txtValor1->text().toInt();
    valorDois = ui->txtValor2->text().toInt();
    resultado = valorUm + valorDois;
    ui->txtResultado->setText(QString::number(resultado));
}


void MainWindow::on_btnSubtracao_clicked()
{
    valorUm = ui->txtValor1->text().toInt();
    valorDois = ui->txtValor2->text().toInt();
    resultado = valorUm - valorDois;
    ui->txtResultado->setText(QString::number(resultado));
}


void MainWindow::on_btnMultiplicacao_clicked()
{
    valorUm = ui->txtValor1->text().toInt();
    valorDois = ui->txtValor2->text().toInt();
    resultado = valorUm * valorDois;
    ui->txtResultado->setText(QString::number(resultado));
}


void MainWindow::on_btnDivisao_clicked()
{
    valorUm = ui->txtValor1->text().toInt();
    valorDois = ui->txtValor2->text().toInt();
    resultado = valorUm / valorDois;
    ui->txtResultado->setText(QString::number(resultado));
}

