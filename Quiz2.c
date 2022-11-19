#include <stdio.h>

int main(void)
{
   char ch;
   int counter=0,check=0;

   while(ch!='?')
   {
      scanf("%c",&ch);
         if(ch=='.')
         {
            check++;
         }
            if(check==1)
            {
               counter++;
            }
   }

    printf("%d",counter);
}