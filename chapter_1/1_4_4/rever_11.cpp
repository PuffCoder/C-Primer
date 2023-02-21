// Exercise 1.11: 
// Write a program that prompts the user for two integers.
// Print each number in the range specified by those two interegers
// 
// Author: Heng Yin
// Date: 19 Feb 2023

#include <iostream>
using namespace std;

int main()
{
  int fir_num=0, sec_num=0, val=0;

  cout << "Input two integer number" << endl;
  cin >> fir_num >> sec_num;
  if (fir_num > sec_num) {
    val = sec_num + 1;
    sec_num = fir_num;
  } else val = fir_num + 1;
  
  while (val < sec_num) {
    cout << val << " ";
    val++;
  }
    return 0;
}
    
