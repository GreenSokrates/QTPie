#ifndef STATION_H
#define STATION_H

#include <QMainWindow>
#include <QNetworkAccessManager>
#include <QNetworkReply>
#include <QNetworkRequest>

namespace Ui {
class station;
}

class station : public QMainWindow
{
    Q_OBJECT

public:
    explicit station(QWidget *parent = nullptr);
    ~station();

/*private slots:
    void on_RefreshButton_clicked();*/

private:
    Ui::station *ui;
    QNetworkAccessManager* manager;
    QNetworkRequest request;
};

#endif // STATION_H
