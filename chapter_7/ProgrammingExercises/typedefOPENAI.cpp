
#include <iostream>

typedef double (*hm_func_ptr)(double, double);

double harmonic_mean(double a, double b);

int main() 
{
  double a, b;

  hm_func_ptr hm_func = &harmonic_mean;

  while (std::cin >> a >> b)
  { 
    if (a == 0 || b == 0)
    {
      std::cout << "Error: the numbers cannot be zero." << std::endl;
      break;
    }

    double hm = (*hm_func)(a, b);
    std::cout << "The harmonic mean of " << a << " and " << b << " is " << hm << std::endl;
  }
}

double harmonic_mean(double a, double b)
{
  double hm = 2 * a * b / (a + b);
  return hm;
}
