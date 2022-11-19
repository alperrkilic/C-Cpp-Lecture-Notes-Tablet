#include <stdio.h>

int main(void)
{

   int number,i,min1,min2,x,y,temp;

   printf("How many integer numbers: ");
   scanf("%d",&number);

   printf("Please enter the first number: ");
   scanf("%d",&x);
   
   min1=x;
   min2=x;
       

   for(i=2;i<=number;i++)
   {
      printf("Please enter the next number: ");
      scanf("%d",&y);
      
      if(y<min1)
      {
        temp=min1;
        min1=y;
        min2=temp;  
      }
      else if(y<min2)
      {
        min2=y;
      }  
            
                  
   }             

   printf("The smallest of %d number is %d and second smallest is %d.",number,min1,min2); 

   return 0;
}