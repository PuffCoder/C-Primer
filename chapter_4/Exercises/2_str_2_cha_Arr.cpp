// 2. Rewrite Listing 4.4, using the C++ string class instead of char arrays.
// Date : 01 April 2023

#include <iostream>
#include <string>
using namespace std;

int main() 
{
  const int ArSize = 20;
  string name;
  string dessert;

  cout << "Enter your name:\n";
  getline(cin,name);
  cout << "Enter your favorite dessert:\n";
  getline(cin,dessert);
  cout << "I have some delicious " << dessert;
  cout << " for you, " << name << ".\n";
  return 0;

}
