#include "parsedata.h"

struct singleLogLine    {
    QString name;
    QTime time;
    bool status;
    QDate date;
} ;


ParseData::ParseData(QString file)
{
    this->file = new QFile(file);
}

QFile ParseData::getSortedFile()  {
    if (!this->file->open(QIODevice::ReadOnly | QIODevice::Text))    {
        qDebug() << "You are trying to sort an invalid file";
    }

    QTextStream in(this->file);

//    int lines;
//    while(!in.atEnd())  {
//        in.readLine();
//        lines += 1;
//    }


    QVector <struct singleLogLine> log;

    while(!in.atEnd())  {
        QString line = in.readLine();
        QString nameString = line.section(',',0,0);
        QString timeString = line.section(',',1,1);
        QString statusString = line.section(',',2,2);
        QString dateString = line.section(',',3);

        QTime time = QTime(timeString.section(':',0,0).toInt(), timeString.section(':',1,1).toInt() ,timeString.section(':',2).toInt());

        bool status;
        if (statusString == "Sign In")  {
            status = true;
        } else if (statusString == "Sign Out")    {
            status = false;
        }

        QDate::fromString(dateString, )

        int month;

        switch (dateString.section(' ',2,2))    {
        case "Jan":
            month = 1;
            break;
        case "Feb":
            month = 2;
            break;
        case "Mar":
            month = 3;
            break;
        case "Apr":
            month = 4;
            break;
        case "May":
            month = 5;
            break;
        case "Jun":
            month = 6;
            break;
        case "Jul":
            month = 7;
            break;
        case "Aug":
            month = 8;
            break;
        case "Sep":
            month = 9;
            break;
        case "Oct":
            month = 10;
            break;
        case "Nov":
            month = 11;
            break;
        case "Dec":
            month = 12;
            break;
        }


        int year = dateString.section(' ',3).toInt();\
        int day = dateString.section(' ',1,1).toInt();

        QDate date = QDate(year, month, day);
    }
}
