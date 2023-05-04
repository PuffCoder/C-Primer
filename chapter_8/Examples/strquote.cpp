// Listing 8.7 strquote.cpp 
// strquote.cpp -- different designs
// Date : 04 May 2023

#include <iostream>
#include <string>
using namespace std;

string version1(const string & s1, const string & s2);
const string & version2(string & s1, const string & s2); // has side effect
const string & version3(string & s1, const string & s2); // bad design
// Beacuse the return is a reference, but the object has been destroied after the function version3.
// Therefore, it is unsaft. Should change the return as a string.

int main() 
{
  string input;
  string copy;
  string result;

  cout << "Enter a string: ";
  getline(cin, input);
  copy = input;
  cout << "You string as entered: " << input << endl;
  result = version1(input, "***");
  cout << "Your string enhanced: " << result << endl;
  cout << "Your original string: " << input << endl;

  result = version2(input, "###");
  cout << "Your string enhanced: " << result << endl;
  cout << "Your original string: " << input << endl;
  
  cout << "Resetting original string.\n";
  input = copy;
  result = version3(input, "@@@");
  cout << "Your string enhanced: " << result << endl;
  cout << "Your original string: " << input << endl;

  return 0;
}


string version1(const string & s1, const string & s2)
// const int a = 10, a can not changed value
{
  string temp;
  temp = s2 + s1 + s2;
  return temp;
}

const string & version2(string & s1, const string & s2) // has side effect
{
  s1 = s2 + s1 + s2;
  return s1;
}

const string & version3(string & s1, const string & s2) // bad design
{
  string temp;
  temp = s2 + s1 + s2;
  // unsafe to return reference to local variable
  return temp;
}











