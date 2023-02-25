
#include <iostream>
using namespace std;

int main() {
    int a = 5, b = 0;
    double c;

    cout << "Enter a number: ";
    cin >> b;
    cout << "The value of a / b is: " << a / b << endl; // This will print an error message if b is 0

    // Example of using 'cerr' to print error message
    if (b == 0) {
        cerr << "Error: division by zero!" << endl;
    }

    // Example of using 'cout' to print debug information
    c = a / (double)b;
    cout << "The value of c is: " << c << endl;

    return 0;
}
