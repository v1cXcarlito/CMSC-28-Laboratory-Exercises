#include <iostream>
#include <string>

//Program Description
void displayProgramInfo() {
    std::cout << "Decimal to Binary" << std::endl;
    std::cout << "Programmer: Carl Raymund Suello" << std::endl;
    std::cout << "Course Name: CMSC 28" << std::endl;
}
// Function to convert decimal to binary
std::string decimalToBinary(int n) {
    // If the number is 0, its binary representation is 0
    if (n == 0)
        return "0";

    std::string binary = ""; // Initialize an empty string to store binary representation

    // Convert decimal to binary
    while (n > 0) {
        // Append the remainder of n divided by 2 to the binary string
        binary = std::to_string(n % 2) + binary;
        // Update n to the quotient of n divided by 2 for the next iteration
        n /= 2;
    }

    return binary;
}

int main() {
    int decimalNumber;

    displayProgramInfo();

    // Prompt the user to input an integer
    std::cout << "Enter an integer: ";
    std::cin >> decimalNumber;

    // Check if the input is valid
    if (std::cin.fail()) {
        std::cerr << "Invalid input. Please enter a valid integer." << std::endl;
        return 1;
    }

    // Convert the decimal number to binary
    std::string binaryNumber = decimalToBinary(decimalNumber);

    // Display the binary representation
    std::cout << "Binary representation of " << decimalNumber << " is: " << binaryNumber << std::endl;

    return 0;
}
