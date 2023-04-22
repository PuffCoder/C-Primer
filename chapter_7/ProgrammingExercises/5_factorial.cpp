// 5. Define a recursive function that takes an integer argument and returns the factorial of that argument. 
// Recall that 3 factorial, written 3!, equals 3 × 2!, 
// and so on, with 0! defined as 1. 
// In general, if n is greater than zero, n! = n * (n - 1)!.
// Test your function in a program that uses a loop to allow the user to enter various values for which the program reports the factorial.
// Date : 22 April 2023


#include <iostream>
using namespace std;

long int factorial(int num);

int main() 
{
  int num;
  cout << "plz enter a number for factorial calculation\n";
  cin >> num;

  cout << factorial(num) << endl;
}

long int factorial(int n) {
    if (n == 0) {
        return 1;
    } else {
        return n * factorial(n - 1);
    }
}
