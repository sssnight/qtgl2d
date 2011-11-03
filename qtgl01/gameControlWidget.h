#ifndef gameControlWidget_H
#define gameControlWidget_H

#include <QGLWidget>
#include <qgl.h>
#include "gameStateMaintainer.h"
#include "gameupdateaction.h"

namespace Ui {
    class GameControlWidget;
}

class GameControlWidget : public QGLWidget
{
    Q_OBJECT

public:
    explicit GameControlWidget(QWidget *parent = 0);
    ~GameControlWidget();

    void initializeGL();
    //reshape
    void resizeGL(int width, int height);
    //display
    void paintGL();
    void keyReleaseEvent(QKeyEvent *event);
    void mousePressEvent(QMouseEvent *event);
    void mouseReleaseEvent(QMouseEvent *event);
    void mouseMoveEvent(QMouseEvent *event);
    void mouseDoubleClickEvent(QMouseEvent *event);

    void timerEvent(QTimerEvent *);
    void drawAxs();
private:

    Ui::GameControlWidget *ui;


    int redrawTimerID;
    int updateTimerID;

    GLdouble trafX;
    GLdouble trafY;
    GLdouble trafZ;
    //theta is the angle of axis rotation
    GLdouble rotaTheta[3];
    GameStateMaintainer gameState;

    void draw();
    void draw3DSquare();
    void draw3DSquare(const int,const int,const int, const int );
    void initialGameState();

    //----------------------------------------
    //trackball vars & funcs
    double angle;
    double axis[3];
    double lastPos[3];
    bool trackingMouse;

    void startMotion(const int,const int);
    void stopMotion(const int,const int);
    void trackball_ptov(int x, int y, int width, int height, double v[3]);

private slots:
    void startIdleFunc();
};

#endif
