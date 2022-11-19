#include <string.h>
#include <stdio.h>
/*
   The homework will contain 
   Text files and Arrays

   Strings:
   Ex; char str[15];
   Scanf("%10s",str); --> 10 characters will be stored
   
   Input         Output
   Programming   Programmin
   Program       Program
   
   int main(void)
   {
       char str[15] ="Hello";
       scanf("%10s",str);
       
       printf("%s",str);
        printf("%s","Good Bye");
         printf("%5s","Good"); // right justified _ G o o d
        printf("%-5s","Good"); // left justified G o o d _
   }
   
   sprintf(s, "Integer:%6d\ndouble:%7.2lf",x,y);
   sprintf is used to print formatted data into string.

   String Manipulation functions.
   
   <string.h> --> library for string functions.
   
   char s1[15]="Good bye", s2[15];
   
   strcopy(s2,s1); // copies s1 to s2 including null character

   Below statements does the same job as the strcopy function
   
   int i=0;

   while(s1[i]!='\0')
   {
      s2[i]=s1[i];
      i++;
   }

   char s1[15]="Good Bye", s2[15];
   int k=strlen(s1); // 8 characters stored to k 
   
   strncopy(str2,str1,n);  // n is how many characters will be stored to str2 from str1

   char s1[15]="Good Bye", s2[15];
   int k=strlen(s1);
   strcopy(s2,s1); // '\0' is also copied 
   
   Example;

   char s1[15]="Good Bye", s2[15];
   int k=strlen(s1); --> k=8;
   strcopy(s2,s1);  ---> s2[15]="Good Bye"
   printf("%s has %d chars\n",s2,strlen(s2));"Good Bye has 8 chars"  
   strncopy(s2, "byebye",3); ---> byed Bye 
   printf("%s has %d chars\n",s2,strlen(s2));"byed Bye has 8 chars"
   strncopy(s1,"12345678910",9);
   s1[9]='0';
   printf("%s has %d chars\n",s1,strlen(s1)); "123456789 has 9 chars"

   



*/