// Exercise 1_1
//

#include <iostream>
using namespace std;

/* 1. default: time1 = 1 */
/* void song(const char * name, int times = 1) */
/* { */
/*   cout << times << endl; */
/* } */

/* 2. default: string = "O. My Papa" */
void song(const char * name = "O, My Papa", int times = 1)
{
  cout << name << endl;
  cout << times << endl;
}

int main() 
{
  /* char * D = "hi"  ; */
  /* int num ; */
  /* song( D,num); */
  song();


}
// Date : 16 July 2023
