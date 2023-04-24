#include <iostream>
#define SIZE 5

int* fill_array(int* start, int* end);
void show_array(const int* start, const int* end);
void revalue(double r, int* start, const int* end);

int main()
{
    int arr[SIZE];
    int* end = fill_array(arr, arr + SIZE);
    show_array(arr, end);
    if (end != arr) {
        revalue(2.0, arr, end);
        show_array(arr, end);
    }
    std::cout << "Done.\n";

    return 0;
}

int* fill_array(int* start, int* end)
{
    int* ptr;
    int val;

    for (ptr = start; ptr < end; ptr++) {
        std::cout << "Enter a value for position " << ptr - start << ": ";
        std::cin >> val;
        if (!std::cin.fail()) {
            *ptr = val;
        } else {
            break;
        }
    }

    return ptr;
}

void show_array(const int* start, const int* end)
{
    const int* ptr;

    for (ptr = start; ptr < end; ptr++) {
        std::cout << "Value at position " << ptr - start << ": " << *ptr << '\n';
    }
}

void revalue(double r, int* start, const int* end)
{
    int* ptr;

    for (ptr = start; ptr < end; ptr++) {
        *ptr *= r;
    }
}
