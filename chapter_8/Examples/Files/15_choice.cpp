// choices.cpp -- choosing a template
// Date : 11 June 2023

#include <iostream>
using namespace std;

template<class T> // or template <typename T>
T lesser(T a, T b)  //1  
{
  return a < b ? a : b;
}

int lesser (int a, int b) // # 2 
{
  a = a < 0 ? -a : a;
  b = b < 0 ? -b : b;
  return a < b ? a : b;
}


int main() 
{
  int m = 20;
  int n = -30;
  double x = 15.5;
  double y = 25.9;

  cout << lesser(m,n) << endl;  // use #2 
  cout << lesser(x,y) << endl;  // use #1 
  cout << lesser<>(m,n) << endl;  // use #2 
  cout << lesser<int>(x,y) << endl;  // use #1 

  return 0;


}
