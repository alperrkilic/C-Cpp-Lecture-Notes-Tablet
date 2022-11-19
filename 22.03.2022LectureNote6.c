#include <stdio.h>

int main(void)
{
   int array[10]={1,2,3,4,5,6,7,8,9,10};
   int i;
   
   printf("Array before switching: ");

   for(i=0;i<10;i++)
   {
       printf("%d ",array[i]);
   }
  

   for(i=0;i<10/2;i++)
   {
       function(&array[i],&array[(9-i)]);
   }

   printf("\nArray after switching: ");

   for(i=0;i<10;i++)
   {
       printf("%d ",array[i]);
   } 
   
}
void function(int *x,int *y)
{
   int temp;

   temp=*x;
   *x=*y;
   *y=temp;


}