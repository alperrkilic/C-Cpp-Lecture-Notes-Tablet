#include <iostream>

using namespace std;

class Player{

   public:
      int myMethod();
      int x;
      int y;

};


int main()
{

   Player player1;

   cout<<sizeof(player1)<<endl;   
   cout<<&player1<<endl;


   return 0;
}

/*

*/