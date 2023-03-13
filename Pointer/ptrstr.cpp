// ptrstr.cpp -- using pointers to strings
// listing 4_20
// Author : Heng Yin
// Date : 12 March 2023

#include <iostream>
using namespace std;

int main() 
{
  char animal[20] = "bear";  
  const char* bird = "wren";  // bird is a ptr
  char *ps;  

  cout << animal << " and " ;
  cout << bird << "\n";
  cout << ps << "\n";

  cout << "Enter a kind of animal: ";
  cin >> animal;

  ps = animal;
  cout << ps << "!\n";
  cout << " Before using strcpy(): \n";
  cout << animal << " at " << (int *) animal << endl;
  cout << ps << " at " << (int *) ps << endl;

  // ps = new char[strlen(animal) + 1]; 
  ps = new char[strlen(animal) ]; 
  strcpy(ps, animal);

  cout << "After using strcpy():\n";
  cout << animal << " at " << (int *) animal << endl;
  cout << ps << " at " << (int *) ps << endl;

  delete [] ps;
  return 0;

}
