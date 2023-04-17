// Listing 5.14 waiting.cpp // waiting.cpp -- using clock() in a time-delay loop
// Date : 17 April 2023

#include <iostream>
#include <ctime>
using namespace std;

int main() 
{
  cout << "Enter the delay time, in seconds: ";
  float secs;
  cin >> secs;
  clock_t delay = secs * CLOCKS_PER_SEC; // convert to clock ticks
  cout << "starting\a\n";
  clock_t start = clock();
  while (clock() - start < delay)
    ;
  cout << "done \a\n";
  return 0;
}
