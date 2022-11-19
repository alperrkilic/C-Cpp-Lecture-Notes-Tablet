#include <stdio.h>
int main(void)
{
   int g[]={70,80,90,100,20};
   int *p;

   p=&g[0];

   printf("%d, %d, %d, %d",*p, *g, g[0],p[2]);

   p=p+2;// p will point 3rd element of the array after adding 2. Now p points 90

   printf("\n%d, %d, %d, %d",*p, *g, g[0],p[2]); //therefore the output will be 90 70 70 20
   
}