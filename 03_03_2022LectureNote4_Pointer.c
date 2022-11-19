#include <stdio.h>
void function(int *x)
{
   int y;
   y=*x+2; //y= 10+2=12 (Y_firstvalue)   
   *x=2*(*x);//x=2*10=20; // function(&y) 

}
int main(void)
{
   int x,y;
   x=10;
   y=11;

   function(&x);
   function(&y);

   printf("%d %d",x,y);
}