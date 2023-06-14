// 4. The following is a structure template: 

struct box 
{ 
  char maker[40]; 
  float height; 
  float width; 
  float length; 
  float volume; 
}; 

/* a. Write a function that has a reference to a box structure as its formal argument  */
/* and displays the value of each member. */

/* b. Write a function that has a reference to a box structure as its formal argument  */
/* and sets the volume member to the product of the other three dimensions. */

// Date : 14 June 2023

#include <iostream>
using namespace std;

void ShowBox(box &TT);
void CalculateVolume(box &T);

int main() 
{
  box T = {"apple", 10,30,40};
  ShowBox(T);
  CalculateVolume(T);
  ShowBox(T);
  return 0;
}

void ShowBox(box &TT)
{
  cout << TT.maker << endl;
  cout << TT.height << endl;
  cout << TT.width << endl;
  cout << TT.length << endl;
  cout << TT.volume << endl;
}

void CalculateVolume(box &T)
{
  T.volume = T.height * T.width * T.length;
}
