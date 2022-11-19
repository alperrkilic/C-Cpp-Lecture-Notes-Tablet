#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

int main(void){
      
   string s1 {"Apple"};
   string s2 {"Banana"};
   string s3 {"Kiwi"};

   string s4 {s1}; // gets the same content (Apple) into string s4
   string s5 {s1,0,3}; //from position 0, 3 characters from s1 will be assigned to s5 (first 3)   

   string s7(10,'X'); // Use (); 

   cout <<"s7: "<<s7<<endl;

   if(s1==s4)
   {
       cout<<s1<<" equal to "<<s4<<endl;
   }
   else
   {
       cout<<s1<<" not equal to "<<s4<<endl;
   }

   cout<<"substring: "<<s1.substr(0,3)<<endl;
   cout<<"s5: "<<s5<<endl;

   if(s5 == s1.substr(0,3))
   {
      cout<<"same value"<<endl;
   }
   else
   {
      cout<<"not same"<<endl;
   }

   string s9 = s1 + " " +s2;
   cout <<"concatenated string s9 is: "<<s9<<endl;

   //however, string s9 ="Amasya" + "Banana";
   //won't work.
   //The reason is,
   // A p p l e \0  --> string s1{"Apple"};
   // B a n a n a \0   
   // string, string can be added
   // char[], string can be also added.
   // string, cahr[] can be also added.
   // However, one string variable is needed.
   // because of that adding two char[],char[] is not allowed.

   /*
      string ilStr {"Amasya"};
      string s9 = ilStr + " Banana"
      works correctly.
   */

   string s10 = s1 + " Banana" + " xxxxx" + " ddddd";
   cout<<"concatenated string is: "<<s10<<endl;

   cout<<"\n-----------------Accessing elements of string----------------\n"<<endl;

   for(size_t i{0};i<s9.length();i++)
   {
      cout<<s9.at(i);
      cout<<endl;
   }


   string str{"the secret word is fenerbahce"};
   size_t pos = str.find("fener");

   cout<<"\n\n"<<endl;

   if(pos!= string::npos)
   {
       cout<<"in "<<str<<endl;
       cout<<"word fener is found at position: "<<pos<<endl;
   }


   cout<<"\n\n"<<endl;


   for(auto ch: s9)
   {
       cout<<ch;
   }

   
   cout<<"\n\n"<<endl;


}