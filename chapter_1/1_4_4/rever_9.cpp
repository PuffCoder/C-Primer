// Rever Exercise 1.9:
// Write a program  that uses a while to sum the numbers from 100 to 50.
//
// Author: Heng Yin
// Date: 19 Feb 2023
#include <iostream>
using namespace std;

int main()
{
  int val = 100, sum = 0;
  while (val >= 50) {
  cout << val << " ";
    sum += val;
    val--;
  }
  cout << sum << endl;
  return 0;
}
