#include <stdio.h>
//ARRAYS//
//Array is a data structure that consists of related data items of the same type
//All elements are real number integers or characters etc.
//An array is a contiguous memory locations that associated with a particular symbolic name and all have
//same data type
int main(void)
{
//Write statements to find sum of elements of a 4 element integer array grades.
   
   int array[4];
   int i,sum=0;

   for(i=0;i<4;i++)
   {
      printf("Please enter an integer: ");
      scanf("%d",&array[i]);
      printf("\n");
      sum=sum+array[i];
   }
   
   printf("\nSum is: %d",sum);
   printf("\nAverage is: %.4lf",(double)sum/4);

}