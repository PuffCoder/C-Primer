#include <iostream>
#include "Sales_item.h"

using namespace std;

int main()
{
  Sales_item book;
  // read ISBN, number of copies sold, and sales price
  std::cin >> book;
    //write ISBN, bumber of copies sold, total revenue, and average price
  std::cout << book << std::endl;
    return 0;
}
