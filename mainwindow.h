#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QGraphicsScene>
#include <QGraphicsItem>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private slots:

    void on_CLI_returnPressed();

private:
    Ui::MainWindow *ui;
    QGraphicsScene *scene;  // manages embedding
    QGraphicsEllipseItem *ellipse;
    QGraphicsRectItem *rectangle;

};

#endif // MAINWINDOW_H
