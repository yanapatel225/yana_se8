#include <iostream>
#include <string>

class Cricketer {
protected:
    std::string name;
    int age;

public:
    
    void inputData() {
        std::cout << "Enter name: ";
        std::cin >> name;
        std::cout << "Enter age: ";
        std::cin >> age;
    }

    void displayData() const {
        std::cout << "Name: " << name << std::endl;
        std::cout << "Age: " << age << std::endl;
    }
};

class Batsman : public Cricketer {
private:
    int totalRuns;
    double averageRuns;
    int bestPerformance;

public:
    // Member function to input data for Batsman
    void inputBatsmanData() {
        inputData(); // Reusing the base class function to input common data

        std::cout << "Enter total runs: ";
        std::cin >> totalRuns;
        std::cout << "Enter average runs: ";
        std::cin >> averageRuns;
        std::cout << "Enter best performance: ";
        std::cin >> bestPerformance;
    }

    void calculateAverageRuns() {
        
    }

    void displayBatsmanData() const {
        displayData(); 

        std::cout << "Total Runs: " << totalRuns << std::endl;
        std::cout << "Average Runs: " << averageRuns << std::endl;
        std::cout << "Best Performance: " << bestPerformance << std::endl;
    }
};

int main() {
    
    Batsman batsman;

    batsman.inputBatsmanData();
    batsman.displayBatsmanData();

    return 0;
}

