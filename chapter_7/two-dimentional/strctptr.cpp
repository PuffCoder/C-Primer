// Listing 7.13 strctptr.cpp 
// strctptr.cpp -- functions with pointer to structure arguments
// Date : 07 April 2023

#include <iostream>
#include <cmath>
using namespace std;

struct polar
{
  double distance; 
  double angle;
};

struct rect
{
  double x;
  double y;
};

void rect_to_polar(const rect* pxy, polar *pda);
void show_polar(const polar * pda);


int main() 
{
  rect rplace;
  polar pplace;

  cout << "Enter the x and y values; ";
  while (cin >> rplace.x >> rplace.y) // slick use of sin
  { 
    rect_to_polar(&rplace, &pplace);  // pass addresses
    show_polar(&pplace);
    cout << "Next two numbers (1 to quit): ";
  }
    cout << "Done.\n";
    return 0;
}


// show polar corrdinates, converting angle to degrees
void show_polar (const polar *pda)
{
  const double Rad_to_deg = 57.29577951;

  cout << "distance = " << pda->distance;
  cout << ", angle = " << pda->angle * Rad_to_deg;
  cout << " degrees\n";
}

void rect_to_polar(const rect * pxy, polar * pda)
{
  pda->distance = sqrt(pxy->x * pxy->x + pxy->y * pxy->y );
  pda->angle = atan2(pxy->x, pxy->y);  // unit rad
}
    


