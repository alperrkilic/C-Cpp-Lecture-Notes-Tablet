#include <iostream>

using namespace std;

void static_local(){

   static int num{333};
   cout<<"static num: "<<num<<" in static_local - start"<<endl;
      num+=3;
   cout<<"static num: "<<num<<" in static_local - end"<<endl;
}

int main(void){

   static_local();
   static_local();
   static_local();

   //since there's no space reserved for the static variable in the memory,
   //variable doesn't disappear after it is called. 
   //Memory reservation:

   //heap
   //empty space
   //stack
   //(global/static)
   //code sequent
   
   //static variable stands under the stack, it does not disappear therefore a change in the function
   //is reserved after it's called back again.


   /*
   user-defined functions:
   default variable

   suppose I have a function:
   
   void func(int a, int b, int c=5);

   I can call it as func(1,2) and the value of c will be automatically set to 5 since it is default.

   
   function overload:

   func(int a,int b,int c)
   func(int a,double d); 
    
     
   */
}