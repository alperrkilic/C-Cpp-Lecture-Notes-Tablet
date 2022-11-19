//Write a function that receives a 3 digit integer parameters and finds and return it digits to the
//-calling function
#include <stdio.h>
void digit(int x,int *p1, int *p2, int *p3)
{
   *p1=x/100;
   *p2=(x/10)%10;
   *p3=x%10;
}