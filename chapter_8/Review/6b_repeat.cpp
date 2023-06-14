/* repeat(10, "I'm OK") displays the indicated string 10 times,  */
/* and repeat("But you're kind of stupid") displays the indicated string 5 times. */

// Date : 15 June 2023

#include <iostream>
#include <string>
using namespace std;

void repeat(int times , string str)
{
  for (int i = 0; i < times; i++)
  {
    cout  << str << endl;
  }
}

void repeat(string str)
{
  for (int i = 0; i < 5;i++)
    cout << str << endl;

}


int main() 
{
  repeat(10, "I'm OK");
  repeat("But you're kind of stupid");
}
