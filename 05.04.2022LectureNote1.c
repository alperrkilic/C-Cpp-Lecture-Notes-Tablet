#include <stdio.h>
int main(void)
{
   int a[10][10];
   int i,j;
   int sum=0;

   for(i=0;i<3;i++)
   {
      for(j=0;j<3;j++)
      {
          printf("Element-[%d][%d]: ",i,j);
          scanf("%d",&a[i][j]);
      }
   }
   
   printf("\n");

   for(i=0;i<3;i++)
   {
      printf("\n");
      for(j=0;j<3;j++)
      {
         printf("%d ",a[i][j]);
      }
   }
   
   //Finding diagonal ---> we should sum when i is equal to j that is 1 to 1 or 2 to 2 
   //so we can say i to i

   for(i=0;i<3;i++)
   {
      sum=sum+a[i][i];
   }

   printf("\n\n\nSum is: %d",sum);

}