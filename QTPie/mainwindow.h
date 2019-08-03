#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QLCDNumber>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow {
    Q_OBJECT

public:
    explicit MainWindow(QWidget* parent = nullptr);
    ~MainWindow();


private:
    Ui::MainWindow* ui;

private slots:
    void showTime();
    void on_kalender_button_clicked();
    void on_frame_customContextMenuRequested(const QPoint &pos);
};

#endif // MAINWINDOW_H
