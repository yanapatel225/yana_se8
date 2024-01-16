#include <iostream>

class MaxFinder;

class Number {
private:
    int value;

public:
    Number(int val) : value(val) {}

    // Friend function declaration for finding the maximum
    friend int findMax(const Number&, const Number&, const MaxFinder&);
};

class MaxFinder {
public:
    // Function to find the maximum of two numbers
    static int max(const Number& num1, const Number& num2) {
        return (num1.value > num2.value) ? num1.value : num2.value;
    }
};

// Friend function definition
int findMax(const Number& num1, const Number& num2, const MaxFinder& maxFinder) {
    return MaxFinder::max(num1, num2);
}

int main() {
    int num1, num2;

    // Input two numbers
    std::cout << "Enter the first number: ";
    std::cin >> num1;
    std::cout << "Enter the second number: ";
    std::cin >> num2;

    // Create Number objects
    Number number1(num1);
    Number number2(num2);

    // Display original numbers
    std::cout << "Numbers: " << number1.value << " " << number2.value << std::endl;

    // Find and display the maximum using friend function
    int maxNumber = findMax(number1, number2, MaxFinder());
    std::cout << "Maximum Number: " << maxNumber << std::endl;

    return 0;
}

