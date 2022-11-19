#include <iostream>
#include <vector>

using namespace std;

int main(void){


vector <char> vowels{'a','e','i','o','u'};
//vector type but it holds character values.

vector <int> test_scores{100,95,88};

cout<<test_scores.at(1)<<endl; //prints 95

int score_to_add{};

cout<<"Please enter score to add: ";
cin>>score_to_add;

test_scores.push_back(score_to_add);


for(auto num:test_scores)
{
   cout<<num<<" ";
}


vector <vector <int>> my_vector{
   {1,2,3,4},
   {5,7,6},
   {8,9,0}
};




}