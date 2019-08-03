#include "mainwindow.h"
#include "lcd_clock.h"
#include <QApplication>

int main(int argc, char* argv[])
{
    QApplication a(argc, argv);
    MainWindow w;

    // hide window titlebar, ALT + F4 still works
    w.setWindowFlags(Qt::Window | Qt::FramelessWindowHint | Qt::WindowCloseButtonHint);


    // Select Fullscreen for RPI
    w.show();
    // w.showFullScreen();

    return a.exec();
}
