// Date : 11 July 2023

#include <iostream>
using namespace std;

template<typename T>
T tmax(T t1, T t2)
{
  return t1>t2?t1:t2;
}

int main() 
{
  cout<< tmax(1,23) << endl;
  cout<< tmax(1.32,23.32) << endl;
}
