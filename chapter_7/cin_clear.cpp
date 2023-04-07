
#include <iostream>
using namespace std;

int main() {
  int num;
  cout << "Enter a number: ";
  cin >> num;
  if (cin.fail()) {
    cout << "Error: Invalid input\n";
    cin.clear();
    cin.ignore(10000, '\n');
  }
  cout << "The number you entered is: " << num << endl;
  return 0;
}
