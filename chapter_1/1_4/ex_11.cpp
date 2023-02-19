// Exercise 1.11: 
// Write a program that prompts the user for two integers.
// Print each number in the range specified by those two int egers
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
    val = low;
    low = high; 
  } else val = high;
  
  while (val > low) {
    cout << val << " ";
    val--;
  }
    return 0;
}
    
