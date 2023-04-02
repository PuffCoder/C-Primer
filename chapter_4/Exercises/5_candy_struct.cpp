// 5. The CandyBar structure contains three members.The first member holds the brand name of a candy bar.The second member holds the weight (which may have a fractional part) of the candy bar, and the third member holds the number of calories (an integer value) in the candy bar.Write a program that declares such a structure and creates a CandyBar variable called snack, initializing its members to "Mocha Munch", 2.3, and 350, respectively.The initialization should be part of the declaration for snack. Finally, the program should display the contents of the snack variable.
// Date : 02 April 2023

#include <iostream>
#include <string>
using namespace std;

struct CandyBar
{
  string BrandName;
  double Weight;
  int Calories;
};

int main() 
{
  CandyBar snack = {"Mocha Munch", 2.3, 350};
  cout << snack.BrandName << endl;
  cout << snack.Weight<< endl;
  cout << snack.Calories<< endl;

  return 0;
}
