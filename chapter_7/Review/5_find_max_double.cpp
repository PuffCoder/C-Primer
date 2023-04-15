// Write a function that takes a double array name and an array size as arguments and returns the largest value in that array. Note that this function shouldn’t alter the contents of the array.
// Date : 15 April 2023

#include <iostream>
using namespace std;

// struct val{
//   string name;
//   double value;
double find_biggest(double *, int size);

int main() 
{
  double arr[5] = {0.2323, 2.324,45.23232,0.4443,9.4333};
  double *ptr = arr;
  cout << find_biggest(ptr,5);

}

double find_biggest(double arr[], int size)
{
  double temp = 0.0;
  for (int i = 0; i< size; i++)
  {
    if (temp < arr[i])
      temp = arr[i];
  }
  return temp;
}

