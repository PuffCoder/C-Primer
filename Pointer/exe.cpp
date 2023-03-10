// Exercise 1_1
//
// Author : Heng Yin
// Date : 11 March 2023

#include <iostream>
using namespace std;

int main() 
{
  // long * fellow;
  // *fellow = 223323;
  //
  // cout << fellow << endl;
  // cout << *fellow << endl;

  int * pt;
  // pt = 0xB8000000;

  pt = (int *) 0xB8000000;
  cout << pt << endl;
  cout << *pt << endl;



}
