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
  inflatable guest = 
  {
    "Glorious Gloria", // name value 
    1.88,              // volume value
    29.99              // price value
  };
// It's initialized to the indicated values

  inflatable pal = 
  {
    "Audacious Arthur",
    3.12,
    32.99
    }; // pal is a second variable fo type inflatable
  //NOTE: some implementations require using 
  // static inflatable guest =
  //
  cout << "Expand your guest list with " << guest.name;
  cout << " and " << pal.name << "!\n";
  cout << "You can have both for $";
  cout << guest.price + pal.price << "!\n";
  return 0;

}
