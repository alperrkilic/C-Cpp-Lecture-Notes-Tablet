#include <iostream>
#include <string>

using namespace std;

class Player{
  
   private:
      string name;
      int health;
      int xp;


   public:
     
     Player() : name{"Name"}, health{0},xp{0}{ }
     Player(string name_val, int health_val,int xp_val) : name{name_val},health{health_val},xp{xp_val} {  }
};


int main(void){


   return 0;

}

/*
   Destructors:
   In file operations we can open file in the constructor and close the file in the destructor.
   Memory deallocation can be made in the destructor. When an object is created in the heap,
   It must be deleted after it's being used. Therefore, in order to set free that allocated memory
   we should delete the data from heap.
   
   Destructor implementation in class:
   ˜Player();

   in the program;

   class_name::˜Player(){ }

   Note: In the exam there will be a lot of questions from constructors and destructors

   Using const with member functions 
   What happens when we call member methods on a const object?

   const Player boril{"Boril",100,22};

   void display_name(const Player &p)
   {
      cout<<p.get_name()<<endl;
   }

   in class decleration:
   Compiler does not understand if the method tries to change the object's attributes

   therefore, 
   
   In the class get_name should be declared as the above.
   std::string get_name() const;

   


*/