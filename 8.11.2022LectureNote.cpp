#include <iostream>


class Player{

   private:
      std::string name{"Default Name"};
      int health{100};
      int xp{3};
      int my_method()
      {
          std::cout<<"Hello"<<std::endl;
          health=36;
      }
   public:

     //getters:
     std::string get_name();
     int get_health();
     int get_xp();
    
     //setters:
     void set_name(std::string name);
     void set_health(int health);
     void set_xp(int xp); 
     int my_method_caller();
};

int Player::my_method_caller(){

    my_method();
}

std::string Player::get_name(){
    return name;
}

int Player::get_health(){
    return health;
}

int Player::get_xp(){
    return xp;
}

void Player::set_name(std::string name){
    this->name=name;
}

void Player::set_health(int health){
    this->health=health;
}

void Player::set_xp(int xp){
    this->xp=xp;
}


int main(void){

   Player p1;

   //Accessing a private member through public getter&setter methods.

   std::cout<<p1.get_health()<<std::endl;
   p1.set_health(78);
   std::cout<<p1.get_health()<<std::endl;

   p1.my_method_caller();

   std::cout<<p1.get_health()<<std::endl;

   return 0;
}