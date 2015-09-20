#ifndef STUDENT_H
#define STUDENT_H
#include <QObject>
#include <QTime>
#include <QDate>
#include <QVector>

typedef struct{
    QDate day;
    QTime time;
    bool signIN;
}Events;


class Students
{
public:
    Students(QString firstNameV);
    //METHODS GO BELOW (reference below)
    //int getStudentID() const;

    void sortList();
    int gotText();

    QString getName() const;
    QList<Events> eventLog; //using qlist not qvector!






private:
    QString name;
};

#endif // STUDENT_H
