#include <stdio.h>
//Write statements to declare an 100 element integer array and fill this array with fibonacci numbers.
int main(void)
{
   int array[100];
   int i;
   int sum;
 

   for(i=0;i<100;i++)
   {
      sum=sum+i;
      array[i]=sum;
      printf("%d ",array[i]);
   }

   return 0;

}