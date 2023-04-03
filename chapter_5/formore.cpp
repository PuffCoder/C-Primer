// Listing 5.4 formore.cpp // formore.cpp -- more looping with for
// Date : 03 April 2023

#include <iostream>
using namespace std;
const int ArSize = 16;

int main() 
{
  long long factorials[ArSize];
  factorials[1] = factorials[0] = 1LL;
  for (int i = 2; i < ArSize; i++)
    factorials[i] = i * factorials[i-1];
  for (int i = 0; i < ArSize; i++)
    cout << i << "! = " << factorials[i] << endl;
  cout << 1LL << endl;
  return 0;



}
