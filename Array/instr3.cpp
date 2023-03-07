#include <iostream>
using namespace std;

int main()
{
  const int ArSize = 20;
  char name[ArSize];
  char dessert[ArSize];

  cout << "Enter your name:\n";
  
  cin.get(name,ArSize).get();
  // cin.get(name,ArSize);
  
  cout << "Enter your favorite dessert:\n";
   
  // cin.get(dessert,ArSize).get();
  cin.get(dessert,ArSize);
  cout << "I have some deliciours " << dessert;
    cout << " for you, " << name << ".\n";
  // cout << sizeof(name) << endl;
    return 0;
}
