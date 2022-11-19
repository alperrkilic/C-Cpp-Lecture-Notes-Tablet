#include <stdio.h>
int main(void)
{
   int array[10],i,j,count;

   for(i=0;i<size;i++)
   {
      count=1;
      for(j=0;i<size;++i)
      {
          if(array[i]==array[j] && i>j)
          {
             break;
          }
          else if(array[i]==array[j] && i!=j)
          {
             count++;
          }  
      }
      if(i<=j)
      {
         printf("\n%d occurs %d times",array[i],count);
      }
       
   }
}