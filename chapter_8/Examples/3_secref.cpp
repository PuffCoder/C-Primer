// Listing 8.3 secref.cpp -- defining and using a reference
// Date : 01 May 2023

#include <iostream>
using namespace std;

int main() 
{
  int rats = 101;
  int & rodents = rats; // rodents is a reference 

  cout << "rats = " << rats;
  cout << ", rodents = " << rodents << endl;

  cout << "rats address = " << &rats;
  cout << ", rodents adderss = " << &rodents << endl;

  int bunnies = 50;
  rodents = bunnies;

  cout << "bunnies = " << bunnies;
  cout << "rats = " << rats;
  cout << ", rodents = " << rodents << endl;

  cout << "bunnies address = " << &bunnies;
  cout << ", rodents adderss = " << &rodents << endl;

  return 0;

}
