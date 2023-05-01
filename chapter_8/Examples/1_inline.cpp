//Listing 8.1 inline.cpp 
// inline.cpp -- using an inline function
// Date : 30 April 2023

#include <iostream>
using namespace std;

// an inline functino definition
inline double square(double x) { return x*x;}

int main() 
{
  double a,b;
  double c = 13.0;

  a = square(5.0);
  b = square(4.5 + 7.5);
  cout << "a = " << a << ", b = " << b << endl;
  cout << " c = " << c;
  cout << ", c squared = " << square(c++) << endl;
  cout << ", c squared = " << square(++c) << endl;
  cout << "Now c = " << c << endl;
  return 0;

}
