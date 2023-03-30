// 11. Suppose ted is a double variable. Declare a pointer that points to ted and use the pointer to display ted’s value.
// Date : 30 March 2023

#include <iostream>
using namespace std;

int main() 
{
  double ted = 12.3234;
  double* pt = &ted;
  cout << *pt << endl;


}
