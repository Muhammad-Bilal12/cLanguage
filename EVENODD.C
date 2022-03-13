#include<stdio.h>
#include<conio.h>

void main()
{
int x = 1;
// int x = 0;  for even number

clrscr();
printf("odd number is :");
top:
if(x<=100){
	printf(" %d ",x);
	x+= 2;
	goto top;
	}
else{
	printf("ok");
	getch();
	exit(0);
	}



}
