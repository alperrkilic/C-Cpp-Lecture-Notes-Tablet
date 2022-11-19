#include <stdio.h>
//Write statements to fill an array with the square of first positive 20 integers starting from 1
int main(void)
{
   int array[20];
   int i;   

   for(i=0;i<20;i++)
   {
       array[i]=(i+1)*(i+1);
   }

   for(i=0;i<20;i++)
   {
      printf("%d ",array[i]);
   }  


   return 0;

}