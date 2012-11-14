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
    QObject::connect(ui->pushButton,SIGNAL(clicked()),this,SLOT(diceRoll()));
    //QObject::connect(ui->dice,SIGNAL(clicked()),SLOT(diceRoll()));

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

void MainWindow::on_dice_clicked()
{
    QPixmap diceImg1 = QPixmap(":/image/images/D1.png");
    QPixmap diceImg2 = QPixmap(":/image/images/d2.png");
    QPixmap diceImg3 = QPixmap(":/image/images/d3.png");
    QPixmap diceImg4 = QPixmap(":/image/images/d4.png");
    QPixmap diceImg5 = QPixmap(":/image/images/d5.png");
    QPixmap diceImg6 = QPixmap(":/image/images/d6.png");

    int rollResult = (rand() % 6 + 1);
    qDebug()<<"success in rolling dice"<<rollResult;

    switch(rollResult)
    {
    case 1 :ui->diceFace->setPixmap(diceImg1.scaled(71,71,Qt::KeepAspectRatio));
        break;
    case 2 :ui->diceFace->setPixmap(diceImg2.scaled(71,71,Qt::KeepAspectRatio));
        break;
    case 3 :ui->diceFace->setPixmap(diceImg3.scaled(71,71,Qt::KeepAspectRatio));
        break;
    case 4 :ui->diceFace->setPixmap(diceImg4.scaled(71,71,Qt::KeepAspectRatio));
        break;
    case 5 :ui->diceFace->setPixmap(diceImg5.scaled(71,71,Qt::KeepAspectRatio));
        break;
    case 6 :ui->diceFace->setPixmap(diceImg6.scaled(71,71,Qt::KeepAspectRatio));
        break;
    default :
        break;

    }
}
