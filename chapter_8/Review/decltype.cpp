
#include <iostream>
#include <typeinfo>
using namespace std;

template <typename T>
void print_type(const T& value) {
    std::cout << "Type: " << typeid(value).name() << std::endl;
}

int main() {
    float m = 5.5f;
    float & rm = m;

    decltype(m) v1 = m;          // Type: float 
    print_type(m);
    print_type(rm);
    print_type(v1);
    cout << v1 << endl;
    /* decltype(rm);          // Type: float  */

    return 0;
}
