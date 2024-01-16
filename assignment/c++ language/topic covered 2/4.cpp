#include <iostream>
#include <string>

class Student {
protected:
    std::string name;
    int rollNumber;

public:
    void inputStudentDetails() {
        std::cout << "Enter Student Name: ";
        std::getline(std::cin, name);
        std::cout << "Enter Roll Number: ";
        std::cin >> rollNumber;
    }

    void displayStudentDetails() {
        std::cout << "Student Name: " << name << std::endl;
        std::cout << "Roll Number: " << rollNumber << std::endl;
    }
};


class Marks {
protected:
    float marksMath;
    float marksScience;

public:
    void inputMarksDetails() {
        std::cout << "Enter Marks in Math: ";
        std::cin >> marksMath;
        std::cout << "Enter Marks in Science: ";
        std::cin >> marksScience;
    }

    void displayMarksDetails() {
        std::cout << "Marks in Math: " << marksMath << std::endl;
        std::cout << "Marks in Science: " << marksScience << std::endl;
    }
};

class Result : public Student, public Marks {
public:
    void calculateResult() {
        float average = (marksMath + marksScience) / 2.0;
        std::cout << "Average Marks: " << average << std::endl;

        if (average >= 50.0) {
            std::cout << "Result: Passed" << std::endl;
        } else {
            std::cout << "Result: Failed" << std::endl;
        }
    }

    void displayResult() {
        std::cout << "----- Student Mark Sheet -----" << std::endl;
        displayStudentDetails();
        displayMarksDetails();
        calculateResult();
        std::cout << "-----------------------------" << std::endl;
    }
};

int main() {
    Result studentResult;

    studentResult.inputStudentDetails();
    studentResult.inputMarksDetails();

    studentResult.displayResult();

    return 0;
}

