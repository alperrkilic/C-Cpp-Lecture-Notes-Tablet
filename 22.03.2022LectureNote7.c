#include <stdio.h>
void pass(int b[],int s)
{
   int i;

   for(i=0;i<s;i++)
   {
      printf("%3d",b[i]);
      b[i]=8;
   }

   printf("\n");
//Since arrays are kind of a pointer the new value of the array will be 8 8 8 because of the function
}
int main(void)
{
   int array[]={1,2,3};
   int i;
   pass(array,3);

   for(i=0;i<3;i++)
   {
      printf("%3d",array[i]);
   }


}