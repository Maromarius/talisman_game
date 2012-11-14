#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "space.h"
#include "outerregionspace.h"
#include "middleregionspace.h"
#include "innerregionspace.h"

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


    // Make all the spaces
    int numSpaces = 49;
    int currentNumSpaces = 0;
    Space *spaces[numSpaces];

    // How big the squares are width-wise (in pixels)
    int squareSize = 80;

    // How many squares are in each row of each region? NB: "1" = Center.
    int sqRowNumbers [4] = {7, 5, 3, 1};

    // What is the total number of squares in each region? NB: "1" = Center.
    int numSquares[4] = {24, 16, 8, 1};

    // Which row/column are you currently printing?
    int state = 0;

    // Don't ask. Will explain if I have to lol
    int modifier = -1;

    for(int j = 0; j < 4; j++){

        int sqRowNum = sqRowNumbers[j];
        int squareXMultiplier = sqRowNum + modifier;
        int squareYMultiplier = sqRowNum + modifier;

        for(int i = 0; i < numSquares[j]; i++){

            // Add Outer Region Spaces
            if(j == 0)
                spaces[currentNumSpaces] = new OuterRegionSpace(squareSize * squareXMultiplier, squareSize * squareYMultiplier);

            // Add Middle Region Spaces
            else if(j == 1)
                spaces[currentNumSpaces] = new MiddleRegionSpace(squareSize * squareXMultiplier, squareSize * squareYMultiplier);

            // Add Inner Region Spaces
            else
                spaces[currentNumSpaces] = new InnerRegionSpace(squareSize * squareXMultiplier, squareSize * squareYMultiplier);

            scene->addItem(spaces[currentNumSpaces]);


            // Every Square in the Bottom Row
            if(state == 0){
                squareXMultiplier--;
                if(squareXMultiplier == modifier){
                    squareXMultiplier = modifier+1;
                    squareYMultiplier--;
                    state++;
                }
            }

            // Every Square in the Left Column
            else if(state == 1){
                squareYMultiplier--;
                if(squareYMultiplier == modifier){
                    squareXMultiplier++;
                    squareYMultiplier = modifier+1;
                    state++;
                }
            }

            // Every Square in the Top Row
            else if(state == 2){
                squareXMultiplier++;
                if(squareXMultiplier == sqRowNum + (modifier+1)){
                    squareXMultiplier = sqRowNum + modifier;
                    squareYMultiplier++;
                    state++;
                }
            }

            // Every Square in the Right Column
            else if(state == 3){
                squareYMultiplier++;
            }

            currentNumSpaces++;
        }

        // Prepare for the next region
        state = 0;
        modifier++;
    }
}

MainWindow::~MainWindow()
{
    delete ui;
}
