#include<stdio.h>
#include<conio.h>
void main()
{
int num=1,i,j,k;
clrscr();
for(i=1;i<=4;i++)
 {
 for(k=1;k<=num-i;k++)
  {
  printf("\t");
  }
  for(j=1;j<=i;j++)
   {
   printf("%d",num);
   num++;
   }
   printf("\n");
 }
 getch();
}