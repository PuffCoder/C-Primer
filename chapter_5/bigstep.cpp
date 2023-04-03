// Listing 5.5 bigstep.cpp // bigstep.cpp -- count as directed
// Date : 03 April 2023

#include <iostream>
using namespace std;

int main() 
{
  cout << "Enter an integer: ";
  int by;
  cin >> by;
  cout << "Counting by " << by << "s:\n";
  for (int i = 0; i < 100 ; i = i + by)
    cout << i << endl;
  return 0;
}
