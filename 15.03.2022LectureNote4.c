//Example write a program that inputs N(N<=30) and N ingegers into an array. Then it inputs the 
//integer num and deletes it from the array and displays the new array
//N=5 ---> remove 5th index.
//index num: 0  1  2  3  4  5  6  7  8 
//values:    7  5  10 3 -2  5 -10 3  4
//remove -2
//new array: 7 5 10 3 5 -10 3 4 
#include <stdio.h>
int main(void)
{
   int a[],N,num,j,i;
   
   printf("Input array size N(N<=30): ");
   scanf("%d",&N);

   for(i=0;i<N;i++)
   {
      printf("\nPlease enter the element-%d",i);
      scanf("%d",&a[i]);
   }

   printf("\nInput a value to delete");
   scanf("%d",&num);

   for(i=0;i<N;i++)
   {
       if(num==a[i])
       {
           for(j=i;j<N-1;j++)
           {
              a[j+1]=a[j];
           }
        N--;
       }
   
   }

   for(i=0;i<N-1;i++)
   {
       printf("%d",a[i]);
   }

}