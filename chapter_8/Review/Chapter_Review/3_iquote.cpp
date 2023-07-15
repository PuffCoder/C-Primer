// Overloaded function for "int, double, string"
// Date : 16 July 2023

#include <iostream>
#include <string.h>
using namespace std;

void iquote(int num)
{
  cout << '"' << num << '"' << endl;
}

void iquote(double pnum)
{
  cout << '"' << pnum << '"' << endl;
}

void iquote(string str)
{
  cout << '"' << str << '"' << endl;
}

int main() 
{
  iquote(4);
  iquote(4.88);
  iquote("Hello ");

}
