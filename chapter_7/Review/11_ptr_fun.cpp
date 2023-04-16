// 11. The function judge() has a type int return value.As an argument, it takes the address of a function.The function whose address is passed, in turn, takes a pointer to a const char as an argument and returns an int.Write the function prototype.
// Date : 16 April 2023

#include <iostream>
using namespace std;

int Foo_fun(const char* str) {
	cout << "Inside myFunction: " << str << endl;
	return 39;
}

int judge(int (*Foo_fun)(const char* str))
{
	const char* str = "Hello, world!";
	int result = (*Foo_fun)(str);
	return result;
}

int main()
{
	int (*func_ptr)(const char*) = &Foo_fun;
	int result = judge(func_ptr);
	cout << "Result: " << result << endl;
	return 0;

}
