#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
void main()
{
   float a=12,b=3,c;
   char op,yn ;
   top:
   clrscr();
   printf("My calculator");
   printf("\nEnter Your Operator : ");
   scanf("%c",&op);
   op=getche();
   if(op =='+')
	goto add;
   else if(op=='-')
	goto sub;
   else if(op=='*')
	goto multi;
   else if(op=='/')
	goto div;
   else
	exit(0);

   add:
   c=a+b;
   printf("\nresult : %f",c);
   printf("\nDo you want to continue (Y/N) :  ");
   scanf("%c",&yn);
   yn=getche();
   if(yn=='y'||yn=='Y')
	goto top;
   else
    {
    printf("\nthanks");
    getch();
    exit(0);

}
   sub:
   c=a-b;
   printf("\nresult : %f",c);
   printf("\nDo you want to continue (Y/N) :  ");
   scanf("%c",&yn);
   yn=getche();
   if(yn=='y'||yn=='Y')
	goto top;
   else
    {
    printf("\nthanks");
    getch();
    exit(0);
}
   multi:
   c=a*b;
   printf("\nresult : %f",c);
   printf("\nDo you want to continue (Y/N) :  ");
   scanf("%c",&yn);
   yn=getche();
   if(yn=='y'||yn=='Y')
	goto top;
   else
    {
    printf("\nthanks");
    getch();
    exit(0);
}
   div:
   c=a/b;
   printf("\nresult : %f",c);
   printf("\nDo you want to continue (Y/N) :  ");
   scanf("%c",&yn);
   yn=getche();
   if(yn=='y'||yn=='Y')
	goto top;
   else
    {
    printf("\nthanks");
    getch();
    exit(0);
}
}