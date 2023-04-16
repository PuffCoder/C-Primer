// 8. Write a function that has this prototype: int replace(char * str, char c1, char c2); Have the function replace every occurrence of c1 in the string str with c2, and have the function return the number of replacements it makes.
// Date : 15 April 2023

#include <iostream>
#include <string>
using namespace std;

int replace(char *str, char c1, char c2);

int main() 
{
  // string str = "hello";
  char str[] = "hello";
  char c1 = 'l';
  char c2 = 'm';
  // cout << replace(&str[0], c1,c2) << endl;
  cout << replace(str, c1,c2) << endl;
  cout << str << endl;

}


int replace(char *str, char c1, char c2)
{
  int counter = 0;
  for (int i = 0; str[i] != '\0'; i++)
  {
    if (c1 == str[i])
    {
      str[i] = c2;
      counter ++;
    }
  }
  return counter;
}

