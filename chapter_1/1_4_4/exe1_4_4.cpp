// example code:
// input first number stored as currVal,
// rest of input number are stored in val.
// if number sequentially same, counter accumulated.


#include <iostream>
using namespace std;

int main()
{
  int currVal = 0, val = 0; 
  if (cin >> currVal) { // input currVal
    int cnt = 1;                // counter initionize as one
    while (cin >> val) {        // store number in val
      if (val == currVal)       // if val == currVal
        ++cnt;
      else {
          cout << currVal << " occurs " << cnt << " times " << endl; // 
          currVal = val;    
          cnt = 1;
        }
    }
    cout << currVal << " occurs " << cnt << " times " << endl;
    return 0;
  }
}
