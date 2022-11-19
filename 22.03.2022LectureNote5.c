#include <stdio.h>
//lecture note 5
void function(int b[], int s)
{
   int i,max;

   max=b[0];

   for(i=1;i<s;i++)
   {
      if(b[i]>max)
      {
         max=b[i];
      }
   }

   printf("Max is : %d",max);

}
int main(void)
{
   int array[]={1,2,3,4,12,24,44,56,62,10};

   function(array,10);
}