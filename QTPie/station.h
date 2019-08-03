#ifndef STATION_H
#define STATION_H

#include <QMainWindow>

namespace Ui {
class station;
}

class station : public QMainWindow
{
    Q_OBJECT

public:
    explicit station(QWidget *parent = nullptr);
    ~station();

private:
    Ui::station *ui;
};

#endif // STATION_H
