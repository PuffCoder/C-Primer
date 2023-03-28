// 3.Declare an array of five ints and initialize it to the first five odd positive integers.
// Date : 29 March 2023
//

#include <iostream>
#include <vector>
#include <array>

using namespace std;

// void print_out(array<int,5>& arr)
// {
//   for (int i = 0; i< 5 ; i++)
//     cout << arr[i] << endl;
// }

void print_V(const vector<int>& arr)
{
  for (const auto& elem : arr ) {
    cout << elem << endl;
  }
}

int main() 
{
  // int ints[5] = {1,3,5,7,9};

// ******** c98 ********
  vector<int> ints_v = {1,3,5,7,9};
  // array<int,5> ints_a = {1,3,5,7,9};
  // print_out(ints_a);
  print_V(ints_v);


}
