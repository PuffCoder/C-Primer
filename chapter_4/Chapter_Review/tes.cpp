
#include <array>
#include <vector>
#include <iostream>

// int main() {
//     std::array<long double, 54> dipsea_a {12, 32.23434, 34.121444003};
//     
//     for (const auto& element : dipsea_a) {
//         std::cout << element << std::endl;
//     }
//     
//     return 0;
// }

  void print_out(const std::vector<int>& vec)
  {
      for (const auto& elem : vec) {
          std::cout << elem << std::endl;
      }
  }

  int main()
  {
      std::vector<int> vec = {1, 3, 5, 7, 9};
      print_out(vec);

      return 0;
  }
