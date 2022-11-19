#include <stdio.h>
#include <math.h>
void Armstrong(int x,int y);

int main(void)
{
    int x,y;
    
    printf("Please enter the start and end of the interval: ");
    scanf("%d %d",&x,&y);
    
    Armstrong(x,y);
}
void Armstrong(int x,int y)
{
    int i,sum=0,remainder,control;
    
       for(i=x;i<=y;i++)
       {
       control=i;
          while(control!=0)
          {
             remainder=control%10;
             sum=sum+pow(remainder,3);
             control=control/10;
          }
          if(sum==i)
          {
             printf("%d ",i);
          }
        sum=0;
       }

}