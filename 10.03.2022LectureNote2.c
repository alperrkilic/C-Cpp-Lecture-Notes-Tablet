#include <stdio.h>
int main(void)
{
   int array[5]={1,3,2,8,6};
   int min,i;
   int locmin;

   min=array[0];
   locmin=0;

   for(i=1;i<5;i++)
   {
      if(array[i]<min)
      {
         min=array[i];
         locmin=i;
      }
   }

   for(i=0;i<5;i++)
   {
      printf("%d ",array[i]);
   }
}