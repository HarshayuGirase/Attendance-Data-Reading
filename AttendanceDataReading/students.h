#ifndef STUDENT_H
#define STUDENT_H
#include <QObject>
#include <QTime>
#include <QDate>
#include <QVector>

typedef struct{
    QDateTime day;
    bool signIN;
}Events;


class Students
{
public:
    Students(QString firstNameV);
    //METHODS GO BELOW (reference below)
    //int getStudentID() const;

    QString getStudentName() const;
    QList<Events> eventLog;






private:
    QString name;
};

#endif // STUDENT_H
