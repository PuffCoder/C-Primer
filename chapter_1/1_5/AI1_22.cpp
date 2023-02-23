#include <iostream>
#include "Sale_item.h"
using namespace std;

int main() 
{
  Sales_item total;

  if (cin >> total) {
    Sales_item item;
    while (cin >> item) {
      if (item.isbn() == total.isbn()) {
        total += item;
      } else {
        cerr << "ISBNs do not match." << endl;
        return -1;
      }
    }
  cout << "Total: " << total << endl;
  } else {
     cerr << "No data entered." << endl;
    return -1;
  }
  return 0;

}

// summary: 
// 1. if error occurs return -1
// 2. not need use 3 Sales_items.
