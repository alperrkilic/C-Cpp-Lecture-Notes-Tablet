#include <stdio.h>
int cc=20;
int f1(int cc,double b)
{
  int k=4,s;
  s=b+cc*k;
  
  printf("%3d%6.2f%3d\n",cc,b,s);
  return(s);
}

void f2(char ch)
{
   int b=5;
   if(ch>='a' && ch<='z')
    {
      f1(b,7.5);
    }
   else
    { 
      f1(7.5,b);
    }
   printf("%3d%3d\n",cc,b);
  
}

int main(void)
{
  char kar='m';
  f2(kar);
  kar='B';
  f2(kar);
  printf("%3d\n",cc);
  
  return (0);

}