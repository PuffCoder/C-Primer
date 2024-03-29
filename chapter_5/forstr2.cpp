// Listing 5.9 forstr2.cpp // forstr2.cpp -- reversing an array
// Date : 04 April 2023

#include <iostream>
using namespace std;

int main() 
{
  cout << "Enter a word: ";
  string word;
  cin >> word;

  // physically modify string object
  char temp;
  int i, j;
  for (j = 0, i = word.size() - 1; j < i; --i, ++j)
  {
    temp = word[i];
    word[i] = word[j];
    word[j] = temp;
    // cout << "WORD: " << word << endl;
  }
  cout << word << "\nDone\n";
  return 0;



}
