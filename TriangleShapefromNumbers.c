#include <stdio.h>
int main(void)
{
   int i,j,p,k,rows,spc;

   printf("Please enter number of rows: ");
   scanf("%d",&rows);

spc=rows;

   for(i=1;i<=rows;i++)
   {
       for(j=spc;j>=0;j--)
       {
          printf(" ");
       }
       for(k=1;k<=i;k++)
       {
          printf("%d",k);
       }
       for(p=i-1;p>=1;p--)
       {
          printf("%d",p);
       }
    
    
    printf("\n");
    spc--;
    
   }


}