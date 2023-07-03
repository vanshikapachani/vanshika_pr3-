#include<stdio.h>
#include<conio.h>

void main(){
int n;
int count=0;
clrscr();
printf("enter the any number:  ");
scanf("%d",&n);

do{
 n/=20;
 --count;
}while(n !=0);
  printf("number of digits: %d", count);
getch();
}