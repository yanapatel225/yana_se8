#include <iostream>
inline int multiply(int a, int b) {
    return a * b;
}

inline int cubic(int x) {
    return x * x * x;
}

int main() {
    
    int num1, num2;
    std::cout << "Enter two numbers for multiplication: ";
    std::cin >> num1 >> num2;

    std::cout << "Multiplication of " << num1 << " and " << num2 << " is: " << multiply(num1, num2) << std::endl;

    int num3;
    std::cout << "Enter a number for cubic calculation: ";
    std::cin >> num3;
    std::cout << "Cubic value of " << num3 << " is: " << cubic(num3) << std::endl;

    return 0;
}

