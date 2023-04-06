// Listing 7.5 arrfun1.cpp // arrfun1.cpp -- functions with an array argument
// Date : 05 April 2023

#include <iostream>
#include <math.h>
using namespace std;

const int ArSize = 8;
int sum_arr(int arr[], int n);   // prototype
int fun(void);

int main() 
{
  int cookies[ArSize] = {1,2,4,8,16,32,64,128};
  // some system require proceding int with staticto enable array initialization

  int sum = sum_arr(cookies, ArSize);
  cout << "Total cookies eaten: " << sum << "\n";
  cout << fun() << endl;
  return 0;

}

int fun(void)
{
  int sum = 0;
  for (int i =0; i<8 ;i++)
  {
    sum += pow(2,i);
    // cout << sum << endl;
  }
  return sum;
}

// return the sum of an integer array

int sum_arr(int arr[], int n)
{
  int total = 0;

  for (int i=0; i < n; i++)
       total = total + arr[i];
  return total;
}

