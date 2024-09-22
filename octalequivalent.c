#include<stdio.h>
#include<conio.h>
void main()
{
  int num,rem,i=1,sum=0;
  printf("Enter the number:");
  scanf("%d",&num);
  clrscr();
  while(num!=0)
  {
    rem=num%8;
    num=num/8;
    sum=sum+rem*i;
    i=i*10;
  }
  printf("Octal equivalent of the number is %d",sum);
  getch();
}