// Listing 8.5 cubes.cpp 
// cubes.cpp -- regular and reference arguments
// Date : 02 May 2023

#include <iostream>
using namespace std;

double cube(double a);
double refcube(double &ra);


int main() 
{
  double x = 3.0;

  cout << cube(x);
  cout << " = cube of " << x << endl;
  cout << refcube(x);
  cout << " = cube of " << x << endl;

  return 0;

}

double cube(double a)
{
  return a *= a * a;
} 

double refcube (double &ra)
{
  ra *= ra * ra;
  return ra;
}
