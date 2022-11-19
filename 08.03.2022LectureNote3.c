#include <stdio.h>
//Write a function that inputs 10 positive integers that finds and returns number of even and odd ones.

void function(int *even,int *odd)
{
   int i,x;
   
   for(i=0;i<10;i++)
   {
       printf("\nPlease enter an integer: ");
       scanf("%d",&x);
       
       if(x%2==0)
       {
           (*even)++;
       }
       else
       {
           (*odd)++;
       }  
    }
}
int main(void)
{
   int res1,res2;
   
   function(&res1,&res2);

   printf("\n Number of even integers: %d",res1);
   printf("\n Number of odd integers: %d",res2);

   return 0;
}



