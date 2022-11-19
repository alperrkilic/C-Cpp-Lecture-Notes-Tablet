#include <stdio.h>
int function(int a,int *b);
int function(int a,int *b)
{
   printf("%d %d\n",a,*b);
   *b-=a;   
   return(2*a);
}
int main(void)
{
   int x=8;
   int y=15;

   printf("%d \n",f(x,&y));
   printf("%d \n",y);


}