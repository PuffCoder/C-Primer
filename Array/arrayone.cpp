#include <iostream>
using namespace std;

int main()
{
  int yams[3];  //creates array with three elements
  yams[0] = 7;  // assign valut to first element
  yams[1] = 8;  // assign valut to second element
  yams[2] = 6;  // assign valut to third element

  int yamcosts[3] = {20, 30 , 5}; // creat, initialize array
  // NOTE: If c++ compiler or translator can not initialize this array, use static int yamcosts[3] instead of int yamcosts[3]
  cout << "Total yams = "; 
  cout << yams[0] + yams[1] + yams[2] << endl; 
  cout << "The package with " << yams[1] << " yams costs "; 
  cout << yamcosts[1] << " cents per yam.\n"; 
  int total = yams[0] * yamcosts[0] + yams[1] * yamcosts[1]; 
  total = total + yams[2] * yamcosts[2]; 
  cout << "The total yam expense is " << total << " cents.\n"; 
  cout << "\nSize of yams array = " << sizeof yams; cout << " bytes.\n"; 
  cout << "Size of one element = " << sizeof yams[0]; 
  cout << " bytes.\n"; return 0;
  return 0;
}
  
