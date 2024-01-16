#include<iostream>
#include <string>

class Employee {
private:
    std::string name;
    int employeeID;
    double salary;

public:
    Employee(const std::string& empName, int empID) : name(empName), employeeID(empID), salary(0.0) {}


    void calculateAndSetSalary(double performanceScore) {
        if (performanceScore >= 0 && performanceScore <= 100) {
        
            salary = 50000.0 + (performanceScore / 100.0) * 20000.0;
        } else {
            std::cout << "Invalid performance score. Please enter a score between 0 and 100." << std::endl;
        }
    }
    std::string getName() const {
        return name;
    }

    int getEmployeeID() const {
        return employeeID;
    }

    double getSalary() const {
        return salary;
    }
};

int main() {
    Employee emp1("John Doe", 123456);

    std::cout << "Employee Information:" << std::endl;
    std::cout << "Name: " << emp1.getName() << std::endl;
    std::cout << "Employee ID: " << emp1.getEmployeeID() << std::endl;
    std::cout << "Salary: $" << emp1.getSalary() << std::endl;

    emp1.calculateAndSetSalary(75.0);

    std::cout << "Updated Employee Information:" << std::endl;
    std::cout << "Name: " << emp1.getName() << std::endl;
    std::cout << "Employee ID: " << emp1.getEmployeeID() << std::endl;
    std::cout << "Updated Salary: $" << emp1.getSalary() << std::endl;

    return 0;
}

