#ifndef PARSEDATA_H
#define PARSEDATA_H

#include <QFile>
#include <QTime>
#include <QDateTime>
#include <QDebug>
#include <qalgorithms.h>

class ParseData
{
public:
    ParseData(QString file);
    QString getSortedFile();

private:
    QFile *file;
};

#endif // PARSEDATA_H
