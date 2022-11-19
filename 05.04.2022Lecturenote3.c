#include <stdio.h>
int main(void)
{

  int size=10;
  int i,j;
  int a[10][10];
  int sum=0;
  
  //Write statements to find summation of minor diagonal elements of a 10x10 array.
  //i  j
  //0  9
  //1  8
  //2  7
  //3  6
  //4  5
  //5  4
  //6  3
  //7  2
  //8  1
  //9  0

   for(i=0;i<size;i++)
   {
      sum=sum+a[i][size-1-i];
   {


}