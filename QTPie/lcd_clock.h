#ifndef LCD_CLOCK_H
#define LCD_CLOCK_H

#include <QLCDNumber>

class lcdClock : public QLCDNumber
{
    Q_OBJECT
public:
    explicit lcdClock(QWidget *parent = nullptr);

private slots:
    void showTime();
};

#endif // LCDCLOCK_H
