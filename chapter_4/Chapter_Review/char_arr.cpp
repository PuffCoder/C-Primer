// a. actors is an array of 30 char
// Date : 28 March 2023
//

#include <iostream>
#include <string>
#include <vector>
#include <array>

using namespace std;

int main() 
{
  char actors[30] ;
  strcpy(actors, "hello world");
  cout << actors << endl;

  // C++ 98 Standard Template Library
  vector<char> actors_V(2);
  actors_V[0] = 'a';
  actors_V[1] = 'a';
  // strncpy(actors_V , "Here is C++ 98 version");
  actors_V.push_back('H'); 
  cout << actors_V[0] << endl;
  cout << actors_V[1] << endl;
  cout << actors_V[2] << endl;

  array<char,30> actors_11 = {'T', 'H', 'i', 's'};

	// for (int i = 0, i < actors_11.size(, i++) 
  for (int i = 0; i < actors_11.size(); i++) 
		cout << actors_11[i];
	cout << endl;

      return 0;

}
