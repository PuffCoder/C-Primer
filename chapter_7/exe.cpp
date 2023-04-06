// Listing 7.7 arrfun3.cpp 
// arrfun3.cpp -- array functions and const
// Date : 06 April 2023

#include <iostream>
using namespace std;

const int Max = 5;
// functino prototypes

int fill_array(double ar[], int limit);
void show_array(const double ar[], int n); // don't change data
void revalue(double r, double ar[], int n);

int main() 
{
  double properties[Max];

  int size = fill_array(properties, Max);
  show_array(properties, size);
  if (size > 0)
  {
    cout << "Enter revaluation factor: ";
    double factor;
    while (!(cin >> factor)) // bad input
    {
      cin.clear();
      while(cin.get() != '\n')
        continue;
      cout << "Bad input; Please enter a number: ";
    }
    revalue(factor, properties, size);
    show_array(properties, size);

  }
  cout << "Done.\n";
  cin.get();
  cin.get();
  return 0;
}


int fill_array(double ar[], int limit)
{
  double temp;
  int i;
  for (i = 0; i < limit; i++)
  {
    cout << "Enter value #" << (i+1) << ": ";
    cin >> temp;
    if(!cin) // bas input
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




