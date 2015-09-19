#ifndef STUDENT_H
#define STUDENT_H
#include <QObject>
#include <QTime>
#include <QDate>

class Students
{
public:
    Students(QString firstNameV);
    //METHODS GO BELOW (reference below)
    //int getStudentID() const;

    QString getStudentName() const;






private:
    QString name;
    QVector<QDateTime> events;
};

#endif // STUDENT_H
