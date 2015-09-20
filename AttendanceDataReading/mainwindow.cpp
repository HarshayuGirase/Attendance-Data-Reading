#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "parsedata.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ParseData *pd = new ParseData("./data.csv");
    pd->getSortedFile();
    delete pd;
}

MainWindow::~MainWindow()
{
    delete ui;
}

