#include <stdio.h>
//Write a program that inputs N and N integers into an array it will find and display
//the negative integers stored in the array.
int main(void)
{
   int array[30];
   int i,size,k=0;
   int array2[30];

   printf("Please enter N(N<30): ");
   scanf("%d",&size);

   if(size>30)
   {
      while(size>30)
      {
         printf("\nYou have entered N>30");
         printf("\nPlease enter N<30: ");
         scanf("%d",&size);
      }
   }


 
   for(i=0;i<size;i++)
   {
      printf("\nElement-%d : ",i);
      scanf("%d",&array[i]);
   }

   printf("\nOriginal array: ");

   for(i=0;i<size;i++)
   {
      printf("%3d",array[i]);
   }

   for(i=0;i<size;i++)
   {
       if(array[i]<0)
       {
           array2[k]=array[i];
           k++;          
       }   
   }

   printf("\nNew array containing negative numbers is: ");

   for(i=0;i<k;i++)
   {
       printf("%3d",array2[i]);
   }

   printf("\n");

  return 0;
}