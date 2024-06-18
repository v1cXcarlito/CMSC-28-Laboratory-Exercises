#include <iostream>

void displayProgramInfo() {
    std::cout << "Largest of 3 numbers" << std::endl;
    std::cout << "Programmer: Carl Raymund Suello" << std::endl;
    std::cout << "Course Name: CMSC 28" << std::endl;
}

// Function to input values of x, y, and z
void inputValues(int& x, int& y, int& z) {
    std::cout << "Enter the value of x: ";
    std::cin >> x;
    std::cout << "Enter the value of y: ";
    std::cin >> y;
    std::cout << "Enter the value of z: ";
    std::cin >> z;
}

// Function to find the highest of three variables
int highestNum(int x, int y, int z) {
    return std::max(std::max(x, y), z);
}

// Function to find the lowest of three variables
int lowestNum(int x, int y, int z) {
    return std::min(std::min(x, y), z);
}

// Function to display values
void displayValues(int x, int y, int z, int highest, int lowest, int difference) {
    std::cout << "Values:" << std::endl;
    std::cout << "x: " << x << std::endl;
    std::cout << "y: " << y << std::endl;
    std::cout << "z: " << z << std::endl;
    std::cout << "Highest Value: " << highest << std::endl;
    std::cout << "Lowest Value: " << lowest << std::endl;
    std::cout << "Difference of highest and lowest is: " << highest - lowest << std::endl;
}

int main() {
    // Variable declaration
    int x, y, z;
    int highest, lowest, diff;

    //Display program information
    displayProgramInfo();

    // Input values of x, y, and z
    inputValues(x, y, z);

    // Find highest and lowest values
    highest = highestNum(x, y, z);
    lowest = lowestNum(x, y, z);

    // Get the difference between highest and lowest values
    diff = highest - lowest;

    // Display all values
    displayValues(x, y, z, highest, lowest, diff);

    return 0;
}
