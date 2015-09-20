#ifndef PARSEDATA_H
#define PARSEDATA_H

#include <QFile>
#include <QTime>
#include <QDateTime>
#include <QDebug>

class ParseData
{
public:
    ParseData(QString file);
    QFile getSortedFile();

private:
    QFile *file;
};

#endif // PARSEDATA_H
