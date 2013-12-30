#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "QLabel.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    QLabel* label1 = new QLabel("One");
}

MainWindow::~MainWindow()
{
    delete ui;
}
