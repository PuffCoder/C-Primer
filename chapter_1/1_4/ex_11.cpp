// Exercise 1.11: 
// Write a program that prompts the user for two integers.
// Print each number in the range specified by those two integers
// 
// Author: Heng Yin
// Date: 19 Feb 2023

#include <iostream>
using namespace std;

int main()
{
  int low=0, high=0, val=0;

  cout << "Input two integer number" << endl;
  cin >> low >> high;
  if (low > high) {
    val = low - 1;
    low = high; 
  } else val = high - 1;
  
  while (val > low) {
    cout << val << " ";
    val--;
  }
    return 0;
}
    
