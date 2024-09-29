#include <stdio.h>
void main ()
{
int i,j,matnum[5][5],m,n,rowtotal,coltotal;
printf("row:");
scanf("%d",&m);
printf("column:");
   scanf("%d",&n);
   for (i=0;i<m;i++)
   {
       for (j=0;j<n;j++)
      {
          printf("enter the number[%d][%d]",i,j);
          scanf("%d",&matnum[i][j]);
      }
   }
       for (i=0;i<m;i++)
      {   rowtotal=0;
         for (j=0;j<n;j++)
         {
           rowtotal=rowtotal+matnum[i][j];
         }
         printf("row element addition:%d\n",rowtotal);
      }

      for (j=0;j<n;j++)
      {   coltotal=0;
         for (i=0;i<m;i++)
         {
           coltotal=coltotal+matnum[i][j];
         }
         printf("column element addition:%d\n",coltotal);
      }

}
