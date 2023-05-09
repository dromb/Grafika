#include<conio.h>
#include<graphics.h>

int main(void)
{
	int gd = DETECT, gm;
	initgraph(&gd, &gm, "C;\\TC\\BGI");
	setbkcolor(4);
	setfillstyle(2,5);
	
	
	char kretanje;
	int xp=0, yp=0;
	while(kretanje != 'q'){
		rectangle(10, 10, 500,120);
		circle(50+xp, 50+yp, 10);
		line(50+xp, 60+yp, 50+xp, 95+yp);
		line(50+xp, 75+yp, 85+xp, 50+yp);
		line(50+xp,75+yp,15+xp,50+yp);
		line(50+xp,70+yp,85+xp,90+yp);
		line(50+xp,70+yp,15+xp,90+yp);
		kretanje = getch();
		cleardevice();
		if(kretanje == 'w')
			yp = yp-20;//gore
		if(kretanje == 's')
			yp += 20;//dole
		if(kretanje == 'a')
			xp -= 20;//levo
		if(kretanje == 'd')
			xp += 20;//desno
	cleardevice();
	
	}
	getch();
	closegraph();
	return 0;
	
	
	
}

