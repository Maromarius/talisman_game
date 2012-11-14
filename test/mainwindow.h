#ifndef MAINWINDOW_H
#define MAINWINDOW_H
#include <QtCore>
#include <QtGui>
#include <QMainWindow>
#include "space.h"

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT
    
public:
    explicit MainWindow(QWidget *parent = 0);
    void whichSpace(Space*, Space*);
    ~MainWindow();
    void LoadCharacter();
    
private slots:
    void on_dice_clicked();
private:
    Ui::MainWindow *ui;
    QGraphicsScene *scene;
};

#endif // MAINWINDOW_H
