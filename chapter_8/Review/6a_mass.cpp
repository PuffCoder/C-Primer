// The following are some desired effects. Indicate whether each can be accomplished with default arguments, function overloading, both, or neither. Provide appropriate prototypes.

/* a. mass(density, volume) 
   returns the mass of an object having a density of density and a volume of volume, 
   whereas mass(density) returns the mass having a density of density and a volume of 1.0 cubic meters.
   All quantities are type double. */
// Date : 15 June 2023

#include <iostream>
using namespace std;

// default:
/* void mass(double density, double volume=1.0) */
/* { */
/*   cout << "Density of object: " << density << endl; */
/*   cout << "Volume of object: " << volume << endl; */
/*   cout << "Mass of object: " << density * volume << endl; */
/* } */

// overloading
void mass(double density, double volume)
{
  cout << "Density of object: " << density << endl;
  cout << "Volume of object: " << volume << endl;
  cout << "Mass of object: " << density * volume << endl;
}

void mass(double density)
{
  cout << "Density of object: " << density << endl;
  cout << "Volume of object: " << 1 << endl;
  cout << "Mass of object: " << density << endl;
}


int main() 
{
  mass( 1.1, 2.2);
  mass(3.3);
}
