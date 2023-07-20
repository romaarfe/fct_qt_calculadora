#include "mainwindow.h"
#include "ui_mainwindow.h"

// Construtor da classe MainWindow
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    // Configura a interface do utilizador para a janela principal
    ui->setupUi(this);
}

// Destrutor da classe MainWindow
MainWindow::~MainWindow()
{
    // Libera a memória alocada para o objeto de interface do utilizador
    delete ui;
}

// Variáveis globais
int valorUm, valorDois, resultado;

// Slot para lidar com o clique no botão de soma
void MainWindow::on_btnSoma_clicked()
{
    // Obtém os valores dos campos de texto txtValor1 e txtValor2 e os converte em inteiros
    valorUm = ui->txtValor1->text().toInt();
    valorDois = ui->txtValor2->text().toInt();

    // Realiza a operação de soma e armazena o resultado na variável resultado
    resultado = valorUm + valorDois;

    // Atualiza o campo de texto txtResultado para exibir o resultado da soma
    ui->txtResultado->setText(QString::number(resultado));
}

// Slot para lidar com o clique no botão de subtração
void MainWindow::on_btnSubtracao_clicked()
{
    // Obtém os valores dos campos de texto txtValor1 e txtValor2 e os converte em inteiros
    valorUm = ui->txtValor1->text().toInt();
    valorDois = ui->txtValor2->text().toInt();

    // Realiza a operação de subtração e armazena o resultado na variável resultado
    resultado = valorUm - valorDois;

    // Atualiza o campo de texto txtResultado para exibir o resultado da subtração
    ui->txtResultado->setText(QString::number(resultado));
}

// Slot para lidar com o clique no botão de multiplicação
void MainWindow::on_btnMultiplicacao_clicked()
{
    // Obtém os valores dos campos de texto txtValor1 e txtValor2 e os converte em inteiros
    valorUm = ui->txtValor1->text().toInt();
    valorDois = ui->txtValor2->text().toInt();

    // Realiza a operação de multiplicação e armazena o resultado na variável resultado
    resultado = valorUm * valorDois;

    // Atualiza o campo de texto txtResultado para exibir o resultado da multiplicação
    ui->txtResultado->setText(QString::number(resultado));
}

// Slot para lidar com o clique no botão de divisão
void MainWindow::on_btnDivisao_clicked()
{
    // Obtém os valores dos campos de texto txtValor1 e txtValor2 e os converte em inteiros
    valorUm = ui->txtValor1->text().toInt();
    valorDois = ui->txtValor2->text().toInt();

    // Realiza a operação de divisão e armazena o resultado na variável resultado
    resultado = valorUm / valorDois;

    // Atualiza o campo de texto txtResultado para exibir o resultado da divisão
    ui->txtResultado->setText(QString::number(resultado));
}

