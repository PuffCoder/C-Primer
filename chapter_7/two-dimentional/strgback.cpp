// Listing 7.10 strgback.cpp // strgback.cpp -- a function that returns a pointer to char
// Date : 07 April 2023

#include <iostream>
using namespace std;

char* buildstr(char c, int n);  

int main() 
{
  int times;
  char ch;

  cout << "Enter a character: ";
  cin >> ch;
  cout << "Enter a integer: ";
  cin >> times;

  char *ps = buildstr(ch, times);
  cout << ps << endl;
  delete [] ps;

  ps = buildstr('+', 20);
  cout << ps << "-DONE-" << ps << endl;
  
  delete [] ps;
  return 0;

}

char * buildstr(char c, int n)
// create a char array, repeat the ch n times the last char as EOF
{
  char * pstr = new char[n+1];
  pstr[n] = '\0';
    while(n-- >0)
      pstr[n] = c;
    return pstr;
}
