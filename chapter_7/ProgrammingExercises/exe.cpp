// 2. Write a program that asks the user to enter up to 10 golf scores, which are to be stored in an array.Y ou should provide a means for the user to terminate input prior to entering 10 scores.The program should display all the scores on one line and report the average score. Handle input, display, and the average calculation with three separate array-processing functions.
// Date : 18 April 2023

#include <iostream>
using namespace std;

double* enterGolf(double* arr, int Size);
double meanVal(double *arr, int Size);
void display(double*arr,int Size);
int main() 
{
  double Arr[] = {0};
  double* Sco ;
  Sco = enterGolf(Arr, 10);
  display(Arr, 10);
  double res = 0;
  res = meanVal(Sco, 10);
  cout << "the mean value is " << res << endl;


}
double* enterGolf( double* arr, int Size)
{
  for(int i =0; i< Size; i++)
  {
    cout << "Enter number " << i +1 << " Score" << endl;
    cin >> arr[i];
  }
  return arr;
}

double meanVal(double *arr, int Size)
{
  double mean = 0;
  for(int i = 0; i<Size;i++)
    mean += arr[i];
  return mean/Size;
}


void display(double* arr, int Size)
{
  cout << "Display Result" << endl;
  for(int i = 0; i<Size; i++)
    {
      cout << arr[i] << endl;
    }
}



