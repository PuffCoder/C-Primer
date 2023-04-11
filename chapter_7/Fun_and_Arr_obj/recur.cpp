// Listing 7.16 recur.cpp 
// recur.cpp -- using recursion
// Date : 11 April 2023

#include <iostream>
using namespace std;

void countdown(int n);

int main() 
{
  countdown(4); // call the recursive function
  return 0;
}

void countdown(int n)
{
  cout << "Counting down ... " << n << endl;
    if (n>0)
    countdown(n-1);
  cout << n << ": Kaboom!\n";
}
  
