#include <stdio.h>

void dt(int *p,int y)
{
   int x=10;
   *p=2*x-y;
}
void t(int *xp,int *yp)
{
   dt(xp,7);
   dt(yp,*xp);
}
int main(void)
{
   int x,y;
   t(&x,&y);
   printf("%d %d",x,y);
   return 0;

}
//     t             dt           x(1111)     y(2222)  
// xp    yp      p      y    x
// 1111  2222    1111   7    10
//