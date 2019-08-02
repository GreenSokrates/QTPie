#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QNetworkAccessManager>
#include <QNetworkReply>
#include <QNetworkRequest>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow {
    Q_OBJECT

public:
    explicit MainWindow(QWidget* parent = nullptr);
    ~MainWindow();

private slots:
    void on_RefreshButton_clicked();

private:
    Ui::MainWindow* ui;
    QNetworkAccessManager* manager;
    QNetworkRequest request;
};

#endif // MAINWINDOW_H
