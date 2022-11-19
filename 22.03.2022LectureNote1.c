#include <stdio.h>
int main(void)
{
   int a[]={1,2,3,4,5,6};
   int *p;
   
   p=a;

   printf("a*: %d *p: %d \n",*a,*p);
   printf("a[0]: %d p[0]: %d\n",a[0],p[0]);
   printf("a[1]: %d p[1]: %d\n",a[1],p[1]);
   printf("*(a+2): %d *(p+2): %d\n",*(a+2),*(p+2));
   p++; // now p points the second element of the array which is 2
   printf("*a: %d *p: %d\n",*a,*p);//therefore the output will be 1 and 2
   printf("a[1]: %d p[1]: %d\n",a[1],p[1]);//equivalent of *(a+1) and *(p+1) that is 2 and 3




}