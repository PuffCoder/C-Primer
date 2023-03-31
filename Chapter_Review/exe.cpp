// 17 Declare a vector object of 10 string objects and an array object of 10 string objects. Show the necessary header files and don’t use using. Do use a const for the number of strings.
// Date : 31 March 2023

#include <iostream>
#include <string>
#include <vector>
#include <array>

using namespace std;

int main() 
{
  vector <string> object(10) ;
  for (int i = 0; i < 10 ; i++)
  {
    object[i] = 'a' + i;
  }

  for (const auto& i : object)  
  {
    cout << i <<endl;
  }


}
