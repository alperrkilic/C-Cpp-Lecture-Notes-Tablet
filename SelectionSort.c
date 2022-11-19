#include <stdio.h>


int swap(int *x,int *y){
int temp=*y;

*y= *x;
*x=temp;


}

int main()
{
  int i,j,temp;
  int index=0;
  int array[10]={70,80,90,100,20,31,69,43,72,56};
  
   for(i=0;i<10;i++)
   {
   index=i;
      for(j=i;j<10;j++)
      {
         if(array[index]>array[j])
         {
            index=j;
         }
      }
    
    temp=array[i];
    array[i]=array[index];
    array[index]=temp;
    
    
    //swap(&array[index],&array[i]);
   }

    for(i=0;i<10;i++)
    {
       printf("%d ",array[i]);
    }



}