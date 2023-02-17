/*Exercise 1.5: We wrote the output in one large statement. Rewrite the program  to use a separate statement  to print each operand
 * Author: David Yin
 * Date: 17 Feb 2023
*/
#include <iostream>
using namespace std;

int main()
{
  cout << "Mutiply two numbers:" << endl;
  int v1 = 0, v2 = 0;
  cin >> v1 >> v2;
  cout << "The mutiplication of "; 
  cout << v1;
  cout << " and ";
  cout << v2;
  cout << " is ";
  cout << v1 * v2 << endl;
    return 0;
}

  
