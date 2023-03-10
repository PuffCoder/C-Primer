// structur.cpp 
//
// Author : Heng Yin
// Date : 10 March 2023

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
  inflatable guest[2] = 
  {
      {"Bambi", 0.5, 21.99},  
      {"Godzilla", 2000, 565.99}
  };
// It's initialized to the indicated values

  // static inflatable guest =
  //
  cout << "The guests " << guest[0].name << " and " << guest[1].name
  << "\nhave a bombined volum of "
    << guest[0].volume + guest[1].volume << " cubic feet.\n";

  return 0;

}
