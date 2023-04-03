// Listing 5.3 express.cpp // express.cpp -- values of expression
// Date : 03 April 2023

#include <iostream>
using namespace std;

int main() 
{
  int x;
  cout << "The expression x = 100 has the value ";
  cout << (x = 100) << endl;
  cout << "Now x = " << x << endl;
    // x = 100
  cout << "The expression x < 3 has the value ";
  cout << (x < 3) << endl;
    // false => 0
  cout << "The expression x > 3 has the value ";
  cout << (x > 3) << endl;
    // ture => 1

    cout.setf(ios_base::boolalpha); // a newer C++ feature
  // same above but use word express
  cout << "The expression x < 3 has the value ";
  cout << (x < 3) << endl;
  cout << "The expression x > 3 has the value ";
  cout << (x > 3) << endl;
    return 0;

}
