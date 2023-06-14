#include <cstring>  // For string manipulation functions
#include <iostream>  // For string manipulation functions
using namespace std;

char mangle(const char* str)
{
    // Modify the string as desired
    // Here, we replace "glad" with "mad" and "meet" with "gleet"
    const char* modifiedStr = std::strstr(str, "glad");
    if (modifiedStr != nullptr)
    {
        const char* restOfStr = modifiedStr + 4;  // Skip "glad"
        std::string newStr = "mad" + std::string(restOfStr);
        return newStr[0];  // Return the first character
    }
    
    // If no modification was made, return the first character of the original string
    return str[0];
}

const char* mangle(const char* str)
{
    // Modify the string as desired
    // Here, we replace "glad" with "mad" and "meet" with "gleet"
    std::string modifiedStr(str);
    size_t found = modifiedStr.find("glad");
    if (found != std::string::npos)
    {
        modifiedStr.replace(found, 4, "mad");
    }
    found = modifiedStr.find("meet");
    if (found != std::string::npos)
    {
        modifiedStr.replace(found, 4, "gleet");
    }
    
    // Allocate memory for the modified string and copy it
    char* newStr = new char[modifiedStr.length() + 1];
    std::strcpy(newStr, modifiedStr.c_str());
    
    return newStr;
}

int main()
{
    const char* str = "I'm glad to meet you";
    
    // Using the version that returns a char
    char resultChar = mangle(str);
    std::cout << "First character: " << resultChar << std::endl;
    
    // Using the version that returns a const char*
    const char* resultString = mangle(str);
    std::cout << "Modified string: " << resultString << std::endl;
    
    // Remember to deallocate the dynamically allocated memory
    delete[] resultString;
    
    return 0;
}

