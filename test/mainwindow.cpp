#include <QDialog>
#include <QtCore>
#include <QtGui>
#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "space.h"
#include "outerregionspace.h"
#include "middleregionspace.h"
#include "innerregionspace.h"


/*void MainWindow::whichSpace(Space *space1, Space *space2){
    if(space1->canMoveHere == true && space1->Pressed == true)
    {
        space2->canMoveHere = false;
        space2->Pressed = false;
    }
    else if(space2->canMoveHere == true && space2->Pressed == true)
    {
        space1->canMoveHere = false;
        space1->Pressed = false;
    }
}*/

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    QObject::connect(ui->pushButton,SIGNAL(clicked()),qApp,SLOT(quit()));

    scene = new QGraphicsScene(this);

    ui->graphicsView->setScene(scene);
    ui->graphicsView->setRenderHint(QPainter::Antialiasing);


    // CREATE THE GAME BOARD
    int currentNumSpaces = 0;
    Space *spaces[49];
    int squareSize = 80;
    int sqRowNumbers [4] = {7, 5, 3, 1};
    int numSquares[4] = {24, 16, 8, 1};
    int state = 0;
    int modifier = -1;

    for(int j = 0; j < 4; j++){

        int sqRowNum = sqRowNumbers[j];
        int squareXMultiplier = sqRowNum + modifier;
        int squareYMultiplier = sqRowNum + modifier;

        for(int i = 0; i < numSquares[j]; i++){

            if(j == 0)
                spaces[currentNumSpaces] = new OuterRegionSpace(squareSize * squareXMultiplier, squareSize * squareYMultiplier);
            else if(j == 1)
                spaces[currentNumSpaces] = new MiddleRegionSpace(squareSize * squareXMultiplier, squareSize * squareYMultiplier);
            else
                spaces[currentNumSpaces] = new InnerRegionSpace(squareSize * squareXMultiplier, squareSize * squareYMultiplier);
            scene->addItem(spaces[currentNumSpaces]);

            if(state == 0){
                squareXMultiplier--;
                if(squareXMultiplier == modifier){
                    squareXMultiplier = modifier+1;
                    squareYMultiplier--;
                    state++;
                }
            }
            else if(state == 1){
                squareYMultiplier--;
                if(squareYMultiplier == modifier){
                    squareXMultiplier++;
                    squareYMultiplier = modifier+1;
                    state++;
                }
            }
            else if(state == 2){
                squareXMultiplier++;
                if(squareXMultiplier == sqRowNum + (modifier+1)){
                    squareXMultiplier = sqRowNum + modifier;
                    squareYMultiplier++;
                    state++;
                }
            }
            else if(state == 3){
                squareYMultiplier++;
            }
            currentNumSpaces++;
        }
        state = 0;
        modifier++;
    }

    // Keep going here

}

MainWindow::~MainWindow()
{
    delete ui;
}
