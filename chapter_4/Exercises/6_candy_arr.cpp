// 6. The CandyBar structure contains three members, as described in Programming Exercise 5.Write a program that creates an array of three CandyBar structures, initializes them to values of your choice, and then displays the contents of each structure.
// Date : 02 April 2023

#include <iostream>
using namespace std;

struct CandyBar
{
  string BrandName;
  double Weight;
  int Calories;
};

int main() 
{
  CandyBar var[2];
  var[0] = {"Mocha Munch", 2.3, 350};
  var[1] = {"Cheese Cake", 4.4, 440};

  for (int i = 0; i < 2; i++)
  {
    cout << var[i].BrandName << endl;
    cout << var[i].Weight<< endl;
    cout << var[i].Calories<< endl;
  }
  return 0;

}
