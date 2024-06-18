#include <iostream>

const int MAX_SIZE = 10;

void input(int arr[], int& size) {
    std::cout << "Enter integers (0 to stop or max " << MAX_SIZE << "): ";
    int input;
    while (size < MAX_SIZE) {
        std::cin >> input;
        if (input == 0) break;
        arr[size++] = input;
    }
}

int findMax(const int arr[], int size) {
    int max = arr[0];
    for (int i = 1; i < size; ++i) {
        if (arr[i] > max) max = arr[i];
    }
    return max;
}

int findMin(const int arr[], int size) {
    int min = arr[0];
    for (int i = 1; i < size; ++i) {
        if (arr[i] < min) min = arr[i];
    }
    return min;
}

double findAvg(const int arr[], int size) {
    double sum = 0.0;
    for (int i = 0; i < size; ++i) sum += arr[i];
    return sum / size;
}

double findVar(const int arr[], int size, double avg) {
    double var = 0.0;
    for (int i = 0; i < size; ++i) var += (arr[i] - avg) * (arr[i] - avg);
    return var / size;
}

double findSqrt(double var) {
    double sqrt = var / 2.0;
    double temp = 0;
    while (sqrt != temp) {
        temp = sqrt;
        sqrt = (var / temp + temp) / 2.0;
    }
    return sqrt;
}

void output(int max, int min, double avg, double stdDev, double var) {
    std::cout << "Maximum: " << max << std::endl;
    std::cout << "Minimum: " << min << std::endl;
    std::cout << "Average: " << avg << std::endl;
    std::cout << "Variance: " << var << std::endl;
    std::cout << "Standard Deviation: " << stdDev << std::endl;
}

int main() {
    int arr[MAX_SIZE];
    int size = 0;

    std::cout << "Programming Exercise 05" << std::endl;
    std::cout << "Submitted by: Carl Raymund Suello" << std::endl;


    input(arr, size);

    int max = findMax(arr, size);
    int min = findMin(arr, size);
    double avg = findAvg(arr, size);
    double var = findVar(arr, size, avg);
    double stdDev = findSqrt(var);

    output(max, min, avg, stdDev, var);

    return 0;
}
