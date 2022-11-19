#include<stdio.h>
#include<math.h>
void ArmstrongNum(int a,int b);

void ArmstrongNum(int a,int b)
{

int remainder,sum=0,i,control;

  for(i=a;i<=b;i++)
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

int main()
{
    int a,b;
    printf("Please enter the interval: ");
    
    scanf("%d %d",&a,&b);
    
    ArmstrongNum(a,b);
    
   
    return(0);
}