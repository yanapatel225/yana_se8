#include <iostream>
#include <string>

class Marks {
public:
    int marks;

    Marks(int m) : marks(m) {}
};

class Student {
private:
    std::string name;
    std::string className;
    int rollNumber;
    Marks marks;

public:
    Student(const std::string& n, const std::string& cn, int rn, const Marks& m)
        : name(n), className(cn), rollNumber(rn), marks(m) {}

    char calculateGrade() const {
        if (marks.marks >= 90) {
            return 'A';
        } else if (marks.marks >= 80) {
            return 'B';
        } else if (marks.marks >= 70) {
            return 'C';
        } else if (marks.marks >= 60) {
            return 'D';
        } else {
            return 'F';
        }
    }

    void displayInfo() const {
        std::cout << "Name: " << name << std::endl;
        std::cout << "Class: " << className << std::endl;
        std::cout << "Roll Number: " << rollNumber << std::endl;
        std::cout << "Marks: " << marks.marks << std::endl;
        std::cout << "Grade: " << calculateGrade() << std::endl;
    }
};

int main() {
    Marks studentMarks(85);

    Student student("John Doe", "Class 10", 123, studentMarks);

    student.displayInfo();

    return 0;
}

