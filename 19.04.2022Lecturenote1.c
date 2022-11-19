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
   
*/
int main(void)
{
          char str[15] ="Hello";
       scanf("%10s",str); // if I input ALperKilicasdjsadj --> it will only  output AlperKilic
       
       printf("%s\n",str);
        printf("%s\n","Good Bye");
         printf("%5s\n","Good"); // right justified _ G o o d
        printf("%-5s\n","Good"); // left justified G o o d _



}