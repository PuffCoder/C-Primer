// pointer.cpp  -- our first pointer variable
// listing 4_15
// Author : Heng Yin
// Date : 11 March 2023

#include <iostream>
using namespace std;

int main() 
{
  int updates = 6;
  int * p_updates;
  p_updates = &updates;

  cout << "Values: updates = " << updates;
  cout << ", *p_updates = " << *p_updates << endl;

  cout << "Address: &updates = " << &updates;
  cout << ", p_updates = " << p_updates << endl;

  *p_updates = *p_updates + 1;
  cout << "Now updates = " << updates << endl;
  cout << "Now ponit value = " << *p_updates << endl;
  cout << "Now ponit value = " << &p_updates << endl;
  return 0;


}
