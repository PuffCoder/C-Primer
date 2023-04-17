//Suppose we have the following structure declaration: 
// a. Write a function that takes an applicant structure as an argument and displays its contents.Suppose the functions f1() and f2() have the following prototypes: 

// Declare p1 as a pointer that points to f1 and p2 as a pointer to f2. Declare ap as an array of five pointers of the same type as p1, and declare pa as a pointer to an array of ten pointers of the same type as p2. Use typedef as an aid
// Date : 17 April 2023

#include <iostream>
using namespace std;

struct applicant { char name[30]; int credit_ratings[3]; }; 

void f1(applicant * a); 
const char * f2(const applicant * a1, const applicant * a2);

typedef void (*f1_ptr)(struct applicant *);
typedef const char* (*f2_ptr)(const struct applicant *, const struct applicant *);

int main() 
{

  f1_ptr p1 = &f1;
  f2_ptr p2 = &f2;

  f1_ptr ap[5];
  f2_ptr (*pa)[10];

  struct applicant my_applicant = {"John Smith", {80, 75, 90}};
  p1(&my_applicant);

  struct applicant applicant1 = {"John Smith", {80, 75, 90}};
  struct applicant applicant2 = {"Jane Doe", {85, 70, 95}};
  const char *result = p2(&applicant1, &applicant2);
}

void f1(applicant * a)
{
  cout << "Call function 1, " << a->name << endl;
  cout << "Credit_rating " << a->credit_ratings[0] << a->credit_ratings[1] << a->credit_ratings[2] << endl;
}

const char * f2(const applicant * a1, const applicant * a2)
{
  cout << '\n' << "Call 2nd " << endl;
  cout << "Call function 1, " << a1->name << endl;
  cout << "Credit_rating " << a1->credit_ratings[0] << a1->credit_ratings[1] << a1->credit_ratings[2] << endl;


  cout << "Call function 1, " << a2->name << endl;
  cout << "Credit_rating " << a2->credit_ratings[0] << a2->credit_ratings[1] << a2->credit_ratings[2] << endl;
  return a2->name;

}












