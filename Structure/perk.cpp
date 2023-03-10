// perk.cpp
//
// Author : Heng Yin
// Date : 10 March 2023

#include <iostream>
#include <string>
using namespace std;


struct perks
{
  int key_number;
  char car[12];
// };
} mr_smith, ms_jones; // two perks variables
//
int main() 
{
  // perks mr_smith, ms_jones;
  mr_smith = { 13, "Toyota"};
  // mr_smith = {"Toyota"};
  ms_jones = { 35, "Honda"};
  // ms_jones = {  "Honda"};
    cout << mr_smith.car << " " << mr_smith.key_number;
    cout << ms_jones.car << " " << ms_jones.key_number;
    
    // cout << mr_smith.car << " " << endl;
    // cout << ms_jones.car << " " << endl; 


}
