#include <stdio.h>

int main(void)
{
   int i,number,j,k;

   printf("Please enter an integer: ");
   scanf("%d",&number);

      for(i=1;i<=number;i++)
      {
          for(j=1;j<=i;j++)
          {
             printf(" ");
          }
          
          for(k=1;k<=3;k++)
          {
             printf("*");
          }
     printf("\n");
      }

}