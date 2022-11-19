//Example given an array of 8 integers write statements so that array elements will be shifted 
//once to the right. Output new array elements.
//indexes:0 1 2 3 4 5 6 7
//values: 1 2 3 4 5 6 7 8
//new arr:8 1 2 3 4 5 6 7 
#include <stdio.h>
int main(void)
{
   int a[8]={1,2,3,4,5,6,7,8};
   int i,temp;

   temp=a[7];

   for(i=6;i>=0;i--)
   {
      a[i+1]=a[i];
    
   }

   a[0]=temp;

   for(i=0;i<8;i++)
   {
      printf("%d ",a[i]);
   }

}