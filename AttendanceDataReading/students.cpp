#include "students.h"
#include <QVector>

Students::Students(QString name)
{
    this->name = name;
    QVector<Events> events;
}

QString Students::getStudentName() const
{
    return name;
}



