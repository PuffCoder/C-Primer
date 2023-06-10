// Exercise 1_1
//


#include <stdio.h>

int main() 
{
  int *pInt = NULL;
  int arr[2] = {1,2};
  pInt = arr;

  printf("%p %p\n", &pInt, &arr);
  printf("%p \n", pInt + 1);

  printf("%d \n", *pInt );
  printf("%d \n", *pInt + 1);

  return 0;

  /* cout << "Address: pInt  arr" << endl; */
  /* cout << &pInt << " " <<&arr << endl; */
  // address is different 
  /* cout << "Address: pInt + 1" << endl; */
  /* cout << pInt + 1 << endl; */

  /* cout << "Value pInt + 1" << endl; */
  /* cout << *pInt << endl; */
  /* cout << *pInt + 1 << endl; */

  /* cout << "Value arr" << endl; */
  /* printf("%x", &pInt); */

}
// Date : 10 June 2023
