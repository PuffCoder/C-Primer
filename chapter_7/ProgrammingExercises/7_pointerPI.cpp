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

double* fill_array(double* arpt, int* limitpt);
void show_array(const double* arpt, int* n);

const int Max = 5;

int main() 
{
  double arr[Max] = {0};
  double* arrayPT = arr;
  int limit = 5;
  int* limitPT = &limit;
  arrayPT = fill_array( arrayPT, limitPT);
  show_array(arrayPT, limitPT);

}

/**
 * @brief Show all the element in the array
 * @param An array, number
 */
void show_array(const double* arpt, int* n)
{
  for (int i = 0; i < *n; i++)
  {
    cout << "Property #" << (i+1) << ": $";
    cout << *arpt << endl;
    arpt++;
  }
  arpt = arpt - *n;

}

/**
  * @brief Fill the positive number into the array  
  * @param an array, limite number
  */

double* fill_array(double* arpt, int* limitpt)
{
  double temp;
  int i;
  for(i = 0; i < *limitpt; i++)
  {
    cout << "Enter value #" << (i+1) << ": ";
    cin >> temp;
    if(!cin) // bad input
    {
      cin.clear();
      while (cin.get() != '\n')
        continue;
      cout << "Bad input: input process terminated. \n";
        // return arpt;
        break;
    } else if (temp < 0)
        // return arpt;
        break;
      *arpt = temp;
      arpt++;
  }
  return arpt - i ;
}


