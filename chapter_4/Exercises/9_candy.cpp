// 9. Do Programming Exercise 6, but instead of declaring an array of three CandyBar structures, use new to allocate the array dynamically.
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
  CandyBar* pt = new CandyBar[3];
  pt[0] = {"Mocha Munch", 2.3, 350};
  pt[1] = {"Cheese Cake", 3.4, 490};
  pt[2] = {"Yorger",4.2, 930};

  for (int i = 0; i < 3 ; i++ )
  {
    cout << pt[i].BrandName << pt[i].Weight << pt[i].Calories << endl;
  }
  return 0;


}
