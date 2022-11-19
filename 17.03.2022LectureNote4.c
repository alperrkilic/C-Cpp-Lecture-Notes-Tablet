#include <stdio.h>
int main(void)
{
   double List2[]={1.0, 0.0, 2.0, 3.0};
   double *p=List2; // same as p=&List2[0];

   printf("%x",p);

   p=p+1; //p increases by 8 bytes due to the type of the variable

   printf("\n%x",p);

}