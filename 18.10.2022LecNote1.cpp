#include<iostream>
using namespace std;

void local(int x){

   int num{1000};
   cout<<"local num: "<<num<<" in function"<<endl;
   num=x;
}

int num{300};

void global(){
   cout<<"global num: "<<num<<" in global func - start"<<endl;
   num*=2;
   cout<<"global num: "<<num<<" in global func - end "<<endl;
}

int main()
{
    int x{10};
    int num{100};
    int num1{500};
    
    cout<<"local num: "<<num<<" in main"<<endl;
    
    {
        int num{200};
        cout<<"local num: "<<num<<" in inner block in main"<<endl;
        cout<<"the other num1: "<<num1<<" in inner block in main"<<endl;
    }   

    local(x);
    global();
    
}