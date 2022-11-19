#include <stdio.h>
//Write a function that receives 2 integer parameters switches and returns their values to the calling
//function.
void function(int *x,int *y)
{
   int temp;

   temp=*x;

   *x=*y;
   *y=temp;

}
//Use above function to switch 1st element and the last element of the function.
int main(void)
{
   int a=5;
   int b=10;
   int array[10]={1,2,3,4,5,6,7,8,9,10};
   int i;
 
   printf("Before switching the values: a: %d | b: %d\n",a,b);
   function(&a,&b);
   printf("After switching the values: a: %d | b: %d\n\n",a,b);

   function(&array[0],&array[9]);

   for(i=0;i<10;i++)
   {
       printf("element-%d is %d\n",i,array[i]);
   }  

}