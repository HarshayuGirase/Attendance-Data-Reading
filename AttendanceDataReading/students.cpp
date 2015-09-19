#include "students.h"
#include <QVector>



Students::Students(QString name)
{
    this->name = name;
    //how to add to struct v
    //this->eventLog.append();
    //this->eventLog.last().day =
}

QString Students::getStudentName() const
{
    return name;
}



