/* Write overloaded versions of iquote(), 
   a function that displays its argument enclosed in double quotation marks.
   Write three versions: one for an int argument, one for a double argument, 
   and one for a string argument. */

#include <iostream>
#include <cstring>
using namespace std;

/* template <class T> */
/* void iquote(T a); */ // version 1: use template 

void iquote(int a) { cout << "\"" << a << endl;}
void iquote(double a) { cout << a << endl;}
void iquote(string a) { cout << a << endl;}

int main() 
{
  int a = 13;
  double b = 9.527;
  string s = "hello world";
  iquote(a);
  iquote(b);
  iquote(s);
  return 0;
}

/* template <class T> */
/* void iquote(T a) */
/* { */
  /* cout << a << endl; */
/* } */

