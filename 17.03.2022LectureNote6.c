#include <stdio.h>
int main(void)
{
   char c, *p;
   char s[3]={'O','Y','A'};

   p=s;
   p=&c;
   p=&s[1];
   c=*s;
   p=&s[2];
   c=*p;

}