#include <iostream>
using namespace std;

int fill_array(double ar[], int limit)
{
    double temp;  // temporary variable to hold user input
    int i;  // loop counter

    // loop through the array, prompting the user for input
    for (i = 0; i < limit; i++)
    {
        cout << "Enter value #" << (i+1) << ": ";
        cin >> temp;

        // if input is bad (not a double), clear the input stream and display an error message
        if (!cin)
        {
            cin.clear();  // clear the error flag
            while (cin.get() != '\n')  // clear the input stream
                continue;
            cout << "Bad input: input process terminated. \n";
            break;  // terminate the loop
        }
        else if (temp < 0)  // if user enters a negative value, terminate input and return the current array size
            break;
        else  // otherwise, store the input value in the array
            ar[i] = temp;
    }

    // return the current number of elements in the array
    return i;
}
