#include "lcd_clock.h"
#include "mainwindow.h"
#include "ui_mainwindow.h"

#include <QtWidgets>


lcdClock::lcdClock(QWidget *parent)
    : QLCDNumber(parent)
{

    setSegmentStyle(Filled);

    QTimer *timer = new QTimer(this);
    connect(timer, & QTimer::timeout, this, &lcdClock::showTime);
    timer->start(1000);

    showTime();

}

void lcdClock::showTime()
{
    QTime time = QTime::currentTime();
    QString text = time.toString("hh:mm");
    if ((time.second() % 2) == 0)
        text[2] = ' ';
   // display(text);
   display(text);
}
