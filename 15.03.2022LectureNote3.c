#include <stdio.h>
#include <math.h>
//Example: In n-dimensional space a point is represented P=(x1,x2,x3,..xn)
//Write statements to input coordinates of 2 points into 2 arrays of size 10 find the distance
//between these points.
int main(void)
{
   double pa[10],pb[10];
   double d,sum=0;
   int i;

   for(i=0;i<10;i++)
   {
      printf("\nInput coordinate %d of Pa & Pb : ",i+1);
      scanf("%lf %lf",&pa[i],&pb[i]);
   }

   for(i=0;i<10;i++)
   {
      sum=sum+pow((pa[i]-pb[i]),2);
   }

   d=sqrt(sum);
   
   printf("\nDistance is: %lf",d);
    
}