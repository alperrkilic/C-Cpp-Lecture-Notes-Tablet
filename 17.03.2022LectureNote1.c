#include <stdio.h>
//Arrays and pointers
//Array name is a constant pointer to its 1st element
int main(void)
{
   int list[]={1,2,3,4};
   int *p;
   p=list; // equivalent to p=&list[0]
   
   printf("%d\n",*p);//points 1 if *p=list and list[]={1,2,3,4}
   
   printf("%d\n",list[2]);
   printf("%d\n",*(list+2)); //equivalent of the above statement.

   //When we add to a point such as (p+1) we don't literally add 1 to the pointer address instead
   //we add one times the size of the object to which the pointer refers as address to the pointer. 
   
   printf("%d\n",p[2]); //0 1 2 (second index of the list which p is pointing to ----> 3)

   

}