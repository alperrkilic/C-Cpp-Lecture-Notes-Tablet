#include <stdio.h>
int fibonacci(int n)
{
   if(n==1 || n==2)
   {
      return(1);
   }
   else
   {
      return(fibonacci(n-1)+fibonacci(n-2)); 
   }

}
// 1 1 2 3 5 8 13 
int main(void)
{
   int n,result;
   printf("Please enter an integer: ");
   scanf("%d",&n);
   result=fibonacci(n);
   printf("%d",result);

}