#include "students.h"
#include <QVector>
#include <QDebug>


Students::Students(QString name)
{
    this->name = name;
    //how to add to struct v
    //this->eventLog.append();
    //this->eventLog.last().day =
}

QString Students::getName() const
{
    return name;
}

