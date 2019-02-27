#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    scene = new QGraphicsScene(this);
    ui->embedding->setScene(scene);

    QBrush redBrush(Qt::red);
    QBrush blueBrush(Qt::blue);
    QPen blackpen(Qt::black);
    blackpen.setWidth(6);

    ellipse = scene->addEllipse(10, 10, 100, 100, blackpen, redBrush);
    rectangle = scene->addRect(-100,-100,50,50,blackpen,blueBrush);

    rectangle->setAcceptHoverEvents(true);

    rectangle->setFlag(QGraphicsItem::ItemIsMovable);


}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_CLI_returnPressed()
{
    ui->CLI->clear();
}
