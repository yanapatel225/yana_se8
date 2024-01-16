#include <iostream>
using namespace std;

class Calculator {
public:
    
    double add(double num1, double num2) {
        return num1 + num2;
    }

    double subtract(double num1, double num2) {
        return num1 - num2;
    }

    double multiply(double num1, double num2) {
        return num1 * num2;
    }

    double divide(double num1, double num2) {
        if (num2 != 0) {
            return num1 / num2;
        } else {
            cout << "Error: Cannot divide by zero!" << endl;
            return 0;
        }
    }
};

int main() {
    Calculator myCalculator; 

    double num1, num2;
    char operation;

    // Get user input
    cout << "Enter first number: ";
    cin >> num1;

    cout << "Enter operation (+, -, *, /): ";
    cin >> operation;

    cout << "Enter second number: ";
    cin >> num2;

    switch (operation) {
        case '+':
            cout << "Result: " << myCalculator.add(num1, num2) << endl;
            break;
        case '-':
            cout << "Result: " << myCalculator.subtract(num1, num2) << endl;
            break;
        case '*':
            cout << "Result: " << myCalculator.multiply(num1, num2) << endl;
            break;
        case '/':
            cout << "Result: " << myCalculator.divide(num1, num2) << endl;
            break;
        default:
            cout << "Invalid operation!" << endl;
    }

    return 0;
}

