#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget* parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
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

void MainWindow::on_RefreshButton_clicked()
{
    //request.setUrl(QUrl("http://transport.opendata.ch/v1/locations?query=Hardbrücke"));
    request.setUrl(QUrl("http://transport.opendata.ch/v1/stationboard?station=Zürich Hardbrücke&limit=10"));
    manager->get(request);
}

MainWindow::~MainWindow()
{
    delete ui;
    delete manager;
}
