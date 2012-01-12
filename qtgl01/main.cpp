#include <QtGui/QApplication>
#include <iostream>
#include "mainwindow.h"
#include "gameControlWidget.h"
#include "testtilemap.h"
#include "testfloor.h"
#include "teststar.h"
#include "testplayer.h"
#include <gtest/gtest.h>

#include "Textures.h"
#include <cmath>
using namespace std;

//extern int testMap();
//extern void testLoadTextures();

int main(int argc, char *argv[])
{


    //testMap();
    //testing::InitGoogleTest(&argc, argv);
    //RUN_ALL_TESTS();

    cout<<"start"<<endl;
   // testLoadTextures();
    QApplication a(argc, argv);


    GameControlWidget w;
    w.show();

    return a.exec();
}
