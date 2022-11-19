#include <stdio.h>
void swap(int *addressX, int *addressY)
{
   int temp;

   temp=*addressX;
   *addressX=*addressY;
   *addressY=temp;

}
int main(void)
{
   int x=5;
   int y=10;
   
   printf("X before swapping : %d",x);
   printf("\nY before swapping: %d",y);


   swap(&x,&y);

   printf("\nX is: %d",x);
   printf("\nY is: %d",y);

   return 0;

} 