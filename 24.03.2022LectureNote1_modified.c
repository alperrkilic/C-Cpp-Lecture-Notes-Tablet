#include <stdio.h>
//Write a program that inputs N and N integers into an array it will find and display
//the negative integers stored in the array.
//to arrange this program into function void find(int array[],int array2[], int *size)
//by that we can send two arrays array 1 and 2 and find the negative ones & return them into main func.
//since number of negative numbers might be smaller than the original size we should secure the value
//of k in this function (which is our range to print negative numbers) therefore by help of a pointer
//we can return this value to the main function and solve this problem. 
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
       printf("%3d ",array2[i]);
   }

   printf("\n");

  return 0;
}