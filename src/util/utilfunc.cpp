#include <QTime>
#include <QString>

QString convertTo60MinCycle(QTime time) {
    int totalMinutes = time.hour() * 60 + time.minute();
    int scaledMinutes = (totalMinutes * 60) / 1440;
    int newHours = scaledMinutes / 60;
    int newMinutes = scaledMinutes % 60;
    return QString("%1:%2").arg(newHours, 2, 10, QChar('0'))
                          .arg(newMinutes, 2, 10, QChar('0'));
}

// Existing content of utilfunc.cpp continues below...
