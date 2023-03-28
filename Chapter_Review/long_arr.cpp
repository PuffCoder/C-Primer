// 
// Date : 29 March 2023
//

#include <iostream>
#include <vector>
#include <array>
using namespace std;

int main() 
{
  long double dipsea[44] = {0};
  // long double dipsea[4];
  dipsea[0] = 12.234; 
  dipsea[1] = 1.234; 
  // for (int i = 0; i < sizeof(dipsea)/sizeof(dipsea[0]) ; i++)
  //   cout << dipsea[i] << endl;

// ********** C++ 98 STL *************
  vector<long double> dipsea_v(4);
  dipsea_v[0] = 12;
  dipsea_v[1] = 32.23434;
  dipsea_v[2] = 34.121444003;

  for (int i = 0; i < dipsea_v.size() ; i++)
    cout << dipsea_v[i] << endl;

// ************ C++ 11 ***********
  array<long double, 54> dipsea_a;
  dipsea_a[0] = 12;
  dipsea_a[1] = 32.23434;
  dipsea_a[2] = 34.121444003;
  // for (int i = 0; i < dipsea_a.size() ; i++)
  // for (int i = 0; i < sizeof(dipsea_a)/sizeof(dipsea_a[0]) ; i++)
  //   cout << dipsea_a[i] << endl;

}
