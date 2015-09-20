#-------------------------------------------------
#
# Project created by QtCreator 2015-09-18T15:04:38
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = AttendanceDataReading
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    students.cpp \
    parsedata.cpp

HEADERS  += mainwindow.h \
    students.h \
    parsedata.h

FORMS    += mainwindow.ui
