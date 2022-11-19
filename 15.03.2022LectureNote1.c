#include <stdio.h>
//Write a program that inputs 10 integers in to an array it will input another integer (n) and find 
//and output number of times n occurs in the array

int main(void)
{
   int array[10];
   int i,n;
   int counter;

   for(i=0;i<10;i++)
   {
      printf("\nPlease enter an integer: ");
      scanf("%d",&array[i]);
   }

   printf("\nInput (n): ");
   scanf("%d",&n);

   for(i=0;i<10;i++)
   {
      if(n==array[i])
      {
         counter++;
      }
   }

   printf("\n%d Occurs %d times in the array",n,counter);

   return 0;

}