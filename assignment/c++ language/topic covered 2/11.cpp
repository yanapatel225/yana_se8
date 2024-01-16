#include <iostream>
#include <cmath>

const double PI = 3.14159265358979323846;

double calculateArea(double radius) {
    return PI * radius * radius;
}

double calculateArea(double length, double breadth) {
    return length * breadth;
}


double calculateArea(double base, double height, char shape = 't') {
    if (shape == 't') {
        return 0.5 * base * height;
    } else {
        std::cerr << "Invalid shape code. Use 't' for triangle." << std::endl;
        return 0.0;
    }
}

int main() {
    double radius, length, breadth, base, height;

    // Circle
    std::cout << "Enter the radius of the circle: ";
    std::cin >> radius;
    std::cout << "Area of the circle: " << calculateArea(radius) << std::endl;

    // Rectangle
    std::cout << "Enter the length and breadth of the rectangle: ";
    std::cin >> length >> breadth;
    std::cout << "Area of the rectangle: " << calculateArea(length, breath) << std::endl;

    // Triangle
    std::cout << "Enter the base and height of the triangle: ";
    std::cin >> base >> height;
    std::cout << "Area of the triangle: " << calculateArea(base, height, 't') << std::endl;

    return 0;
}

