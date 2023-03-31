// 8. Devise a structure declaration that describes a fish.The structure should include the kind, the weight in whole ounces, and the length in fractional inches.
//
// 9. Declare a variable of the type defined in Question 8 and initialize it.
// Date : 29 March 2023
//

#include <iostream>
using namespace std;

struct fish
{
  string kind;
  int weight;
  double length;
};;

int main() 

{
  fish BC = {"blue cod", 12, 4.32};
  cout << BC.kind << endl;
  cout << BC.weight << " ounces" << endl;
  cout << BC.length << " inches" << endl;


}
