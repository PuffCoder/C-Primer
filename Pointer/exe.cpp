// Exercise 1_1
//
// Author : Heng Yin

#include <iostream>
using namespace std;

int main() 
{

  char food[20] = "carrots";
  char *ps;

  strncpy(food,"a picnic basket filled with many goodies",19);
  food[19] = '\n';
  cout << food << endl;

  ps = food;

  cout << "add for food " << (int *) food << endl;
  cout << "food " << food << endl;
  cout << "add for ps     " << (int *) ps << endl;
  cout << "ps " << ps << endl;
  
  // ps = new char[strlen(food) + 1];
  ps = new char[strlen(food) ];
  strcpy(ps,food);
  cout << "add for food " << (int *) food << endl;
  cout << "food " << food << endl;
  cout << "add for ps     " << (int *) ps << endl;
  cout << "ps " << ps << endl;
  

}
// Date : 13 March 2023
