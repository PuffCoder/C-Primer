/* average(3,6) returns the int average of two int arguments,
   and average(3.0, 6.0) returns the double average of two double values. */
// Date : 15 June 2023
//

#include <iostream>
using namespace std;

// OverLoad 
/* int average(int a, int b) { */
/*   return (a+b)/2; */
/* } */
/* double average(double a, double b) { */
/*   return (a+b)/2; */
/* } */

template <typename T>
T average(T a, T b){
  return (a+b)/2;
}

int main() 
{
  cout <<   average(3,6);
  cout << endl;
  cout << average(3.0,6.0);
}
