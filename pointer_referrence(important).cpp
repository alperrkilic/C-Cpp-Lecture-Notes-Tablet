#include <iostream>

using namespace std;

int global_Var=42;

void changePointerValue(int*pp) //(int *&pp)
{
   *pp=55;
    pp=&global_Var;
    //pointer is a variable it needs a reference
    //to change where it's pointing to
    //But the value pointer holds can be changed.
}

void IndirectSwap(char &a ,char &b)
{
   char temp;

   temp=a;
   a=b;
   b=temp;
}

int main(void){

   char a{'y'};
   char b{'n'};

   int var=23;
   int* ptr_to_var=&var;

   IndirectSwap(a,b);
   cout<<a<<" "<<b<<endl<<endl;

   cout<<"---------------------"<<endl;

   cout<<"Passing pointer to function: "<<endl;
   cout<<"Before: "<<*ptr_to_var<<endl;
   
   changePointerValue(ptr_to_var);

   cout<<"After: "<<*ptr_to_var<<endl;

   

   return 0;

}