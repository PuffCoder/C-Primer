//3. Write a function that takes three arguments: the name of an int array, the array size, and an int value. Have the function set each element of the array to the int value.
// Date : 14 April 2023

#include <iostream>
using namespace std;

void fun(int * ar, int SIZE, int value);

#define SIZE 6
int main() 
{
  // int SIZE = 6;
  // int arr[SIZE] = {0,0,0,0,0,0};
  // int myArray[6] = {0}; // initializes all elements with 0
  int myArray[SIZE] = {0}; // initializes all elements with 0

  fun(myArray, SIZE,4);
  for (int i = 0;i<SIZE; i++)
  {
    cout<< myArray[i] << endl;
  }


}



void fun(int * ar, int size, int value)
{
  for ( int i = 0 ; i < size; i++)
  {
    ar[i] = value;
  }
  return;
}
