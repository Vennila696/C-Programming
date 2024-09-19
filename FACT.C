#include<stdio.h>
#include<conio.h>
void main()
{
int n,i,j;
float sum=0.0,fact;
clrscr();
printf("Enter a number :",n);
scanf("%d",&n);
for(i=1;i<=n;i++)
 {
 fact=1;
 for(j=1;j<=i;j++)
 {
  fact=fact*j;
 }
 sum=sum+(i/fact);
 }
 printf("%f",sum);
 getch();
}