// accumulated input number until EOF ( End of File)
// Mac: cmd + d
// Win: cmd + z
//
// Author: Heng Yin
// Date : 20 Feb 2023
//
#include <iostream>
using namespace std;

int main()
{
  int sum = 0, value = 0;
  while(cin >> value) 
    sum += value;
  cout << "Sum is: " << sum << endl;
    return 0;
}

