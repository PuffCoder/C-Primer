// newstrct.cpp 
// listing 4_21
// Author : Heng Yin
// Date : 13 March 2023

#include <iostream>
using namespace std;

struct inflatable
{
  char name[20];
  float volume;
  double price;
};

int main() 
{
  inflatable * ps = new inflatable; // allot memory for structure
  cout << "Enter name of inflatable item: ";
  // cin.get(ps->name, 20);  // method 1 for member access
  cin >> ps->name ; // method 1 for member access
  cout << "Enter volume in cubic feet: ";
  cin >> (*ps).volume; // method 2 for member access
  // cin.get((*ps).volume,20); // method 2 for member access
  cout << "Enter price: $";
  cin >> ps->price;
  cout << "Name: " << (*ps).name << endl;  // method 2 
  cout << "Volume: " << ps->volume << " cubic feet\n" ; // method 1
  cout << "Price: $" << ps->price << endl; // method 1
  delete ps;
  return 0;


}
