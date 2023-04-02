// 8. Do Programming Exercise 7 but use new to allocate a structure instead of declaring a structure variable.Also have the program request the pizza diameter before it requests the pizza company name.
// Date : 02 April 2023

#include <iostream>
#include <string>
using namespace std;

struct PIZZA
{
  string name;
  float diameter;
  float weight;
};

void enter_data(PIZZA &data)
{

  cout << "What is the pizza's diameter? " << endl;
  cin >> data.diameter;

  cout << "What is the pizza's brand? " << endl;
  // cin.ignore();
  cin >> data.name;

  cout << "What is the pizza's weight? " << endl;
  cin >> data.weight;
  

}

int main() 
{
    PIZZA* temp = new PIZZA;
    enter_data(*temp);
    cout << "Pizza brand: " << temp->name << " diameter: " << temp->diameter << " weight: " << temp->weight << endl;
    delete temp;
    return 0;

}
