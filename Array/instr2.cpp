#include <iostream>
using namespace std;

int main()
{
  const int ArSize = 20;
  char name[ArSize];
  char dessert[ArSize];

    cout << "Enter your name:\n";
  cin.getline(name, ArSize); // reads throught newline
  // getline(array, size)
    cout << "Enter your favorite dessert:\n";
  cin.getline(dessert,ArSize);
    cout << "I have some deliciours " << dessert;
    cout << " for you, " << name << ".\n";
  cout << sizeof(name) << endl;
    return 0;
}
