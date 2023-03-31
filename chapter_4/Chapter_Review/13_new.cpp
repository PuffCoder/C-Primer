//13. Write a code fragment that asks the user to enter a positive integer and then creates a dynamic array of that many ints. Do this by using new, then again using a vector object
// Date : 30 March 2023

#include <iostream>
using namespace std;

int main() 
{
  int length = 0;
  cin >> length;
  while (length < 0 ) {
    cout << "the length could not be negative number, plz enter positive num" << endl;
    cin >> length;
  }

  int* pt = new int [length];
  pt[0] = 1;

  for (int i = 1; i < length ; i++)
  {
    pt[i] = i + 1 ;
  }

  for (int i = 0; i < length ; i++)
  {
    cout << *pt << endl;
    pt += 1;
  }
  pt -=length;

  delete[] pt;
  return 0;

}
