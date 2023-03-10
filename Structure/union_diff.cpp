// Union only save one variable 
//
// Author : Heng Yin
// Date : 11 March 2023

#include <iostream>
#include <string>
using namespace std;

struct widget
{
  char brand[20];
  int type;
  union id
  {
    long id_num;
    char id_char[20];
  } id_val;
};

int main() 
{
  widget prize;
  strcpy(prize.brand, "hello world"); // prize.brand is hello world 
  prize.type = 1;

  prize.id_val.id_num = 1314;
  strcpy(prize.id_val.id_char, "hell");
  prize.id_val.id_num = 1314;
  
  // if (prize.type == 1) {
  //   cin >> prize.id_val.id_num;    // 
  //   cout << "id_num" << endl;
  // } else {
  //   cin >> prize.id_val.id_char;
  //   cout << "id_char" << endl;
  // }
  // cout << prize.brand << endl;
  // cout << prize.type << endl;
  cout << prize.id_val.id_num << endl;
  cout << prize.id_val.id_char<< endl;
  cout << prize.id_val.id_num << endl;
  
}
