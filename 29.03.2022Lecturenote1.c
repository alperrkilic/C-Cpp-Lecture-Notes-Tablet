//Write a program to input 10 integers into an array which represents the octal base 8 equivalent
// of an integer number it will find and output the base 10 equivalent of this number.
//Use a function that receives an integer array that represents the octal equivalent of an integer num.
//and its size as parameters returns base 10 equivalent of the number to the calling function.
//Sample run:
//input digits of the octal number: 0 0 0 0 0 0 0 1 1 2 --> 8ˆ0x2=2+ 8ˆ1x1+ 8ˆ2x1 => (64+8+2= 74)
//it is 74 in base 10.
#include <stdio.h>
#include <math.h>
void function(array[],size,*p);

int main(void)
{

   int array[10];
   int i;
   int x;

   printf("\nInput digits of the octal number: ");

   for(i=0;i<10;i++)
   {
      scanf("%d",&array[i]);   
   }

   function(array,10,&x);

   printf("\nSum is: %d",x);

}
void function(array[],size,*p)
{
   int sum=0;
   int i;

   for(i=size-1;i>=0;i--)
   {
      sum=sum+array[i]*pow(8,size-1-i)
   }

   *p=sum;

}