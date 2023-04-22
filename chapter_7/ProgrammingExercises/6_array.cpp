// 6.  Write a program that uses the following functions: 
// Fill_array() takes as arguments the name of an array of double values and an array size. It prompts the user to enter double values to be entered in the array. It ceases taking input when the array is full or when the user enters non-numeric input, and it returns the actual number of entries.
// Show_array() takes as arguments the name of an array of double values and an array size and displays the contents of the array.
// Reverse_array() takes as arguments the name of an array of double values and an array size and reverses the order of the values stored in the array.
// The program should use these functions to fill an array, show the array, reverse the array, show the array, reverse all but the first and last elements of the array, and then show the array
// Date : 23 April 2023

#include <iostream>
using namespace std;

void Fill_array(double arr[], int size); 
void Show_array(double arr[], int size); 
void Reverse_array(double arr[], int size); 

int main() 
{
  int size = 4;

  cout << "Enter length of array " << endl;
  cin >> size;
  double* arr = new double[size];
  Fill_array(arr,size);
  Show_array(arr, size);
  Reverse_array(arr, size);
  Show_array(arr, size);
}

void Reverse_array(double arr[], int size)
{
  double temp;
  for(int i = 1; i < size / 2; i++)
  {
    temp = arr[i];
    arr[i] = arr[size - i - 1];
    arr[size - 1 - i] = temp;
  }
}


void Fill_array(double arr[], int size)
{
  int i = 0;
  while(i < size )
  {
    cin >> arr[i] ;
    i++;
  }
}

void Show_array(double arr[], int size)
{
  for (int i = 0; i < size; i++)
    cout << arr[i] << " " ;
  cout << endl;
}

