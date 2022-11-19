#include <stdio.h>
int main(void)
{
   int x=10;
   int *p1,*p2;
   int **p;
   p1=&x;
   p=&p1;
   
   printf("\n%x %x %x %x %d %d",p,&p1,&p,p1,**p,*p1);
   //for **p it goes what p is pointing to and after that it goes what p1 is pointing to
   //since p points p1 and p1 points x, it goes to p1 first and after that x.
   //The result can be as 6ffdf8 6ffdf8 6ffdf0 6ffe1c 10 10 
   //So clearly we can understand that p and p1 is pointing to same location which is x
   //As a result, we have observed a pointer pointing another pointer and that pointer is also pointing
   //a integer value.
   //a[0] a[1] a[2]
   //*a  *(a+1) *(a+2)
   return 0;

}