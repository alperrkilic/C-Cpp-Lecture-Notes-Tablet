#include <stdio.h>
int main(void)
{
   int list[]={1,2,3,4};
   int *p=list;
   
   printf("%x\n",p); //

   p=p+1; //p increases by 4 since it holds 4 byte in the memory.

   printf("%x\n",p);

   printf("%d\n",*p); // equivalent of p[1]

   
}