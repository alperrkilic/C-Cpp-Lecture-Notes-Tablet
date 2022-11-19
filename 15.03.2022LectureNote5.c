//Example write a program that inputs a sentence of at most 70 characters into an array ending with '.'
//It will find number of letter 'a' and 'e' and displays it.
//This day was easy going.
//each element is storing a character.
#include <stdio.h>
int main(void)
{
   char ch[70],letter;
   int i=0,j;
   int counta=0,counte=0;

   scanf("%c",&ch[i]);

   while(ch[i]!='.')
   {
       if(ch[i]=='a')
       {
          counta++;
       }
       else if(ch[i]=='e')
       {
          counte++;
       }
       i++;
       scanf("%c",&ch[i]); 
   }
   
}