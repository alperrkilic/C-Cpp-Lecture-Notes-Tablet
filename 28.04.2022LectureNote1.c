#include <stdio.h>
#include <string.h>
int main(void)
{
   char st[100];
   int i,w1=0,w2=0,w3=0,w4=0;
   int lettercount=0;
   int k;
   

   printf("Please write something: ");
   gets(st);
  
   k=strlen(st);

   

   for(i=0;i<=k;i++)
   {
      if(st[i]!=' ' || st[i]!='\0')
      {
         lettercount++;
      }
      else
      {
         switch(lettercount)
         {
            case 1:
            w1++;
            break;
        
            case 2:
            w2++;
            break;
            
            case 3:
            w3++;
            break;
            
            case 4:
            w4++;
            break;
            
         }
      }
      
   }

   printf("\n1-letter: %d",w1);
   printf("\n2-letter: %d",w2);
   printf("\n3-letter: %d",w3);
   printf("\n4-letter: %d",w4); 



}
/*
   S1--> This is a long day
   1-letter:1
   2-letter:1
   3-letter:1
   4-letter:2

*/