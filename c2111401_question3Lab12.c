#include <stdio.h>

int findNum(int a,int b)
{
  int remainder,counter=0,tempa,tempb;

    while(a!=0)
    {
      remainder=a%10;
      
        if(remainder==b)
        {
           counter++;
        }  
    
      a=a/10;
    } 

return(counter);

}

int main(void)
{
 int a,b,result;
  
  scanf("%d %d",&a,&b);

  result=findNum(a,b);
  printf("%d",result);
}