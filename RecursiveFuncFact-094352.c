#include <stdio.h>

int factorial(int n)
{
   if(n==0)
   {
      return(1);
   }
   else
   {
      return(n*factorial(n-1));
   }

}
int main(void)
{
   int n,result;
   printf("Input an integer: ");
   scanf("%d",&n);
   result=factorial(3);
   printf("\nresult is: %d",result);
}
// Recursion: Involves a function to call itself to solve smaller version of the original problem.
// factorial problem: 3! =3*2! -> 3*(2*1!) -> 3*2*1*(0!) -> 3*2*1 -> 6
// n! =n*(n-1)! if n>0
// Every recursive process has a base case that is processed without recursion
// A recursive case that reduces the problem into one or more recursive calls.
// Base case stops the recursion 