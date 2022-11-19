#include <stdio.h>
#include <math.h>
void function(int x, int y,int *s, double *average)
{

   *s=x+y;
   *average=(x+y)/2; //or we can say pointer s ---> *average=*s;


}
int main(void)
{

   int m,n,sum;
   double average;

   printf("Please enter m and n : ");
   scanf("%d %d",&m,&n);


   function(m,n,&sum,&average);

   printf("\nSum is: %d",sum);
   printf("\nAverage is: %lf",average);


   return 0;

}