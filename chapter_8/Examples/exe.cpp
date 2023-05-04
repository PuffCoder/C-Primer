// Listing 8.8 filefunc.cpp 
// filefunc.cpp -- function with ostream & parameter
// Date : 04 May 2023

#include <iostream>
#include <fstream>
#include <cstdlib>
using namespace std;

void file_it(ostream & os, double fo, const double fe[], int n);
const int LIMIT = 5;

int main() 
{
  ofstream fout;
  const char * fn = "ep-data.txt";
  fout.open(fn);
  if(!fout.is_open())
  {
    cout << "Can't open " << fn << ". Bye.\n";
    exit(EXIT_FAILURE);
  }
  double objective;
  cout << "Enter the focal length of your " 
    "telescope objective in mm: ";
    cin >> objective;
  double eps[LIMIT];
  cout << "Enter the focal lengths, in mm, of " << LIMIT << " eyeipieces:\n";
  for (int i = 0; i < LIMIT; i++)
  {
    cout << "Eyepiece #" << i + 1 << ": ";
    cin >> eps[i];
  }
  file_it(fout, objective, eps, LIMIT);
  file_it(cout, objective, eps, LIMIT);
  cout << "Done\n";
  return 0;
}




}
