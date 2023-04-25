#include<conio.h>
#include<graphics.h>

int main()
{
	int gd = DETECT, gm;
	initgraph(&gd, &gm, "C:\\TC\\BGI");
	setbkcolor(4);
	setfillstyle(2,5);
	
	rectangle(150, 150, 400, 400);
	
	
	rectangle(175, 350, 375, 375);
	
	ellipse(210, 210, 0, 360, 40, 30);
	ellipse(340, 210, 0,360, 40,30);
	circle(210, 210, 15);
	circle(340, 210, 15);
	line(150,275, 90,90);
	line(490,90, 400,275);
	line(190,400, 160,600);
	line(360,400, 390,600);
	getch();
	closegraph();
	return 0;
	
	
	
	
	
	
}

