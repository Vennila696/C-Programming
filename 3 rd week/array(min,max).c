#include<stdio.h>

void main()
{
  int i,n,num[10],max,min;
  printf("Enter count of number:");
  scanf("%d",& n);
  for(i=0;i<n;i++)
  {
     printf("Enter number:");
     scanf("%d",& num[i]);
  }
  max=min=num[0];
  for(i=0;i<n;i++)
  {
    if(num[i]>max)
      max=num[i];
    else if(num[i]<min)
      min=num[i];
  }
  printf("The maximum is:%d",max);
  printf("\nThe minimum is:%d",min);

}


