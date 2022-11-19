#include <stdio.h>
//Use of sizeof() operator will be helpful when using pointers to use in the arrays.
int main(void)
{
   double j;
   double doubleArr[]={1.0,2.0,3.0,4.0,5.0};

   printf("Size of j is %d bytes",sizeof(j));
   printf("\nSize of doubleArr is %d bytes",sizeof(doubleArr));

   // by dividing bytes to the variable type we can calculate how many elements does doubleArr have.

}