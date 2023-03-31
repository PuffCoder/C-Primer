// betsie is an array of 100 short 
// Date : 28 March 2023
//

#include <iostream>
#include <array>
#include <vector>
using namespace std;

int main() 
{
  short int betsie[100] =  {100,200,300,400};
  // the array is address;
  // **************************   PRINT FUNCTION **********************
  // for (int i = 0; i < sizeof(betsie)/sizeof(betsie[0]); i++)
    // cout << betsie[i]<< endl;
  // **************************   PRINT FUNCTION **********************

//  C++ 98 STL
  vector<short> betsie_98(10);
  betsie_98[0] = 1;
  betsie_98[2] = 3;
  for (int i = 0; i < betsie_98.size(); i++)
    cout << betsie_98[i]<< endl;
    
// ************************** C++ version *******************
  array<short,10> betsie_11 = {2, 4, 6,9};
  // for (int i = 0; i < betsie_11.size(); i++)
    // cout << betsie_11[i]<< endl;


}
