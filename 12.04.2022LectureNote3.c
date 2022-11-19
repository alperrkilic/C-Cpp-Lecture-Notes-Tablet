#include <stdio.h>
int f1(int a);
int f2(int b);

void f(int b[], int (*fon)(int))
{
   int c,x;
   x=(*fon) (c);

}
int main(void)
{
   int x,a[10];
   
   if(x==5)
   {
       f(a,&f1); // or we could just write f(a,f1) equivalent statement.
   }  
   else 
   {
       f(a,&f2);
   }
}