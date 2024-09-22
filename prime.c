#include<stdio.h>
#include<conio.h>
void main()
{
 int i,n,m;
 clrscr();
 printf("Enter the number:");
 scanf("%d",&n);
 for(i=2;i<n;i++)
 {
  if(n%i==0)
  {
   m=1;
   break;
  }
 }
 if(m==1)
 printf("It is not prime");
 else
 printf("It is prime");
 getch();
}