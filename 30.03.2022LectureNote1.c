#include <stdio.h>
//Multidimensional array.
//Two dimensional array.
int main(void)
{
   int array[5][5];
   int i,j;
   int number=3;


   for(i=0;i<number;i++)
   {
       for(j=0;j<number;j++)
       {
          printf("element [%d][%d]: ",i,j);
          scanf("%d",&array[i][j]);
          printf("\n");
       }
   }
   
   for(i=0;i<number;i++)
   {
      for(j=0;j<number;j++)
      {
         printf("%d ",array[i][j]);
      }
    printf("\n");
   }   

   //output will be as below if the input is 1 2 3 4 5 6 7 8 9. 
   // 1 2 3
   // 4 5 6
   // 7 8 9 

   return 0;
}