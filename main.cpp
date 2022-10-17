#include <iostream>
#include <cstdlib> 
using namespace std;

 void myFunction() {
  srand (time(NULL));
  string rep [4] = {"Loser \n", "Try Again \n", "You're Wrong \n", "Skill Issue \n"};
  int rc;
  rc = rand()% 4 - 1; 
  int num;
  num = rand()% 53; 
  int x;
  cout << "Guess a Number Between 1 and 53!\n";
  cin >> x;
  
  if (num == x){
    cout << "You're right!\n";
    
  }
  else{
    cout << rep[rc];
    
  }
}
   

int main() {
  
  
  myFunction();
  myFunction();
  myFunction();
  myFunction();
  myFunction();
  

  
  

}