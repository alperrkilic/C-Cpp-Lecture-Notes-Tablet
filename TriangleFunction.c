#include <stdio.h>
#include <math.h>
void function(int x);

int main(void)
{
   int x;

   printf("Please enter an integer: ");
   scanf("%d",&x);

   function(x);

}
void function(int x)
{
   int i,sum;

      for(i=1;i<=x;i++)
      {
         sum=(i*(i+1))/2;
         printf("%d ",sum);
         sum=0;
      }

}