#include <stdio.h>
#include <math.h>

//Write a function that receives a real number as a parameter finds and returns its integral
//and decimal part.
void function(double x,double *p1,double *p2)
{
   int temp;

   temp=(int)x;
   *p1=(double)temp;
   *p2=x-temp; // *p2=x-(*p1);
   //modify so that f returns decimal part under function name.
   //
   //   return(x-temp);
   //   double function(double x,double *p1,double *p2) function return type is double now.
}

int main(void)
{
   double x;

   printf("Please enter a real number: ");
   scanf("%lf",&x);
  


   return 0;
}