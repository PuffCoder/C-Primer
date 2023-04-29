// 10. Design a function calculate() 
// that takes two type double values and a pointer to a function 
// that takes two double arguments and returns a double.
//
// The calculate() function should also be type double, 
// and it should return the value that the pointed-to function calculates, 
// using the double arguments to calculate(). 
//
// For example, suppose you have this definition for the add() function: 
//
// double add(double x, double y) 
// { return x + y; } 
//
// Then, the function call in the following would cause calculate() to pass the 
// values 2.5 and 10.4 to the add() function and then return the add() return value (12.9): double q = calculate(2.5, 10.4, add); Use these functions and at least one additional function in the add() mold in a program.The program should use a loop that allows the user to enter pairs of numbers. For each pair, use calculate() to invoke add() and at least one other function. If you are feeling adventurous, try creating an array of pointers to add()-style functions and use a loop to successively apply calculate() to a series of functions by using these pointers. Hint: Here’s how to declare such an array of three pointers: double (*pf[3])(double, double); Y ou can initialize such an array by using the usual array initialization syntax and function names as addresses.
// Date : 30 April 2023
//


#include <iostream>
using namespace std;

double addition(double x, double y);
double subtraction(double x, double y); 
double multiplication(double x, double y); 
double division(double x, double y);

// double calculate(double x, double y, double * fun);
double calculate(double x, double y, double (*cal_F)(double x, double y));

int main() 
{
  double x,y;
  cout << "Enter the x value: " << endl;
  cin >> x;

  cout << "Enter the y value: " << endl;
  cin >> y;

  cout << calculate(x,y,&addition) << endl;
  cout << calculate(x,y,&subtraction) << endl;
  cout << calculate(x,y,&multiplication) << endl;
  cout << calculate(x,y,&division) << endl;

}

double calculate(double x, double y, double (*cal_F)(double x, double y))
{
  // double (*)(double x, double y) = &cal_F;
  return cal_F(x,y);

}

double addition(double x, double y) 
{
  cout << "Puls ";
  return x + y;
}


double subtraction(double x, double y)
{
  cout << "Minus ";
  return x - y;
}

double multiplication(double x, double y)
{
  cout << "Times ";
  return x * y;
}

double division(double x, double y)
{
  cout << "Of ";
  if (y == 0) {
    throw runtime_error("ERROR!! The denominator could not be Zero!"); 
    // throw ("ERROR!! The denominator could not be Zero!"); 
  } else {
    return x / y;
  }
}







