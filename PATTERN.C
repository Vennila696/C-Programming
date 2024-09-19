#include<stdio.h>
#include<conio.h>
void main()
{
int i,j,k,num=1,space;
clrscr();
for(i=1;i<=4;i++)
 {
 space=4-i;
 for(j=1;j<=space;j++)
 {
 printf("\t");
 }
 for(k=1;k<=i;k++)
 {
 printf("\t%d\t",num);
 num++;
 }
 printf("\n");
 }
 getch();
}