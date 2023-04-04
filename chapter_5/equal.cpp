// Listing 5.10 equal.cpp // equal.cpp -- equality vs assignment
// Date : 04 April 2023

#include <iostream>
using namespace std;

int main() 
{
  int quizcores[10] = 
    { 20, 20, 20, 20, 20, 19, 20, 18, 20, 20};

  cout << "Doing it right:\n";
  int i;
  for (i = 0; quizcores[i] == 20; i++)
    cout << "quiz " << i << " is a 20\n";
// Warning: you may prefer reading about this program to actually running it.
  cout << "Doing it dangerously wrong:\n";

  // ************* code is wrong *******************
  // for (i = 0; quizcores[i] = 20; i++)
  //   cout << "quiz " << i << "is a 20\n";

  return 0;


}
