// EXercise 1.13: Rewrite code below:
//
// #include <iostream> 
// int main() {     
//    int sum = 0, val  = 1;     // keep executing the while as long as val is less than or equal to 10     
//    while (val <= 10)  {         
//         sum += val;   // assigns sum + val to sum         
//         ++val;        // add 1 to val     
//     }     
//    std::cout << "Sum of 1 to 10 inclusive is "
//    << sum << std::endl;     
//  return 0;
//  }
//
//
// Author: Heng Yin 
// Date: 19 FEB 2023

#include <iostream>
using namespace std;

int main()
{
  int sum = 0;
  // for (int val = 1; val <= 10; ++val) { // ++i : 
  for (int val = 1; val <= 10; ++val) { // i++:
       sum += val;}
  cout << "Sum of 1 to 10 inclusive is " << sum << endl;
       return 0;
}
