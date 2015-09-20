#include "parsedata.h"

struct singleLogLine    {
    QString name;
    QDateTime dateTime;
    bool status;
} ;


ParseData::ParseData(QString file)
{
    this->file = new QFile(file);
}

bool compareAlphabetically(singleLogLine* line1, singleLogLine* line2)  {
    if (line1->name != line2->name) {
        return line1->name < line2->name;
    } else if (line1->name == line2->name)  {
         if (line1->dateTime != line2->dateTime)    {
             return line1->dateTime < line2->dateTime;
         } else if (line1->dateTime == line2->dateTime) {
             return line1->status < line2->status;
         }
    }
}

QString ParseData::getSortedFile()  {
    if (!this->file->open(QIODevice::ReadOnly | QIODevice::Text))    {
        qDebug() << "You are trying to sort an invalid file";
    }

    QTextStream in(this->file);

//    int lines;
//    while(!in.atEnd())  {
//        in.readLine();
//        lines += 1;
//    }


    QVector <struct singleLogLine*> log;

    singleLogLine *lineLog;
    while(!in.atEnd())  {
        QString line = in.readLine();
        QString nameString = line.section(',',0,0);
        QString timeString = line.section(',',1,1);
        QString statusString = line.section(',',2,2);
        QString dateString = line.section(',',3);

        QString dateHolder = dateString.section(' ',1);

        QDateTime dateTime = QDateTime::fromString(dateHolder+ ' ' + timeString, "MMM' 'd' 'yyyy' 'hh:mm:ss");

//        QTime time = QTime(timeString.section(':',0,0).toInt(), timeString.section(':',1,1).toInt() ,timeString.section(':',2).toInt());


        bool status = false;
        if (statusString == "Sign In")  {
            status = true;
        } else if (statusString == "Sign Out")    {
            status = false;
        }

        lineLog = new singleLogLine;
        lineLog->dateTime = dateTime;
        lineLog->name = nameString;
        lineLog->status = status;

        log.append(lineLog);

//        int month;


//        switch (dateString.section(' ',2,2))    {
//        case "Jan":
//            month = 1;
//            break;
//        case "Feb":
//            month = 2;
//            break;
//        case "Mar":
//            month = 3;
//            break;
//        case "Apr":
//            month = 4;
//            break;
//        case "May":
//            month = 5;
//            break;
//        case "Jun":
//            month = 6;
//            break;
//        case "Jul":
//            month = 7;
//            break;
//        case "Aug":
//            month = 8;
//            break;
//        case "Sep":
//            month = 9;
//            break;
//        case "Oct":
//            month = 10;
//            break;
//        case "Nov":
//            month = 11;
//            break;
//        case "Dec":
//            month = 12;
//            break;
//        }


//        int year = dateString.section(' ',3).toInt();\
//        int day = dateString.section(' ',1,1).toInt();

//        QDate date = QDate(year, month, day);
    }

    qSort(log.begin(), log.end(), compareAlphabetically);

    QFile newFile("sortedData.csv");
    if (newFile.open(QFile::WriteOnly|QFile::Truncate))
    {
        QTextStream stream(&newFile);
        for (int i = 0; i < log.size(); i++)    {
            stream << log.at(i)->name << "," << log.at(i)->dateTime.toString("hh:mm:ss','MM'/'dd'/'yyyy") <<"," << log.at(i)->status << "\r\n"; // this writes first line with two columns
        }
        newFile.close();
    }

    return newFile.fileName();
}
