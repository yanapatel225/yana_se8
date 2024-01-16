#include <iostream>
#include <cmath>

class Circle {
private:
    double radius;

public:
    
    void setRadius(double r) {
        if (r >= 0) {
            radius = r;
        } else {
            std::cout << "Invalid radius. Setting radius to 0." << std::endl;
            radius = 0;
        }
    }

    double getRadius() const {
        return radius;
    }

    double calculateArea() const {
        return M_PI * pow(radius, 2);
    }

    double calculateCircumference() const {
        return 2 * M_PI * radius;
    }
};

int main() {

    Circle myCircle;

    myCircle.setRadius(5.0);

    std::cout << "Circle Information:" << std::endl;
    std::cout << "Radius: " << myCircle.getRadius() << std::endl;
    std::cout << "Area: " << myCircle.calculateArea() << std::endl;
    std::cout << "Circumference: " << myCircle.calculateCircumference() << std::endl;

    return 0;
}

