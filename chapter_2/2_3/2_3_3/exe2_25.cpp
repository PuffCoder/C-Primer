#include <iostream>
using namespace std;

void q_a()
{
  int* ip, i, &r = i;
  // ip : int pointer
  // i : int 
  // r : refernce i  => r == i
  cout << ip << endl;
  cout << i << endl;
  cout << r << endl;
}

void q_b()
{
  int i, *ip = 0;
  // i : int 
  // ip : int point == 0   ----- ERROR
  cout << i << endl;
  cout << ip << endl;
}

void q_c()
{

   int* ip, ip2;
  // ip : int point
  // ip2 : int 
  cout << ip << endl;
  cout << ip2 << endl;
}

int main()
{
  q_a();
  q_b();
  q_c();
}

