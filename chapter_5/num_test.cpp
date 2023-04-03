// Listing 5.2 num_test.cpp // num_test.cpp -- use numeric test in for loop
// Date : 03 April 2023

#include <iostream>
using namespace std;

int main() 
{

  cout << "Enter the starting countdown value: ";
  int limit;
  cin >> limit;
  int i;
  for (i = limit; i; i--) // i means [if] condition, run for loop until condition is false ==> 0;
    cout << "i = " << i << "\n";
  cout << "Done now that i = " << i << "\n";
  return 0;

}
