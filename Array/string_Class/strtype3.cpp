// Listing 4.9 strtype3.cpp 
//
// Author : Heng Yin
// Date : 10 March 2023

#include <iostream>
#include <string>
using namespace std;

int main() 
{
  char charr1[20];
  char charr2[20] = "jaguar";
  string str1;
  string str2 = "panther";

  // assignment for string objects and character arrays
  str1 = str2;
  strcpy(charr1, charr2);  // copy charr2 to charr1
  //
  // appending for string objects and character arrays
  str1 += " paste"; // add paste to end of str1
  strcat(charr1, " juice"); // add juice to end of charr1
  //
  // find the length of a string object and a C-style string
  int len1 = str1.size();
  int len2 = strlen(charr1); 
  
  cout << "The string " << str1 << " contains " << len1 << " characters.\n";
  cout << "The string " << charr1 << " contains " << len2 << " characters.\n";
    return 0;
}


  
