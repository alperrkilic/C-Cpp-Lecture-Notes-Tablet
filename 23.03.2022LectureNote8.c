#include <stdio.h>
void find(int b[],int s,int c[]);
//Write a program to input N(N<30) and n integers into an array it will find and display
//the negative integers stored in the array.
//Use function find() that receives an integer array and its size and it returns another array
//composed of only the negative elements of the received array.
//Assume N is 6 and the integers are inputted into the array as follows:
int main(void)
{
   int array1[6]={5,6,-2,8,-6,4};
   int array2[6];

   find(array1,6,array2);

   for(i=0;i<6;i++)
   {
      printf("%d ",array2[i]);
   }

}
void find(int b[], int s, int c[])
{
   int i,j=0;

   for(i=0;i<s;i++)
   {
      if(b[i]<0)
      {
         c[j]=b[i];
         j++;
      }
   }

   return 0;

}