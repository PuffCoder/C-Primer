// Listing 8.11 funtemp.cpp 
// funtemp.cpp -- using a function template
// Date : 08 May 2023

#include <iostream>
using namespace std;
// function template prototype
template <typename T> // or class T
void Swap(T &a, T &b);

int main() 
{
  int i = 10;
  int j = 20;
  cout << "i, j = " << i << "," << j << ".\n";

  cout << "Using compiler-generated int swapper:\n";
  Swap(i,j); // generates void Swap(int &, int &(
  cout << "Now i, j = " << i << ", " << j << ".\n";

  double x =  24.5;
  double y = 81.7;
  cout << "x,y = " << x << ", " << y << ".\n";
  cout << "Using compiler-generated double swapper:\n";
  Swap(x,y); // generates void Swap(douoble &, double &)
  cout << "Now x, y = " << x << ", " << y << ".\n";
  // cin.get()
  return 0;
}

template <typename T> // or class T
void Swap(T &a, T &b)
{
  T temp;
  temp = a;
  a = b;
  b = temp;
}
