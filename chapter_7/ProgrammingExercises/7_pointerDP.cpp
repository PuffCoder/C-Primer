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

double* fill_array(double* begin, double* end);
// void show_array(const double* begin, const double* end);
void show_array(const double* begin, const double* end);
void revalue(double r,double* begin, const double* end);

const int Max = 5;

int main() 
{
  double arr[Max] = {0};
  double* end = NULL;
  end = fill_array(arr, arr+Max);
  show_array(arr, end);
  revalue(3,arr,end);
  show_array(arr, end);

}

void revalue(double r,double* begin, const double* end)
{
  double* pt;
  for(pt = begin; pt < end; pt++)
  {
    *pt *= r;
  }

}



/**
 * @brief Show all the element in the array
 * @param An array, number
 */
// void show_array(double* begin, double* end)
void show_array(const double* begin, const double* end)
// void show_array(const double* begin, const double* end);
{
  int i = 0;
  const double* pt;
  for( pt = begin; pt < end; pt++)
  {
    cout << "Property #" << (i+1) << ": $";
    cout << *pt << endl;
    i++;
  }
}

/**
  * @brief Fill the positive number into the array  
  * @param an array, limite number
  */

double* fill_array(double* begin, double* end)
{
  double temp;
  double* pt = begin;
  int i=0;
  // for(i = 0; i < Max; i++)
  for(pt = begin; pt < end; pt++)
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
      *pt = temp;
      i++;
  }
  return pt;
}


