#include <stdio.h>
// Exercise: Write a recursive function that receives two parameters a & n , finds and returns a"

int power(int a,int n)
{
   if(n==0)
   {
      return(1);
   }
   else
   {
      return(a*(power(a,n-1))); 
   }
}

int main(void)
{
   int a,n,result;
   printf("Please enter a and n: ");
   scanf("%d %d",&a,&n);
   result=power(2,3);
   printf("%d",result);   

}