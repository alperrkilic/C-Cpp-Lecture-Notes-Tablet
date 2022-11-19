#include <iostream>

using namespace std;

void doubleIt(int x,int *p)
{
   *p=2*x;
}

int main(void){

int a{16};
doubleIt(9,&a);

cout<<"The new value of a is: "<<a<<endl;


/*
   Pointers
   
   int a{100};
   int *ptr{&a};

   Logic of pointers...

      000   004       016
   ... 88 | 100 |...|1024
   
   in cell 016 address of variable is preserved. 016 is the pointers' address.
   in 004 address of 'a' variable is being hold.

      
   '*' --> dereferencing operator
   the purpose is to read the content of the pointer.



*/



}