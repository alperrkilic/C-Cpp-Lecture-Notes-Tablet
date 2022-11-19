#include <stdio.h>
int main(void)
{

/*
   Ex. write statements to input a string and store it into a new string by reversing its elements
   A Y S E '\0'   s1  |   s2
                  ----|----
   _ _ _ _ ___    0 A | E 3  sum of them is size-1 which is: 4-1
                  1 Y | S 2  i+j=size-1
   E S Y A '\0'   2 S | Y 1
   _ _ _ _ ___    3 E | A 0

*/

   char s1[20];
   char s2[20];

   printf("Please enter name ");
   gets(s1);
   int k=strlen(s1);
   int i;
   printf("\n");

   for(i=0;i<k;i++)
   {
      s2[k-1-i]=s1[i];
   }



}