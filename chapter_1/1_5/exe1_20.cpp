// Exercise 1.20: http://www.informit.com/title/0321714113 contains a copy of Sales_item.h in the Chapter 1 code directory. Copy that file to your working directory. Use it to write a program that reads a set of book sales transactions, writing each transaction to the standard output.

// Author: Heng Yin
// Date : 22 Feb 2023
//

#include <iostream>
#include "Sale_item.h"
using namespace std;

int main() 
{
  Sales_item book;
  while(cin >> book) {
    cout << book;
  }
  return 0;
}

