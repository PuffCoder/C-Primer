// tempover.cpp -- template overloading
// Date : 10 June 2023

#include <iostream>
using namespace std;

template <typename T> 
void ShowArray(T arr[], int n);

template <typename T>
void ShowArray(T * arr[], int n);

struct debts
{
  char name[20];
  double amount;
};

int main() 
{
  int things[6] = {13,31, 103, 301, 310,130};
  struct debts mr_E[3] =
  {
    {"Ima Wolfe", 2400.0},
    {"Ura Foxe", 1300.0},
    {"Iby Stout", 1800.0}
  };
  double * pd[3];

  for (int i = 0; i < 3; i++)
    pd[i] = &mr_E[i].amount;

    cout << "Listing Mr. E's counts of things:\n";
    // things is an array of int
    ShowArray(things,6); // uses template amount
    cout << "Listing Mr. E's debts:\n";
    //pd is an array of pointers to double
    ShowArray(pd,3); // uses template amount

    for ( int i = 0; i < 3; i++)
    {
      cout << &pd[i] << endl;
      /* cout << &mr_E[i].name << " " ; */
      /* cout << &mr_E[i].amount<< " " ; */

    }
      /* cout << sizeof(mr_E[0].name )<< " " ; */
      /* cout << sizeof(mr_E[0].amount)<< " " ; */
      /* cout << sizeof(mr_E[0])<< " " ; */
      /* cout << sizeof(debts)<< " " ; */
    return 0;


}

template <typename T>
void ShowArray(T arr[], int n)

{
  cout << "template A\n";
  for (int i = 0; i < n; i++)
    cout << arr[i] << ' ' ;
  cout << endl;
}


template <typename T>
void ShowArray(T * arr[], int n)
{
  cout << "template B\n";
  for (int i = 0; i < n; i++)
    cout << *arr[i] << ' ' ;
  cout << endl;

}
  
