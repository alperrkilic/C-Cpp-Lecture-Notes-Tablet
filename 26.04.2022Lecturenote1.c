#include <stdio.h>
#include <string.h>
int main(void)
{
   //Write statements to input a string in the form:
   //name surname grade
   //Using those strings create another string as the first character of the surname followed by a dot
   // and the name and ":" and grade as given below:
   //Sample RUn
   //Enter name,surname,grade: Ayşe Kulu,90
   //K.Ayşe:90
   
   char s1[20],s2[20];
   printf("Enter name, surname,grade: ");
   gets(s1);
   int i=0;

   while(s1[i]!=' ')
   {
      i++;
   }

   s2[0]=s1[i+1];
   s2[1]='.';
   
   int p=2;

   for(int j=0;j<i;j++)
   {
      s2[p]=s1[j];
      p++;
   }

   int k=i;

   while(s1[k]!=':')
   {
      k++;
   }

   //strcopy(&s2[i+2],&s1[k]);
   //or strcat(s2,&s1[j]);


   //or alternatively;
   //strncat(s2,s1,i);
   //if we try to use strcopy, it will print on K. and these values will be lost
   //however, we can use strncopy(&s2[2],s1,i)
   //s2[2+i]='\0';

}