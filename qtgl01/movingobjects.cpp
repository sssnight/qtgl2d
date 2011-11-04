#include "movingobjects.h"


MovingObjects::MovingObjects():
    vx(0),vy(0),vz(0),
    ax(0),ay(0),az(0),m(1),fT(0),fx(0),fy(0),fz(0),
    state(MovingObjects::S_NORMAL)
{



}

inline
int MovingObjects::getAccX(){return ax;}
inline
int MovingObjects::getAccY(){return ay;}
inline
int MovingObjects::getAccZ(){return az;}
inline
void MovingObjects::setAccX(const int AX){ ax=AX;}
inline
void MovingObjects::setAccY(const int AY){ ay=AY;}
inline
void MovingObjects::setAccZ(const int AZ){ az=AZ;}




inline
int MovingObjects::getVX(){return vx;}
inline
int MovingObjects::getVY(){return vy;}
inline
int MovingObjects::getVZ(){return vz;}
inline
void MovingObjects::setVX(const int VX){ vx=VX;}
inline
void MovingObjects::setVY(const int VY){ vy=VY;}
inline
void MovingObjects::setVZ(const int VZ){ vz=VZ;}

//Call by Timer. Be used to update state of game object
//Unit of time is micro second
void MovingObjects::update(const long ELAPSED_MS ){

        x += vx;
        y += vy;
        z += vz;

        vx += ax;
        vy += ay;
        vz += az;


  /*
    ax += fx/m;
    ay += fy/m;
    az += fz/m;
    fT=fT-ELAPSED_MS>0?fT-ELAPSED_MS:0;
  */

}

inline
MovingObjects::States MovingObjects::getState()
{
    return state;
}

void MovingObjects::setState(MovingObjects::States S)
{
    state = S;
}



