#include <iostream>
#include <string>

class Car {
private:
    std::string company;
    std::string model;
    int year;

public:
    void setCarDetails(const std::string& comp, const std::string& mdl, int yr) {
        company = comp;
        model = mdl;
        year = yr;
    }

    std::string getCompany() const {
        return company;
    }

    std::string getModel() const {
        return model;
    }

    int getYear() const {
        return year;
    }
};

int main() {
    Car myCar;

    myCar.setCarDetails("Toyota", "Camry", 2022);

    std::cout << "Car Information:" << std::endl;
    std::cout << "Company: " << myCar.getCompany() << std::endl;
    std::cout << "Model: " << myCar.getModel() << std::endl;
    std::cout << "Year: " << myCar.getYear() << std::endl;

    return 0;
}

