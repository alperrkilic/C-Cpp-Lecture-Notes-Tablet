#include <stdio.h>

void Function(int n)
{
   int i,sum=0;

     for(i=1;i<=n;i++)
       {
       sum=i*(i+1)/2;  
    
         printf("%d ",sum);
       }

}

int main(void)
{
  int n;

   scanf("%d",&n);
   
    Function(n);
    
return 0;    
}