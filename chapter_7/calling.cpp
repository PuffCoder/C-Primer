// Listing 7.1 calling.cpp 
// calling.cpp -- defining, prototyping, and calling a function
// Date : 05 April 2023

#include <iostream>
using namespace std;

int main() 
{
  void simple();
  cout << "main() will call the simple() function: \n";
  simple();
  cout << "main() is finished with the simple() function.\n";
  // cin.get();
  return 0;

}

void simple()
{
  cout << "I'm but a simple function.\n";
}
