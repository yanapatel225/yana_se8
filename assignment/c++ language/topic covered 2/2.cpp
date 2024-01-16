#include <iostream>
class Shape {
protected:
    double width;
    double height;

public:
    Shape(double w, double h) : width(w), height(h) {}
    virtual double calculateArea() const = 0;
};


class Rectangle : public Shape {
public:
    Rectangle(double w, double h) : Shape(w, h) {}

    double calculateArea() const override {
        return width * height;
    }
};

int main() {

    double width, height;
    std::cout << "Enter the width of the rectangle: ";
    std::cin >> width;
    std::cout << "Enter the height of the rectangle: ";
    std::cin >> height;

    Rectangle rectangle(width, height);

    std::cout << "Area of the rectangle: " << rectangle.calculateArea() << std::endl;

    return 0;
}

