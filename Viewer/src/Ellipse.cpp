#include "../include/Ellipse.h"
#include <QtGui/QApplication>
#include "../include/mainwindow.h"

Ellipse::Ellipse(string nx, int nxv,
               string ny, int nyv,
               string nr1, int nr1v,
               string nr2, int nr2v,
                          QColor ncolv)
{
 x=getVarFromBase(nx, nxv);
 y=getVarFromBase(ny, nyv);
 r1=getVarFromBase(nr1, nr1v);
 r2=getVarFromBase(nr2, nr2v);
 color=ncolv;
}

int Ellipse::getVarFromBase(string name, int newval)
{
 IntVar *v;
 lib=MkSM();
 lib->Load();
 if((v=(IntVar*)lib->Find(name))==0)
 {
  lib->Create(name, newval);
  lib->Save();
  v=(IntVar*)lib->Find(name);
 }
 return (v->getValue());
}

void Ellipse::setr1(int newr1)
{
 r1 = newr1;
}

void Ellipse::setr2(int newr2)
{
 r2 = newr2;
}

void Ellipse::show(QPainter *p)
{
 QPen pen(color);
 p->setPen(pen);
 p->drawEllipse(x, y, r1, r2);
}
