#include <stdio.h>
//Write a function that inputs a sebtebce character by character until '.' is input
//it will find and return number of uppercase and number of lowercase letters to the calling function

void function(int *p1,int*p2)
{
   char ch;
   int c1=0,c2=0;

   printf("Input a sentence ending with .");
   scanf("%c",&ch);

   while(ch!='.')
   {
      if('a'<=ch && ch<= 'z')
      {
         c1++;
      }
      else if('A'<=ch && ch<='Z'
      {
         c2++;
      }
    
      scanf("%c",&ch); //update part 
   }

   *p1=c1;
   *p2=c2;

}
int main(void)
{
   int p1,p2;

   function(&p1,&p2);
   printf("%d %d",p1,p2);
}