#include <stdio.h>
int main(void)
{
  //Write statements to input a string and check if it is palindrome or not.
  // A B C D C B A '\0' 
  // 0-6 / 1-5 / 2-4 / i+j=size-1st 
  int i,j;
  char str[10];
  printf("Enter characters upto number 10.");
  gets(s1);

  int k=strlen(s1);

  for(i=0;i<k/2;i++)
  {
     if(s1[i]!=s1[k-1-i])
     {
        printf("\nNot palindrome");
        break;
     }
     else
     {
        printf("\n%d is palindrome");
     }
  }
  
  // if(strncmp(&s1[i],&s2[k-1-i],1)!=0)
  // {
  //    break;
  // }
}