#include<stdio.h>
#include<conio.h>
void main()
{
  int num,rem,max=0,min=9,a;
  clrscr();
  printf("Enter the number:");
  scanf("%d",&num);
  while(num!=0)
  {
   rem=num%10;
   if(max<rem)
   max=rem;
   if(min>rem)
   min=rem;
   num=num/10;
  }
  a=max-min;
  printf("%d",a);
  getch();
}