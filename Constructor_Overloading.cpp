#include <iostream>
#include <string>

using namespace std;

class Account{

   private:
      //attributes
      string name;
      int health;
      int xp;
      
    
   public:
      
      //Constructors
      Account();
      Account(string name_val);
      Account(string name_val,int health_val, int xp_val);
      //methods
};

//Constructors
//When we implement a constructor, compilers constructor won't be available anymore
//Therefore, when we call the constructor with 2 arguments and then try to call it with no-args constructor
//we should define a no-args constructor.


Account::Account()
{
   name="None";
   xp=0;
   health=0;
}

Account::Account(string name_val){
   this->name=name_val;
}

Account::Account(string name_val, int health_val, int xp_val){
   this->name=name_val;
   this->health=health_val;
   this->xp=xp_val;
}

int main(void){


   return 0;
}