// 10. Use enum to define a type called Response with the possible values Yes, No, and Maybe. Yes should be 1, No should be 0, and Maybe should be 2.
// Date : 29 March 2023
//

#include <iostream>
using namespace std;

enum class Responce
{
  No=0,
  Yes=1,
  Maybe=2
};

int main() 
{
  Responce r = Responce::No;

  switch(r)  {
    case Responce::No:
      cout << "No" << endl;
      break;
    case Responce::Yes:
      cout << "Yes!!" << endl;
      break;
    case Responce::Maybe:
      cout << "Yes!!" << endl;
      break;
  }
  return 0;

}
