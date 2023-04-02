// 3. Write a program that asks the user to enter his or her first name and then last name, and that then constructs, stores, and displays a third string, consisting of the user’s last name followed by a comma, a space, and first name. Use char arrays and functions from the cstring header file.A sample run could look like this: Enter your first name: Flip Enter your last name: Fleming Here’s the information in a single string: Fleming, Flip
// Date : 01 April 2023

#include <iostream>
#include <cstring>
using namespace std;

int main() 
{
  const int MAX_LENGTH = 100;
  char fir[MAX_LENGTH];
  char las[MAX_LENGTH];
  char full[MAX_LENGTH];
  
  cout << "Enter your first name: " << endl;
  (cin>>fir).get();

  cout << "Enter your last name: " << endl;
  (cin >> las).get();

  strcpy(full, las);
  strcat(full, ", ");
  strcat(full, fir);

  cout << "Here's the information in a single string: " << full << endl;
  return 0;

}
