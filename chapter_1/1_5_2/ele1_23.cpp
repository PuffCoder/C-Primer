// Exercise 1.23: Write a program that reads several transactions and counts how many transactions occur for each ISBN.
// Author : Heng Yin
// Date : 23 Feb 2023
//

#include <iostream>
#include "Sale_item.h"
using namespace std;

int main()
{
  int count = 1;
  Sales_item preBOOK, curBOOK;

  if (cin >> preBOOK) {  // if input ISBN is correct
   while (cin >> curBOOK) {

      if (curBOOK.isbn() == preBOOK.isbn()) {
        count++;
        preBOOK += curBOOK;
      } else { 
        cout << "Transactions occurs: " << count << endl;
        cout << preBOOK << endl;
        count = 1;
        preBOOK = curBOOK; 
        // return -1;
      }
    }
        cout << "Transactions occurs: " << count << endl;
        cout << preBOOK << endl;
    return 0;

  } else {
    cout << "Please input correct ISBN serial" << endl;
    return -1;
  }
}
    
