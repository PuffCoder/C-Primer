// 14. Is the following valid code? If so, what does it print? 
//
// cout << (int *) “Home of the jolly bytes”;
// 
// Date : 30 March 2023
//

#include <iostream>
#include <string>
using namespace std;

int main() 
{
  // string *pt = NULL;
  // cout << (char *) “Home of the jolly bytes”;
  cout << (void *) “Home of the jolly bytes”;
// cout << static_cast<const char*>("Home of the jolly bytes");
  // cout << (int *) 1; 


}
