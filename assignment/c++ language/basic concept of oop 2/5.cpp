#include <iostream>

class Rectangle {
private:
    double length;
    double width;

public:
    
    void setDimensions(double len, double wid) {
        if (len >= 0 && wid >= 0) {
            length = len;
            width = wid;
        } else {
            std::cout << "Invalid dimensions. Setting length and width to 0." << std::endl;
            length = 0;
            width = 0;
        }
    }

    double getLength() const {
        return length;
    }

    double getWidth() const {
        return width;
    }

    double calculateArea() const {
        return length * width;
    }

    double calculatePerimeter() const {
        return 2 * (length + width);
    }
};

int main() {
    Rectangle myRectangle;

    myRectangle.setDimensions(4.0, 6.0);

    std::cout << "Rectangle Information:" << std::endl;
    std::cout << "Length: " << myRectangle.getLength() << std::endl;
    std::cout << "Width: " << myRectangle.getWidth() << std::endl;
    std::cout << "Area: " << myRectangle.calculateArea() << std::endl;
    std::cout << "Perimeter: " << myRectangle.calculatePerimeter() << std::endl;

    return 0;
}


