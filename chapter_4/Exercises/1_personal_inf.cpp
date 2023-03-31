// Write a C++ program that requests and displays information as shown in the following example of output: What is your first name? Betty Sue What is your last name? Yewe What letter grade do you deserve? B What is your age? 22 Name: Yewe, Betty Sue Grade: C Age: 22
// Date : 01 April 2023

#include <iostream>
#include <string>

using namespace std;

struct Person {
  string fir_name;
  string las_name;
  char grade;
  int age;
};


int main() 
{
  Person A;
  cout << "What is your first name? " << endl;
  // cin.get(name);
  getline(cin,A.fir_name);
  // cout << A.fir_name << endl;

  cout << "What is your last name? " << endl;
  getline(cin,A.las_name);

  cout << "What letter grade do you deserve? " << endl;
  cin.get(A.grade);

  cout << "What is your age? " << endl;
  cin >> A.age;

  cout << "Name: " << A.las_name << ", " << A.fir_name << endl;
  cout << "Grade: " << char(A.grade + 1) << endl;
  cout << "Age: " << A.age << endl;

}
