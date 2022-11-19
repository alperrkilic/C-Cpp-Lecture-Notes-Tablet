#include <stdio.h>
int main(void)
{
   int a[10][10];
   int temp,i,j;

   for(i=0;i<3;i++)
   {
      for(j=0;j<3;j++)
      {
          printf("Element-[%d][%d]: ",i,j);
          scanf("%d",&a[i][j]);
      }
   }


   //changing row and column of the two-dimensional array.


   for(i=0;i<3;i++)
   {
      temp=a[0][i];
      a[0][i]=a[i][0];
      a[i][0]=temp;
   }

}