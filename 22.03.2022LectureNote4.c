#include <stdio.h>
// i     |      i+1
// 0     |       1
// 2     |       3
// 4     |       5
int main(void)
{
   int array[10]={1,2,3,4,5,6,7,8,9,10};
   int i;
   
   for(i=0;i<9;i+=2)
   {
       function(&array[i],&array[i+1]);
       printf("%d | %d\n",array[i],array[i+1]);
   }


}
void function(int *x,int *y)
{
   int temp;

   temp=*x;
   *x=*y;
   *y=temp;


}