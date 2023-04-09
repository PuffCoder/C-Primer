// Listing 7.14 topfive.cpp 
// topfive.cpp -- handling an array of string objects 
// Date : 09 April 2023

#include <iostream>
#include <string>
using namespace std;

const int SIZE  = 5;
void display(const string sa[], int n);

int main() 
{
  string list[SIZE]; // an array holding 5 string object
  cout << "Enter your " << SIZE << " favorite astronomical sights:\n";

  for ( int i = 0; i < SIZE; i++)
  {
    cout << i + 1 << ": ";
    getline(cin,list[i]);
  }

  cout << "You list: \n";
  display(list, SIZE);
  return 0;
}

void display(const string sa[], int n)
{
  for (int i = 0; i < n; i++)
    cout << i+ 1 << ": " << sa[i] << endl;
}
