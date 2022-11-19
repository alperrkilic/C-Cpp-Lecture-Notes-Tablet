#include<stdio.h>
#include <math.h>
int main()
{
    int num,control,i,sum=0,remainder;
    
    printf("Please enter an integer: ");
    scanf("%d",&num);
    
    
    
    control=num;
    
     while(num!=0)
     {
        remainder=num%10;
        sum=sum+pow(remainder,3);
        num=num/10;    
     }
    
    if(sum==control)
     {
       printf("%d is an Armstrong number.",control);
     }
    else
     {
       printf("%d is not an Armstrong number.",control);
     }
    
    
    return 0;
}