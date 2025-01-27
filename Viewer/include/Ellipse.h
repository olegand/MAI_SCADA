#ifndef ELLIPSE_H
#define ELLIPSE_H
#include <qpainter.h>
#include <QtGui/QApplication>
//#include "mainwindow.h"
#include "shape.h"

class Ellipse : public Shape
{
    int r1, r2;
public:
    
    Ellipse(string nx, int nxv,
           string ny, int nyv,
           string nr1, int nr1v,
           string nr2, int nr2v,
                       QColor ncolv);
    int getVarFromBase(string name, int newval);
    void show(QPainter *p1);
    void setr1(int newr1);
    void setr2(int newr2);
};

#endif // ELLIPSE_H
