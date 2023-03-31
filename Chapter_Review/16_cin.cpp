// 16. Listing 4.6 illustrates a problem created by following numeric input with line-oriented string input. How would replacing this:
// Date : 31 March 2023
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
  // cin.getline(address,80);
  cin >> address ;
  cout << "Year built: " << year << endl;
  cout <<"Address: " << address << endl;
  cout << "Done!\n";
  return 0;
}
//
//
// ANS: 
//    cin >> address 
//    only save data before the space 
//
//    cin.getline(address, 80)
//    save 80 char data
