#include <stdio.h>
//Write a function that receives two integer arrays and tehir sizes and return another array that will
//store summation of the corresponding elements of the received arrays.(Assume received arrays have
//the same size)
void function(int array1[],int array2[],int *size,int ReturnArr[])
{
   int i;

   for(i=0;i<size;i++)
   {
      ReturnArr[i]=array1[i]+array2[i];
   }


}