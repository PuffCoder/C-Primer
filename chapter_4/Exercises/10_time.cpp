// 10. Write a program that requests the user to enter three times for the 40-yd dash (or 40-meter, if you prefer) and then displays the times and the average. Use an array object to hold the data. (Use a built-in array if array is not available.)
// Date : 02 April 2023

#include <iostream>
#include <array>

using namespace std;

int main() 
{
  array<double,3> times ;
  double avr = 0;
  for (int i = 0; i < 3; i++)
  {
    cout << "Enter " << i + 1<< " s" << endl;
    cin >> times[i];
    avr += times[i];
  }
  cout << "The average time is " << avr/3 << endl;

  return 0;

}
