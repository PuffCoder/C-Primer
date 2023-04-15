// 4.Write a function that takes three arguments: a pointer to the first element of a range in an array, a pointer to the element following the end of a range in an array, and an int value. Have the function set each element of the array to the int value.
// Date : 14 April 2023

#include <iostream>
using namespace std;

void fun(int* ar, int* en, int val);
void print(int* ar, int* en);

int main() 
{
  int arr[7] = {0,0,0,0,0,0,0};
  int * fir = arr;
  int * end = arr+8;
  fun(fir, end, 8);
  print(fir,end);

}

void fun(int* ar, int* en, int val)
{
  for(int* ptr = ar; ptr < en; ptr++)
    {
      *ptr = val;
    }
}



void print(int* ar, int* en)
{
  for(int* ptr = ar; ptr < en; ptr++)
    {
      cout << *ptr << endl ;
    }
}



