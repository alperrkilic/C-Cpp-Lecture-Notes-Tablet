#include <stdio.h>
//Write a program to input 4 exam grades of 30 students into a class into a 2D array Find average 
//grade of each student.
int main(void)
{
   int array[30][4];
   int i,j;
   double average[30];

   for(i=0;i<30;i++)
   {
      average[i]=0;
   }



   for(i=0;i<30;i++)
   {
      for(j=0;j<4;j++)
      {
         printf("Enter Grade %d of student %d: ",(i+1),(j+1));
         scanf("%d",&array[i][j]);
      }
   }

   for(i=0;i<30;i++)
   {
      for(j=0;j<4;j++)
      {
          average[i]=array[i][j]+average[i];
      }
   }

   for(i=0;i<30;i++)
   {
      printf("\nAverage of student %d : %.3lf",i+1,average[i]/4);
   }


}