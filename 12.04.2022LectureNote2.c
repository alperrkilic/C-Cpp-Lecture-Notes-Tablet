#include <stdio.h>
int main(void)
{
//a[0] --> &a[0][0]
//a[1] --> &a[1][0]
//a[0][2] = *(a[0]+2)
//in general, a[i][j]=*(a[i]+j)
//we also note that a[0]=*a
//a[i][j]=*(a[i]+j)=*(*(a+i)+j)
//                     i'th
//                     row 
//address(a[i][j])=address(a[0][0]+(i*n+j)*sizeof(int))
//EXAMPLE

   int a[2][3]={{3,5,2},{1,4,7}};
   int i,j;

   for(i=0;i<2;i++)
   {
      for(j=0;j<3;j++)
      {
         printf("%4d",a[i]+j);
      }
    printf("\n");
   }

 
   for(i=0;i<2;i++)
   {
      for(j=0;j<3;j++)
      {  
         printf("%4d",*(*(a+i)+j));
      }
    printf("\n");
   }

}