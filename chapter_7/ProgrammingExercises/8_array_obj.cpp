// 8. Redo Listing 7.15 without using the array class. 
// Do two versions: 
//        a. Use an ordinary array of const char * for the strings representing the season names, 
//              and use an ordinary array of double for the expenses.
//        b. Use an ordinary array of const char * for the strings representing the season names, 
//              and use a structure whose sole member is an ordinary array of double for the expenses. 
//     (This design is similar to the basic design of the array class.)
// Date : 26 April 2023

#include <iostream>
#include <array>
#include <string>
using namespace std;

// Const Data
const int Seasons = 4;
// const array<string, Seasons> Snames = {"Spring","Summer","Fall","Winter"};
// const array 
const char *Snames[Seasons] = {"Spring","Summer","Fall","Winter"};


// Function to modify array object
void fill(double *pa);

// Function to modify array object
void show(double *pa);


int main() 
{
  double expsenses[Seasons];
  fill(expsenses);
  show(expsenses);

  return 0;

}

void show(double *pa)
{
     double total = 0.0;
     cout << "\nEXPENSES\n";
      for (int i = 0; i < Seasons; i++)
      {
           cout << Snames[i] << ": $" << pa[i] << endl;
            total += pa[i];
      }
  cout << "Total Expenses: $" << total << endl;
}



void fill(double *pa)
{
  for (int i = 0; i < Seasons; i++)
  {
     cout << "Enter " << Snames[i] << " expenses: ";
     cin >> pa[i];
  }
}

