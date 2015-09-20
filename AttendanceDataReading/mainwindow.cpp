#include "mainwindow.h"
#include "ui_mainwindow.h"

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

<<<<<<< HEAD

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
                qDebug() << "FaCK";
            }
        }
    }
}

void MainWindow::test()
{
    QString x = "BOB";
    QString y = "FUCK";
    if(x.compare(y) < 0)
    {
        qDebug() << "ag";
    }
    else
    {
        qDebug() << "FICK";
    }

}

=======
>>>>>>> origin/master
