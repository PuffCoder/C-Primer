// 7. Redo Listing 7.7, 
// modifying the three array-handling functions to each use two pointer parameters to represent a range.
//
// The fill_array() function, 
// instead of returning the actual number of items read, 
// should return a pointer to the location after the last location filled; 
//
// the other functions can use this pointer as the second argument to identify the end of the data.
//
// Date : 24 April 2023
#include <iostream>
using namespace std;

int fill_array(double ar[], int limit);

int main() 
{
  


}

int fill_array(double ar[], int limit)
{
  double temp;
  int i;
  for (i = 0; i < limit; i++)
  {
    cout << "Enter value #" << (i+1) << ": ";
    cin >> temp;
    if(!cin) // bad input
     { 
      cin.clear();
      while (cin.get() != '\n')
        continue;
      cout << "Bad input: input process terminated. \n";
          break;
      } else if (temp < 0)  // signal to terminate
          break;
        ar[i] = temp;
  }
    return i;
}


