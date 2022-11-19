#include <stdio.h>
#include <stdlib.h>
#include <math.h>

// Belli bir açıyla fırlatılan bir cismin yere düşme süresini hesaplayan programı fonksiyon yardımı ile
// yazınız. toplam süre= 2* ((ilkhız*sinalfa)9.80)

double totalTime(int initialVelocity,int initialDegree)
{

   double result;

   result=2*((initialVelocity*sin(initialDegree))/9.80);

   return result;
}

int main(void)
{

   int initialVelocity=0,initialDegree=0,result2;

   printf("Please enter the initial velocity: ");
     scanf("%d",&initialVelocity);


   printf("\nPlease enter the initial degree: ");
     scanf("%d",&initialDegree);
    
    result2=totalTime(initialVelocity,initialDegree);

       printf("The time that object spent in the air is: %f",result2);

    return 0;

}