// init_ptr.cpp 00 initialize a pointer
// listing 4_16
// Author : Heng Yin
// Date : 11 March 2023

#include <iostream>
using namespace std;

int main() 
{
  int higgens = 5;
  int * pt = &higgens;

  cout << "Value of higgens = " << higgens << "; Address of higgens = " << &higgens << endl;
  cout << "Value of * pt = " << *pt << "; value of pt = " << pt << endl;
  return 0;



}
