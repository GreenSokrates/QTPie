#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QtWidgets>

MainWindow::MainWindow(QWidget* parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{

    // Setting up Timer for Clock
    QTimer *timer = new QTimer(this);
    connect(timer, & QTimer::timeout, this, &MainWindow::showTime);
    timer->start(1000);

    ui->setupUi(this);

}

void MainWindow::showTime()
{
    QTime time = QTime::currentTime();
    QString text = time.toString("hh:mm");
    if ((time.second() % 2) == 0)
        text[2] = ' ';
    ui->lcd_clock->display(text);
}

MainWindow::~MainWindow()
{
    delete ui;
}
