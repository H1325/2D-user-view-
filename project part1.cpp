#include<graphics.h>
#include<stdio.h>
#include<conio.h>
#include<iostream>
#include "special.h"
#include<windows.h>
int main(){
	int gd=DETECT,gm,e,f,t;
	initgraph(&gd,&gm,"F:\\anime\\dev c++\\Dev C++\\mingw64\\lib\\bgi");
	int height= GetSystemMetrics(SM_CYSCREEN);
	int width= GetSystemMetrics(SM_CXSCREEN);
	initwindow(width,height,"",-3,-3);{
	generate();
	PlaneINS();
	playerView();
}
return 0;
}


