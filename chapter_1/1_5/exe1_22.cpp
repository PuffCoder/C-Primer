// Exercise 1.22: Write a program that reads several transactions for the same ISBN
// Write the sum of all the transactions that were read
// 
// Author : Heng Yin
// Date : 22 Feb 2023
//
#include <iostream>
#include "Sale_item.h"
using namespace std;

int main()
{
  Sales_item book1, book2, sum;
  cin >> book1;
    while (cin >> book2) {
    sum += book1;
      if (book1.isbn() != book2.isbn()) {
      cout << "the isbn number are different. \n The book IBSN is: " << sum.isbn() << endl;
      cout << " sale_num: " << sum << endl;
      break; } else {
        book1 = book2;
      }
  }
    return 0;
}

// compare with AI version:
// 
