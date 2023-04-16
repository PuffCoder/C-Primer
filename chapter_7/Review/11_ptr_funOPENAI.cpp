
#include <iostream>

int judge(int (*func_ptr)(const char*));

int myFunction(const char* str) {
  std::cout << "Inside myFunction: " << str << std::endl;
  return 42;
}

int main() {
  int (*func_ptr)(const char*) = &myFunction;
  int result = judge(func_ptr);
  std::cout << "Result: " << result << std::endl;
  return 0;
}

int judge(int (*func_ptr)(const char*)) {
  const char* str = "Hello, world!";
  int result = (*func_ptr)(str);
  return result;
}
