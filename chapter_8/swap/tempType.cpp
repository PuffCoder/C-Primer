// use template to swap 
// Date : 09 June 2023

#include <algorithm>
#include <atomic>
#include <iostream>

using namespace std;

template <typename D>
void swap(D *a, D *b, int n);
void show (int a[]);
const int Lim = 8;

int main() 
{
  int i = 10, j = 20;
  cout << "i, j = " << i << ", " << j << endl;
  cout << "Using compiler-generated int swapper:\n";
  swap(i,j);
  cout << "Now i, j = " << i << ", " << j << endl;

  double x = 23.34, y = 32.03;
  /* double y = 83.7; */

  cout << "x, y = " << x << ", " << y << endl;
  swap(x,y);
  cout << "Now x, y = " << x << ", " << y << endl;

  int d1[Lim] = {0,2,0,4,1,5,5,6};
  int d2[Lim] = {7,0,3,3,8,3,2,1};
  cout << "Original array:\n";
  swap(d1,d2,Lim);
  cout << "Swapped array:\n";
  show(d1);
  show(d2);
      
}

template <typename T>
void swap(T &a, T &b)
{
  T temp;
  temp = a;
  a = b;
  b = temp;
}

template <typename T>
void swap(T a[], T b[], int n)
{
  T temp;
  for (int i = 0; i < n; i++)
  {
    temp = a[i];
    a[i] = b[i];
    b[i] = temp;
  }
}


void show(int a[])
{
  cout << a[0] << a[1] << "/";
  cout << a[2] << a[3] << "/";
  for (int i = 4; i < Lim; i++)
    cout << a[i];
  cout << endl;
}









