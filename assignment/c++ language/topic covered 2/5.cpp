#include <iostream>
#include <string>

class Student {
protected:
    int rollNumber;

public:
    void inputStudentDetails() {
        std::cout << "Enter Roll Number: ";
        std::cin >> rollNumber;
    }

    void displayStudentDetails() {
        std::cout << "Roll Number: " << rollNumber << std::endl;
    }
};

class Test : public Student {
protected:
    float marksSubject1;
    float marksSubject2;

public:
    void inputTestDetails() {
        std::cout << "Enter Marks in Subject 1: ";
        std::cin >> marksSubject1;
        std::cout << "Enter Marks in Subject 2: ";
        std::cin >> marksSubject2;
    }

    void displayTestDetails() {
        std::cout << "Marks in Subject 1: " << marksSubject1 << std::endl;
        std::cout << "Marks in Subject 2: " << marksSubject2 << std::endl;
    }
};

class Result : public Test {
private:
    float totalMarks;

public:
    void calculateTotalMarks() {
        totalMarks = marksSubject1 + marksSubject2;
        std::cout << "Total Marks: " << totalMarks << std::endl;
    }

    void displayResult() {
        std::cout << "----- Student Result -----" << std::endl;
        displayStudentDetails();
        displayTestDetails();
        calculateTotalMarks();
        std::cout << "---------------------------" << std::endl;
    }
};

int main() {
    Result studentResult;

    studentResult.inputStudentDetails();
    studentResult.inputTestDetails();

    studentResult.displayResult();

    return 0;
}

