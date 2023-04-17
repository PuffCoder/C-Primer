// 12.Suppose we have the following structure declaration: 
struct applicant {
  char name[30]; 
  int credit_ratings[3];
};
// Date : 16 April 2023

#include <iostream>
using namespace std;

void display(applicant book);
void dis_ptr(applicant* book);

int main() 
{
  applicant book = {"Little Princle", 527};
  display(book);
    applicant* ptr = &book;
  dis_ptr(ptr);
  return 0;
}
void dis_ptr(applicant* book)
{
  cout << '\n' << "pointer version" << endl;
  cout << book->name << endl;
  cout << book->credit_ratings[0] << book->credit_ratings[1] << 
  book->credit_ratings[2] << endl;

}


void display(applicant book)
{

  // for (int i = 0; i != '\0';i++)
  //   cout << book.credit_ratings[i] << endl;
  cout << book.name << endl;
  cout << book.credit_ratings[0]<< endl;
}
