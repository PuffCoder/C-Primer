// 12. Suppose treacle is an array of 10 floats.Declare a pointer that points to the first element of treacle and use the pointer to display the first and last elements of the array.
// Date : 30 March 2023

#include <iostream>
using namespace std;

int main() 
{
  float treacle[10] = {0.12, 0.23, 0.397, 23.324, 90.33, 0.234234, 0.43, 34, 554};
  float* pt = &treacle[0];

  for (int i = 0; i < 10; i++) 
  {
    cout << *pt << endl;
    pt += 1;
  }


}
