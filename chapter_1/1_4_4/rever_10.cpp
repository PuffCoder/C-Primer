// reverse 1.10:
// In addition to the ++ operator that adds 1 to its operand, there is a decrement operator (--) that subtracts 1. Use the decrement operator to write a while that prints the numbers from ten down to zero.
//
// Author: Heng Yin
// Date: 19 Feb 2023

#include <iostream>
using namespace std;

int main()
{
  int val = 0;
  while (val <= 10) {
  cout << val << " ";
    val ++;
  }
  return 0;
}
