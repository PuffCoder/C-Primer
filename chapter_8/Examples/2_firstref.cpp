// 8.2 firstref.cpp -- defining and using a reference
// Date : 01 May 2023

#include <iostream>
using namespace std;

int main() 
{
  int rats = 101;
  int & rodents = rats; // rodents is a reference 

  cout << "rats = " << rats;
  cout << ", rodents = " << rodents << endl;
  rodents++;
  cout << "rats = " << rats;
  cout << ", rodents = " << rodents << endl;

  // some implementations require type casting the following
  // address to type unsigned
  cout << "rats address = " << &rats;
  cout << ", rodents address = " << &rodents << endl;
  return 0;

}
