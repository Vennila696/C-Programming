#include<stdio.h>

void main()
{
  int max,min,sum=0,arr1[10],arr2[10],n,i;
  printf("Enter the count of elements in an array:");
  scanf("%d",& n);
  for(i=0;i<n;i++)
  {
    printf("Enter elements of 1st array%d:",i+1);
    scanf("%d",& arr1[i]);
  }
  for(i=0;i<n;i++){
    printf("Enter element of 2nd array%d:",i+1);
    scanf("%d",& arr2[i]);
  }
  for(i=0;i<n;i++){
    printf("%d\t", arr1[i]);}
  printf("\n");
  for(i=0;i<n;i++){
    printf("%d\t", arr2[i]);}
  printf("\nMax");
  printf("\n");
  for(i=0;i<n;i++)
  {
    if(arr1[i]>arr2[i])
       max=arr1[i];
    else
       max=arr2[i];
    printf("%d\t", max);
  }
  printf("\nMin");
  printf("\n");
  for(i=0;i<n;i++)
  {
    if(arr1[i]<arr2[i])
      min=arr1[i];
    else
      min=arr2[i];
    printf("%d\t",min);
  }
  printf("\nSum");
  printf("\n");
  for(i=0;i<n;i++)
  {
    sum=arr1[i]+arr2[i];
    printf("%d\t",sum);
  }

}












