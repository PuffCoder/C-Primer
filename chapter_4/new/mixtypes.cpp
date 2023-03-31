// mixtypes.cpp -- some type combinations 
// Listing 4_23
// Author : Heng Yin
// Date : 14 March 2023

#include <iostream>
using namespace std;

struct antarctica_years_end
{
  int year;
};

int main() 
{
  antarctica_years_end s01, s02, s03;
  s01.year = 1998;
  antarctica_years_end * pa = &s02;
  pa->year = 1999;
  antarctica_years_end trio[3];  // array of 3 structures
  trio[0].year = 2003;
  trio[1].year = 203;
  cout << (trio+1)->year << endl;  // type->element
  cout << trio[2].year << endl;    // array.element
  
  const antarctica_years_end * arp[3] = {&s01, &s02, &s03};
  cout << arp[1]->year << endl;    // pt->element

  const antarctica_years_end ** ppa = arp;
  auto ppb = arp; // automatic type deduction or else use const antarctia_years_end ** ppb = arp;

  cout << (*ppa)->year << endl;
  cout << (*(ppb+1))->year << endl;
  return 0;

  


}
