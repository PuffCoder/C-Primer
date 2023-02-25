#include <iostream>
#include "Sale_item.h"
using namespace std;

int main()
{
  Sales_item total;
  // input books isbn number
  if (cin >> total ) { 
    int count = 1;
    Sales_item trans;
      while (cin >> trans) { // keep read trans
        if (total.isbn() == trans.isbn()) {
        // when isbn was equaled 
          count++;
          total += trans;
        } else {
            cout << " which occurs " << count << " times " << endl;
            cout << total << endl;
            count = 1;
            total = trans;
          }
    }

    cout << " which occurs " << count << " times " << endl;
    cout << total << endl;

  } else {
    cerr << "ERROR: Please input correct ISBNs " << endl;
    return -1;
  }
  return 0;
}
