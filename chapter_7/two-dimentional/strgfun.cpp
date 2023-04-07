// Listing 7.9 strgfun.cpp // strgfun.cpp -- functions with a string argument
// Date : 07 April 2023

#include <iostream>
#include <string>
using namespace std;

unsigned int c_in_str(const char* str, char ch);

int main() 
{
  char mmm[15] = "minimum"; // string in an array
  const char * wail = "ululate"; // wail points to string

  unsigned int ms = c_in_str(mmm,'m');
  unsigned int us = c_in_str(wail,'u');
  cout << ms << " m characters in " << mmm << endl;
  cout << us << " u characters in " << wail << endl;

  return 0;

}
// this function counts the number of ch characters in teh string str
//
unsigned int c_in_str(const char * str, char ch)
{
  unsigned int count = 0;

  while (*str) // quit when *str is '\0'
  {
  if (*str == ch)
    count++;
  str++;
  }
  return count;
}
