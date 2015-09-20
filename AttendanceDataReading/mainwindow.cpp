#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "students.h"
#include <QTextStream>
#include <qDebug>

QList<Students> studentList;
Students *student1 = new Students("Bob");
Students *student2 = new Students("NIKIL");

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::sortList()
{
    for(int i=0; i<studentList.size(); i++)
    {
        for(int x=0; x<studentList.size(); x++)
        {
            if(studentList.at(x).getName().compare(studentList.at(x+1).getName()) < 0)
            {
                qDebug() << "ag";
            }
            else
            {
                qDebug() << "FECK";
            }
        }
    }
}
