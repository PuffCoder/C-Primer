// 7. William Wingate runs a pizza-analysis service. For each pizza, he needs to record the following information: n The name of the pizza company, which can consist of more than one word n The diameter of the pizza n The weight of the pizza Devise a structure that can hold this information and write a program that uses a structure variable of that type.The program should ask the user to enter each of the preceding items of information, and then the program should display that information. Use cin (or its methods) and cout.
//
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

void enter_data(PIZZA data)
{

  cout << "What is the pizza's brand? " << endl;
  cin >> data.name;

  cout << "What is the pizza's diameter? " << endl;
  cin >> data.diameter;

  cout << "What is the pizza's weight? " << endl;
  cin >> data.weight;
  
  cout << "Brand: " << data.name << " Diameter: " << data.diameter << " Weight: " << data.weight;

}

int main() 
{
  PIZZA pizza;
  enter_data(pizza);
  return 0;

}
