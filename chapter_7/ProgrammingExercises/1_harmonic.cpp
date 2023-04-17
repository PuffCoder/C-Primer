// 1. Write a program that repeatedly asks the user to enter pairs of numbers until at least one of the pair is 0. For each pair, the program should use a function to calculate the harmonic mean of the numbers.The function should return the answer to main(), which should report the result.The harmonic mean of the numbers is the inverse of the average of the inverses and can be calculated as follows: harmonic mean = 2.0 × x × y / (x + y)
// Date : 18 April 2023

#include <iostream>
using namespace std;

typedef double speed;

speed *harmonic_mean(speed a, speed b);
typedef speed* (*F_ptr)(speed, speed);


int main() 
{
  speed a;
  speed b;
  F_ptr myfun = &harmonic_mean;
  while (cin >> a >>b)
  { 
    if (a == 0 || b == 0)
      break;
    else
      cout << *myfun(a,b) << endl;
      // cout << harmonic_mean(a,b);  
  }
}



speed *harmonic_mean(speed a, speed b)
{
  cout << "use typedef pointer " << endl;
  speed *val = NULL;
  speed res = 2*a*b/(a+b);
  val = &res;
  return val;
}
