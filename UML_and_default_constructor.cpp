#include <iostream>
#include <string>

using namespace std;

class Player{

   private:
      std::string name;
      int health;
      int xp;

   public:
      Player(std::string name_val="None", int health_val=0,int xp_val=0);

};

Player::Player(std::string name_val,int health_val,int xp_val)
   :name{name_val},health{health_val},xp{xp_val}{

   cout<<"Three-args-constructor called"<<endl;
}

int main(void){

   Player burak;
   Player alper{"Alper"};
   Player utku{"Utku",86};
   Player ilteris{"Ilteris",100,55};

   return 0;
}
/*
   UML Class diagram:

   Rectangle:
   _____________
   -width
   -length
   _____________
   +getLength();
   +getWidth();
   +setLength();
   +setWidth();
   +getArea();
   ______________

   NOTE:
   +'s represents the public attributes and methods, -'s represent the private attributes and methods.
   
*/
/*

*/