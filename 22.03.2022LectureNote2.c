#include <stdio.h>
//Write a function that receives an integer parameter (n) and displays 1+2+3+...+n on the screen.
void function(int n)
{
   int i;
   int s=0;

   for(i=1;i<=n;i++)
   {
      s=s+i;
   }

   printf("Result is : %d \n",s);

}
//Write a program to input 5 positive integers into an array and sends them into the function to
//find and output its sum (starting from the 1 to the element)
int main(void)
{
   int array[5]={20,10,30,40,60};
   int i;
   int *p;
   
   p=array;
     
   for(i=0;i<5;i++)
   {
      function(*(p+i));
   }

   return 0;

}