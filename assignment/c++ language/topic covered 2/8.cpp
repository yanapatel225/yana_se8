#include <iostream>

// Function to perform addition
int add(int a, int b) {
    return a + b;
}

float add(float a, float b) {
    return a + b;
}

// Function to perform subtraction
int subtract(int a, int b) {
    return a - b;
}

float subtract(float a, float b) {
    return a - b;
}

// Function to perform multiplication
int multiply(int a, int b) {
    return a * b;
}

float multiply(float a, float b) {
    return a * b;
}

// Function to perform division
float divide(float a, float b) {
    if (b != 0) {
        return a / b;
    } else {
        std::cerr << "Error: Division by zero is undefined." << std::endl;
        return 0.0;
    }
}

int main() {
    int intNum1, intNum2;
    float floatNum1, floatNum2;

    // Input for integer numbers
    std::cout << "Enter two integer numbers:" << std::endl;
    std::cin >> intNum1 >> intNum2;

    // Input for floating-point numbers
    std::cout << "Enter two floating-point numbers:" << std::endl;
    std::cin >> floatNum1 >> floatNum2;

    // Perform mathematical operations with integers
    std::cout << "Integer Addition: " << add(intNum1, intNum2) << std::endl;
    std::cout << "Integer Subtraction: " << subtract(intNum1, intNum2) << std::endl;
    std::cout << "Integer Multiplication: " << multiply(intNum1, intNum2) << std::endl;

    // Perform mathematical operations with floating-point numbers
    std::cout << "Float Addition: " << add(floatNum1, floatNum2) << std::endl;
    std::cout << "Float Subtraction: " << subtract(floatNum1, floatNum2) << std::endl;
    std::cout << "Float Multiplication: " << multiply(floatNum1, floatNum2) << std::endl;

    // Perform division with floating-point numbers
    std::cout << "Float Division: " << divide(floatNum1, floatNum2) << std::endl;

    return 0;
}

