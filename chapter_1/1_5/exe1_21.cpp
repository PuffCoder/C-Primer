// Exercise 1.21: Write a program that reads two Sales_item objects that have the same ISBN and produces their sum.
// Author: Heng Yin
// Date : 22 Feb 2023

#include <iostream>
#include "Sale_item.h"
using namespace std;

int main() 
{
  Sales_item book1, book2;
  cin >> book1 >> book2;

  if (book1.isbn() == book2.isbn()) {
    Sales_item sum = book1 + book2;
    cout << "Sum " << sum << endl;
  } else {
    cerr << "ISBNs do not match. " << endl;
  }
  
  return 0;
}
