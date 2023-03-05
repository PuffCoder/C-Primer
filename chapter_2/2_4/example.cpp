#include <iostream>
using namespace std;

// const int ci = 1024;
// const int &r1 = ci;
// r1 = 42;
// int &r2 = ci;

int main()
{
  int i = 42;
  const int &r1 = i;
  cout << i << endl;
  cout << r1 << endl;
  r1 = 32;

  cout << i << endl;
  cout << r1 << endl;
 
  // const int &r2 = 42;
  // const int &r3 = r1 * 2;
  // int &r4 = r * 2;
  //
  // double dval = 3.14;
  // const int &ri = dval;



}

