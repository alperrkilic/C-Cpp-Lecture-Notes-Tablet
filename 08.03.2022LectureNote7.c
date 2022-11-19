#include <stdio.h>

int main(void)
{
   int array[5];
   int i,j;
   int temp;
 
   for(i=0;i<5;i++)
   {
      printf("Please enter an integer: ");
      scanf("%d",&array[i]);
      printf("\n");
   }

   for(i=0;i<5;i++)
   {
      for(j=i;j<5;j++)
      {
         if(array[j]<array[i])
         {
            temp=array[j];
            array[j]=array[i];
            array[i]=temp;
         }
      }         
   }

   printf("\n");
 
   for(i=0;i<5;i++)
   {   
      printf("%d ",array[i]);
   }

}