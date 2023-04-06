// Listing 7.6 arrfun2.cpp 
// arrfun2.cpp -- functions with an array argument
// Date : 05 April 2023

#include <iostream>
#include <math.h>
using namespace std;

const int ArSize = 8;
int sum_arr(int arr[], int n);   // prototype
// use std:: instead of using directive

int main() 
{
  int cookies[ArSize] = {1,2,4,8,16,32,64,128};
  // some system require proceding int with staticto enable array initialization

  cout << cookies << " = array address, ";
  // some systems require a type cast: unsigned (cookies)

  cout << sizeof cookies << " = sizeof cookies\n";
  int sum = sum_arr(cookies, ArSize);
  cout << "Total cookies eaten: " << sum << "\n";

  sum = sum_arr(cookies,3); // a lie
  cout << "First three eaters ate " << sum << " cookies.\n";
  sum = sum_arr(cookies + 4, 4); // another lie
  cout << "Last four seaters ate " << sum << " cookies.\n";
  
  return 0;

}

// return the sum of an integer array

int sum_arr(int arr[], int n)
{
  int total = 0;
  cout << arr << " = arr, ";
  // some systems require a type cast: unsigned (arr)
  cout << sizeof *arr <<" = sizeof arr\n";

  for (int i=0; i < n; i++)
       total = total + arr[i];
  return total;
}

