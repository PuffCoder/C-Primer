#include <iostream>

int main() {
    unsigned int value = 0xABCD;  // Example value
    unsigned char buffer[4];     // Buffer to store bytes of the value

    // Storing the value byte by byte in the buffer
    for (int i = 0; i < 4; i++) {
        // buffer[i] = (value >> (i * 8)) & 0xFF;
        (buffer[i] >> 8) & 0xFF; 
    }

    // Accessing and printing the value of each byte in the buffer
    for (int i = 0; i < 4; i++) {
        std::cout << "Byte " << i << ": " << (int)(buffer[i] & 0xFF) << std::endl;
    }

    return 0;
}

