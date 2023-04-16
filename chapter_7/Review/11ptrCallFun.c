
#include <stdio.h>

int judge(int (*func_ptr)(const char*));

int myFunction(const char* str) {
  printf("Inside myFunction: %s\n", str);
  return 42;
}

int main() {
  int (*func_ptr)(const char*) = &myFunction;
  int result = judge(func_ptr);
  printf("Result: %d\n", result);
  return 0;
}

int judge(int (*func_ptr)(const char*)) {
  const char* str = "Hello, world!";
  int result = (*func_ptr)(str);
  return result;
}
