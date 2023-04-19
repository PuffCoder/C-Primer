// 4. Many state lotteries use a variation of the simple lottery portrayed by Listing 7.4. 
// In these variations you choose several numbers from one set and call them the field numbers. 
// For example, you might select five numbers from the field of 1–47).
// You also pick a single number (called a mega number or a power ball, etc.) from a second range, such as 1–27.
// To win the grand prize, you have to guess all the picks correctly.
// The chance of winning is the product of the probability of picking all the field numbers times the probability of picking the mega number. 
// For instance, the probability of winning the example described here is the product of the probability of picking 5 out of 47 correctly times the probability of picking 1 out of 27 correctly. Modify Listing 7.4 to calculate the probability of winning this kind of lottery
// Date : 20 April 2023

#include <iostream>
using namespace std;

long double probability(unsigned numbers, unsigned picks);



int main() 
{
  double total, choices;
  cout << "The total number of choices on the ball is 47\n"
    "the 5 numbe of picks allowed\n";
    total = 47; choices = 5; 
  double mega = 27;
  {
    cout << "You have on chance in ";
    cout << probability(total, choices);
    cout << " of winning.\n";
    cout << "Grand prize: " << mega * probability(total, choices);
  }
  return 0;


}



long double probability(unsigned numbers, unsigned picks)
{
  long double result = 1.0;
  long double n;
  unsigned p;

  for (n = numbers, p = picks; p > 0; n--, p--)
       result = result * n/p;
    return result;
}

