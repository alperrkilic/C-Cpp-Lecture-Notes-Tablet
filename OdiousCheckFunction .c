#include <stdio.h>
int odious(int x);
char check(void);
//Write function check() that inputs two integers from user and checks if they are odious using odious
//function it returns 'y' if both integers are odious numbers returns n otherwise 
char check(void)
{
   int x,y;
    
     printf("Input two integers: ");
     scanf("%d %d",&x,&y);
     
     result1=odious(x);
     result2=odious(y);
    
        if(result1==1 && result2==1)
        {
            return('y');
        }     
        else
        {
            return('n');
        }
          
}

int odious(int x)
{







}

int main(void)
{








}