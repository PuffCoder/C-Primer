// Listing 4.6
// numstr.cpp -- following number input with line input
// Date: Mar XX 
//
#include <iostream>
using namespace std;

int main()
{
  cout << "What year was your house built?\n";
  int year;
  // cin >> year;
  (cin >> year).get();
  cout << "What is its street address?\n";
  char address[80];
  cin.getline(address,80);
  cout << "Year built: " << year << endl;
  cout <<"Address: " << address << endl;
  cout << "Done!\n";
  return 0;
}
