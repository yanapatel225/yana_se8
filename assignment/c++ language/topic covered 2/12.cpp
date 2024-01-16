#include <iostream>

class NumberSwapper;

class Number {
private:
    int value;

public:
    Number(int val) : value(val) {}

    // Friend function declaration for swapping numbers
    friend void swapNumbers(NumberSwapper&, Number&, Number&);
};

class NumberSwapper {
public:
    // Function to swap numbers without using a third variable
    static void swap(Number& num1, Number& num2) {
        num1.value = num1.value + num2.value;
        num2.value = num1.value - num2.value;
        num1.value = num1.value - num2.value;
    }
};

int main() {
    int num1, num2;

    // Input two numbers
    std::cout << "Enter the first number: ";
    std::cin >> num1;
    std::cout << "Enter the second number: ";
    std::cin >> num2;

    Number number1(num1);
    Number number2(num2);


    std::cout << "Original Numbers: " << number1.value << " " << number2.value << std::endl;

   
    swapNumbers(NumberSwapper(), number1, number2);

   
    std::cout << "Swapped Numbers: " << number1.value << " " << number2.value << std::endl;

    return 0;
}

