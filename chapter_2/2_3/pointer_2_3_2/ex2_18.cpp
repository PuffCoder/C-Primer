// Exercise 2.18: 
// Write code to change the value of a pointer. 
// Write code to change the value to which the pointer points.
//
//
#include <iostream>
using namespace std;

int main()
{
  int a = 4, b = 5;
  cout << "&a " << &a << endl;
  cout << "&b " << &b << endl;
  
  int *p1 = &a; // an int_pointer_[p1] point to int_[a]            
    // ---- p1 == & a
    // ---- *p1 == a
  int *p2 = p1; // an int_pointer_[p2] point to int_pointer_[p1]    
    // ---- p2 == & p1 
    // ---- *p2 == *p1 

  // int* ptr = nullptr;
  // ptr = &a; 
  // cout << *ptr << endl;
  // ptr = &b;
  
  cout << "P1 " << p1 << endl;
  cout << "&P1 " << &p1 << endl;
  cout << "*P1 " << *p1 << endl;
  cout << "P2 " << p2 << endl;
  cout << "&P2 " << &p2 << endl;
  cout << "*P2 " << *p2 << endl;
  p1 = &b; // 
  *p2 = b;
  cout << "new P2 value  " << p2 << endl;
  cout << "*P2 " << *p2 << endl;
  cout << "&P2 " << &p2 << endl;
  cout << "new P1 value  " << p1 << endl;
  cout << "&P1 " << &p1 << endl;
  cout << "*P1 " << *p1 << endl;

  return 0;
}
    

