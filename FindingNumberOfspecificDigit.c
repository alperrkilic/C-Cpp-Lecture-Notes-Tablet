#include <stdio.h>
#include <math.h>
int function(int x,int y);

int main(void)
{
   int x,y,result;

   printf("Please enter the number and its digit: ");   
   scanf("%d %d",&x,&y);

   result=function(x,y);
   printf("%d",result);
}
int function(int x,int y)
{
   int counter=0,remainder;

      while(x!=0)
      {
         remainder=x%10;
            if(remainder==y)
            {
                counter++;
            }            
         x=x/10;   
      }
    return(counter);

}