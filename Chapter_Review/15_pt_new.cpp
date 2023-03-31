// 15 Write a code fragment that dynamically allocates a structure of the type described in Question 8 and then reads a value for the kind member of the structure.
// Date : 31 March 2023

#include <iostream>
using namespace std;

struct fish
{
  string kind;
  int weight;
  double length;
};


int main() 
{
  fish a ={ "blue cod", 14, 12.3};
  fish * pt = new fish; // allocates a new fish space for pointer 'pt'
  pt = &a; // connect pointer with last fish
  cout << pt->kind << endl;

}
