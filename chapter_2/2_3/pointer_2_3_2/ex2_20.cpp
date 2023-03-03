#include <iostream>
using namespace std;

int main()
{

  int i = 42; // initialize int i = 42
  
  int *p1 = &i;  // a int pointer p1 = i address
  cout << *p1 << endl;
  cout << p1 << endl;
  
  *p1 = *p1 * *p1;
  cout << p1 << endl;
}

