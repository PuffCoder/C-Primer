// Listing 5.6 forstr1.cpp // forstr1.cpp -- using for with a string
// Date : 03 April 2023

#include <iostream>
using namespace std;

int main() 
{
  cout << "Enter a word: ";
  string word;
  cin >> word;

  //display letters in revers order
  for (int i = word.size() - 1; i >= 0; i--)
    cout << word[i];
  cout << "\nBye.\n";
  return 0;

}
