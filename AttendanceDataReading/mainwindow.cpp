#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "parsedata.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ParseData *pd = new ParseData("/Users/Nilay/Desktop/High School Stuff/Extracurriculars/Robotics/Attendance Coding/build-Attendance-Desktop_Qt_5_4_2_clang_64bit-Debug/Attendance.app/Contents/MacOS/data.csv");
    pd->getSortedFile();
    delete pd;
}

MainWindow::~MainWindow()
{
    delete ui;
}

