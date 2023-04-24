#include <iostream>
using namespace std;

int main()
{
  for (int i = 1; i <= 10; i++) {
      if (i % 2 == 0) {
          cout << "printed a odd number" << endl;
          continue; // skip even numbers
          cout << " jumped " << endl; 
      }
      cout << i << endl;
  }
}
