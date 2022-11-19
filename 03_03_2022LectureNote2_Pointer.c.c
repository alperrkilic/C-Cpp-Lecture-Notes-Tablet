#include <stdio.h>
void find(double side, double *area, double *circumference)
{

   *area=side*side;
   *circumference=side*4;

}
int main(void)
{

   int side;
   double Area,Circumference;

   printf("Please enter one side of the square: ");
   scanf("%d",&side);


   find(side,&Area,&Circumference);

   printf("\nArea is: %lf",Area);
   printf("\nCircumference is: %lf",Circumference);


   return 0;

}