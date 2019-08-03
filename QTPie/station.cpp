#include "station.h"
#include "ui_station.h"

station::station(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::station)
{
    ui->setupUi(this);
    manager = new QNetworkAccessManager();
    QObject::connect(manager, &QNetworkAccessManager::finished, this,
        [=](QNetworkReply* reply) {
            if (reply->error()) {
                qDebug() << reply->errorString();
                return;
            }

            QString answer = reply->readAll();

            qDebug() << answer;
        });
}


/*void station::on_RefreshButton_clicked()
{
    //request.setUrl(QUrl("http://transport.opendata.ch/v1/locations?query=Hardbrücke"));
    request.setUrl(QUrl("http://transport.opendata.ch/v1/stationboard?station=Zürich Hardbrücke&limit=10"));
    manager->get(request);
}*/

station::~station()
{
    delete ui;
}
