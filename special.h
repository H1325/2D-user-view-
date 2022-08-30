#ifndef SPECIAL_H_
#define SPECIAL_H_
#include<graphics.h>
int playerView()
{
	setbkcolor(9);
	int x,y,r=40,k,o;char c[50]="This is control box";
	char ch;
	x=getmaxx()/2;
	y=getmaxy()/2;
	k=x;
 	o=y;
	circle(x,y,r);
	floodfill(x,y,getmaxcolor());
	while((ch=getch())!=13)
	{
		cleardevice();
		outtextxy(0,0,c);
	rectangle(0,0,220,1000);
	setfillstyle(SOLID_FILL,5);
 for(int i=1;i<2;i++){
 		circle(k,o,10);	
	floodfill(k,o,getmaxcolor()); 
	    circle(k+50,o+50,5);
	floodfill(k+50,o+50,getmaxcolor());
	  circle(k+100,o+100,5);
	floodfill(k+100,o+100,getmaxcolor());
	  circle(k+150,o+150,5);
	floodfill(k+150,o+150,getmaxcolor());
	  circle(k-50,o-50,5);
	floodfill(k-50,o-50,getmaxcolor());
	  circle(k-100,o-100,5);
	floodfill(k-100,o-100,getmaxcolor());
	  circle(k-150,o-150,5);
	floodfill(k-150,o-150,getmaxcolor());	  
		  circle(k+50,o-50,5);
	floodfill(k+50,o-50,getmaxcolor());
	  circle(k+100,o-100,5);
	floodfill(k+100,o-100,getmaxcolor());
	  circle(k+150,o-150,5);
	floodfill(k+150,o-150,getmaxcolor());
		  circle(k-50,o+50,5);
	floodfill(k-50,o+50,getmaxcolor());
	  circle(k-100,o+100,5);
	floodfill(k-100,o+100,getmaxcolor());
	  circle(k-150,o+150,5);
	floodfill(k-150,o+150,getmaxcolor());
	}
		if(ch==59){
			r=r+10;
			if(r>100){
				char c[40]="you have reached the limit of zoom in";
				outtextxy(300,300,c);
				break;
			}else{
				continue;
			}
		}else if(ch==60){
			r=r-10;
			if(r<0){
				char c[40]="you have reached the limit of zoom out";
				outtextxy(300,300,c);
				break;
			}else{
			    continue;
			}
		}	
		switch(ch)
		{
			case 75: if(x>=r+1)
			{
				circle(x=x-10,y,r);
				floodfill(x,y,getmaxcolor());
				k++;o++;
			}
			break;
			case 72 :if(y>=r+1)
			{
				circle(x,y=y-10,r);
				floodfill(x,y,getmaxcolor());
				k++;o--;
			}
			break;
			case 77: if(x<=(getmaxx()-r-10))
			{
				circle(x+=10,y,r);
				floodfill(x,y,getmaxcolor());
				k--;o++;
			 } 
			 break;
			 case 80: if(y<=(getmaxy()-r-10))
			 {
				 circle(x,y+=10,r);
			 	floodfill(x,y,getmaxcolor());
			 	k--;o--;
			 }
			 break;
			 case 61: circle(x,y,r);
			 floodfill(x,y,getmaxcolor());
			 Beep(500,300);
			 while(ch==61){
			 	circle(k,o,10);
			 	circle(k,o,30);
			 	delay(50);
			 	break;
			 }break;
	    }
	}
}
void generate(){char ch[100]="this is the start screen!please press enter key!! playerview will activate";
	int x=getmaxx();
 	int y=getmaxy();
 		rectangle(x,y,100,50);
	floodfill(x,y,getmaxcolor());
		settextstyle(1,0,1);
 		setusercharsize(50,30,50,30);
 		outtextxy(150,10,ch);    
    getch();
}
int PlaneINS(){
	char ch[20]="Instructions!!!",ch1[75]="this is not a game but a player view of a 3d game we can",ch2[50]="rotate the device view pixels by pixels.";
	outtextxy(200,500,ch);
	Beep(500,300);
	outtextxy(220,520,ch1);
	Beep(500,300);
	outtextxy(240,540,ch2);
	Beep(500,300);
}
#endif
