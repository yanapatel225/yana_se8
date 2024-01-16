#include<iostream>
#include<string>

using namespace std;

class Person {
protected:
    string name;
    int age;

public:
    void initializePerson(string n, int a) {
        name = n;
        age = a;
    }

    void readPersonData() {
        cout << "Enter name: ";
        cin >> name;
        cout << "Enter age: ";
        cin >> age;
    }

    void writePersonData() {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
    }
};

class Student : public Person {
protected:
    float percentage;

public:
    void initializeStudent(float p) {
        percentage = p;
    }

    void readStudentData() {
        readPersonData(); 
        cout << "Enter percentage: ";
        cin >> percentage;
    }

    void writeStudentData() {
        writePersonData(); 
        cout << "Percentage: " << percentage << "%" << endl;
    }
};

class Teacher : public Person {
protected:
    float salary;

public:
    void initializeTeacher(float s) {
        salary = s;
    }

    void readTeacherData() {
        readPersonData(); 
        cout << "Enter salary: ";
        cin >> salary;
    }

    void writeTeacherData() {
        writePersonData(); 
        cout << "Salary: $" << salary << endl;
    }
};

class MainFunction : public Student, public Teacher {
public:
    void initializeData(string n, int a, float p, float s) {
        initializeStudent(p);
        initializeTeacher(s);
    }

    void readAllData() {
        readStudentData();
        readTeacherData();
    }

    void writeAllData() {
        writeStudentData();
        writeTeacherData();
    }
};

int main() {
    MainFunction obj;
    obj.readAllData();
    cout << "\nDisplaying Data:\n";
    obj.writeAllData();

    return 0;
}

