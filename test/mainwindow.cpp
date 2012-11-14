#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "myitem.h"
MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    QObject::connect(ui->pushButton,SIGNAL(clicked()),qApp,SLOT(quit()));

    scene = new QGraphicsScene(this);

    ui->graphicsView->setScene(scene);
    ui->graphicsView->setRenderHint(QPainter::Antialiasing);
    scene->setSceneRect(0, 0, 560, 560);


    QPen mypen = QPen(Qt::black);

    QLineF TopLine(scene->sceneRect().topLeft(),scene->sceneRect().topRight());
    QLineF LeftLine(scene->sceneRect().topLeft(),scene->sceneRect().bottomLeft());
    QLineF RightLine(scene->sceneRect().topRight(),scene->sceneRect().bottomRight());
    QLineF BottomLine(scene->sceneRect().bottomLeft(),scene->sceneRect().bottomRight());

    scene->addLine(TopLine,mypen);
    scene->addLine(LeftLine,mypen);
    scene->addLine(RightLine,mypen);
    scene->addLine(BottomLine,mypen);

    MyItem *item1 = new MyItem(0, 0);
    scene->addItem(item1);




    //int itemCount = 1;
    /*for(int i =0; i < itemCount; i++){
        MyItem *item = new MyItem();
        scene->addItem(item);
    }*/
}

MainWindow::~MainWindow()
{
    delete ui;
}
