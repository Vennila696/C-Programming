#include<stdio.h>
#include<conio.h>
void main()
{
  int num1,num2,gcd,i=1;
  printf("Enter the number 1:");
  scanf("%d",&num1);
  printf("Enter the number 2:");
  scanf("%d",&num2);
  clrscr();
  for(i=1;i<=num1 && i<=2;i++)
  {
    if(num1%i==0 && num2%i==0)
    {
    gcd=i;
    }
  }
    printf("GCD of the given two numbers is %d\n",gcd);
    getch();
}