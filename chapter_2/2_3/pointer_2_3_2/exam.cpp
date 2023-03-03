#include <iostream>
using namespace std;
int main()
{
  // int *ip1, *ip2; // both ip1 and ip2 are pointers to int 
  // double dp, *dp2; // dp2 is a pointer to double; dp is a double

  int ival = 42; 
  int *p = &ival; //

    cout << "int ival address is: " << endl;
  cout << p << endl;
  cout << "point value is " << endl;
  cout << *p << endl;
  return 0;
}
