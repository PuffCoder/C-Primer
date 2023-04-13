// construct function prototypes that match the following descriptions:
//  igor()  -> no arguments and no return vale
// Date : 13 April 2023

#include <iostream>
#include <string>
using namespace std;

void igor(void); 
  // a. no arguments and no return value
float tofu(int n); 
  // b. takes an int argument and return a float
double mpg(double, double); 
  // c. takes 2 type doubel arguments and reutrns a double

long summation(long arr[], long size);
  // d. takes a name of a long array and an array size as values and return a long value. 
#define SIZE 5

double doctor(const string str);
  // e. takes a stirng argument( the string is not to be modified) and return a double value.

struct boss {
  string Q; 
  string A;
};
void ofcourse(boss a);
  // f. take a boss tructure as an argument and return nothing.

struct map {
  int x;
  int y;
};

string plot(map* ptr);
  // takes a pointer to a map sturcture as an argument and return a string

int main() 
{
  long arr[SIZE] = { 3243,546456,43563467,32214,3425551};
  igor();
  cout << tofu(3) << endl;
  cout << mpg(2.3, 3.4) << endl;
  cout << summation(arr,SIZE) << endl;
  cout << doctor("hello world") << endl;
  // boss a;
  // a.Q = "Are you able 996? ";
  // a.A = "Sure thing! ";
  boss a = {"working?", "ofcourse"};
  ofcourse(a);

  map location = {3, 4};
  map* ptr = &location;
  cout << plot(ptr) << endl;


}

string plot(map* ptr)
{
  string mess;
  mess = " The location is x: " +  to_string(ptr->x) + '\n' + " The location is y: " +  to_string(ptr->y);
  return mess;

}

void ofcourse(boss a)
{
  cout << a.Q << endl;
  cout << a.A << endl;
}

double doctor(const string str)
{
  double val = str.length() * 1.4;
  return val;
}


long summation(long arr[], long size)
{
   long sum = 0;
  for (int i = 0; i < size; i++)
  {
   sum += arr[i];
  }
  return sum;
}




double mpg(double a, double b)
{
  return a + b;
}

void igor(void)
{
  cout << "call igor function & no retrun value" << endl;
  return;
}

float tofu(int n)
{
  // Method 1:
    // float val = n ;
    // return val/23;
  // Method 2:
  return static_cast<float>(n) / 2;
}

