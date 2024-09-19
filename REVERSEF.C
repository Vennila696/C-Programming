#include<stdio.h>
#include<conio.h>
void main()
{
int n,rem,reverse=0,num;
clrscr();
printf("Give the number :");
scanf("%d",&n);
for(num=n;num!=0;num/=10)
{
rem=num%10;
reverse =(reverse*10)+rem;
}
printf("The reverse of the given number %d is %d",n,reverse);
getch();
}