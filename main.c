#include<stdio.h>
#include<conio.h>
#include<dos.h>
#include<stdlib.h>
#include<time.h>

void main(void) {
	int x, y, ax, ay;
	clrscr();
	randomize();
	x = random(78) + 2;
	y = random(22) + 2;
	ax = random(2) * 2 - 1;
	ay = random(2) * 2 - 1;
	while(!kbhit()) {
		gotoxy(x, y); printf("o");
		delay(100);
		gotoxy(x, y); printf(" ");
		x += ax;
		y += ay;
		if(x <= 2 || x >= 79) ax = -ax;
		if(y <= 2 || y >= 24) ay = -ay;
	}
}
