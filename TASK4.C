#include<stdio.h>
#include<conio.h>

void main(){
int marksObt = 12,totalmarks=100,passmarks=50,passf,getmarks;
char gender;

clrscr();
printf("Enter your gender (M/F) : ");
scanf("%c",&gender);
if(marksObt<passmarks){
if(gender=='m'){
passf= passmarks-marksObt;
printf("you want %d marks to pass",passf);
getmarks=passf+marksObt;
printf("\nthis is your marks %d ",getmarks);
printf("\nCongratulation! you pass forcefully");
}
else
printf("You failed");
}else
printf("passed great");

getch();


}