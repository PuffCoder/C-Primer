//Exercise 2.8: Using escape sequences, 
// write a program to print 2M followed by a newline. 
// Modify the program to print 2, 
// then a tab, 
// then an M, 
// followed by a newline

// Author: Heng Yin
// Date: 28 Feb 2023
#include <iostream>
using namespace std;

int main()
{
  cout << 2<< '\115' << '\n';
  // cout << 2 << '\011' << '\115' << '\xa' ;
  // cout << 2 << "\011\115\xa" ;
  cout << 2 << "\t\115\012" ;
    cout << "varify for new line" << endl;


    return 0;
}

