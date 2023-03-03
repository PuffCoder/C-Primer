#include <iostream>
using namespace std;

int main()
{

  int i = 0, 
  &r1 = i; 
  double d = 0, 
  &r2 = d;

  cout << " i " << i << endl;
  cout << " r1 " << r1 << endl;
  cout << " d " << d << endl;
  cout << " r2 " << r2 << endl;
  cout << "------------------------" << endl;
 r2 = 3.14159;
  cout << " r2 " << r2 << endl;
 r2 = r1;
  cout << " r2 " << r2 << endl;

i = r2;
  cout << " i " << i << endl;
r1 = d;
  cout << " r1 " << r1<< endl;
}
