// Unions
//
// Author : Heng Yin
// Date : 11 March 2023

#include <iostream>
using namespace std;

union one4all
{
  int int_val;
  long long_val;
  double double_val;
};


int main() 
{
  one4all pail;
  pail.int_val = 15 ;
  cout << pail.int_val << endl;
  pail.double_val = 1.38;
  cout << pail.double_val << endl;


}
