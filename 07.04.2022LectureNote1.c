#include <stdio.h>
int main(void)
{
   int array[3][3];
   int i,j;
   int odd[9];
   int index=0;

   for(i=0;i<3;i++)
   {
      for(j=0;j<3;j++)
      {
          printf("Element - [%d][%d]: ",i,j);
          scanf("%d",&array[i][j]);
      }
   }


   for(i=0;i<3;i++)
   {
      printf("\n");
      for(j=0;j<3;j++)
      {
          printf("%d ",array[i][j]);
      }
   }

   printf("\nThe new array containing odd elements is: ");

   for(i=0;i<3;i++)
   {
      for(j=0;j<3;j++)
      {
          if(array[i][j]%2==1)
          {
             odd[index]=array[i][j];
             index++;
          }
      }
   }

   for(i=0;i<index;i++)
   {
       printf("%d ",odd[i]);
   }


}