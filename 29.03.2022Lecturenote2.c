//Write a program to input N(N<30) and N integers into an array. It will seperate even and odd numb.
//stored in the array into two arrays. use a function that receives an integer array and its size,
//returns two arrays that store even and odd integers stored in the received array.
void function(int array[],int size, int b[], int c[],int *p1,int *p2)
{
   int i,j=0,k=0;

   for(i=0;i<size;i++)
   {
       if(array[i]%2==1)
       {
          b[j]=array[i];
          j++;
       }
       else
       {
          c[k]=array[i];
          k++;
       }
   }

   *p1=j;
   *p2=k;


}
int main(void)
{
   int x[30];
   int Y[30];
   int z[30];
   int i,N;
   int j1,k1;


   
   printf("Please input N(N<30): ");
   scanf("%d",&N);
   
   for(i=0;i<N;i++)
   {
      printf("Please enter element -%d: ",i);
      scanf("%d",&x[i]);
   }


   function(x,N,Y,z,&j1,&k1);

}