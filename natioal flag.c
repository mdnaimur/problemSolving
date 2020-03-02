//#include<iostream.h>
#include<conio.h>
#include<graphics.h>
#include<dos.h>
int x1=150,x2=250,x3=250,x4=450,y1=150,y2=150,y3=300,y4=300;
void pakistan();
void bangladesh();
void song();
void main()
{
    int gd=DETECT,gm;
    intergraph(&gd,&gm,"c:\\tc\\bgi");
    cleardevice();
    bangladesh();
    getch();
}
void pakistan()
{
    setcolor(WHITE);
    setfillstyle(SOUND_FILL.WHITE);
    bar3d(x1,y1,x3,y3,x4,y4,0,0);
    setcolor(GREEN);
}
