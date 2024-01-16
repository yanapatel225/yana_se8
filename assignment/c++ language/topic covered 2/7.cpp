#include <iostream>

class Base {
public:
    
    
    Base() {
        std::cout << "Base class constructor called." << std::endl;
    }

    
    
    Base(int value) {
        std::cout << "Base class parameterized constructor called with value: " << value << std::endl;
    }
};



class Derived1 : public Base {
public:
    
    
    Derived1() {
        std::cout << "Derived1 class constructor called." << std::endl;
    }

    
    
    Derived1(int value) : Base(value) {
        std::cout << "Derived1 class parameterized constructor called with value: " << value << std::endl;
    }
};



class Derived2 : public Derived1 {
public:
    
    Derived2() {
        std::cout << "Derived2 class constructor called." << std::endl;
    }

    
    Derived2(int value) : Derived1(value) {
        std::cout << "Derived2 class parameterized constructor called with value: " << value << std::endl;
    }
};

int main() {
    std::cout << "Creating an object of Base class:" << std::endl;
    Base baseObject; 
    

    std::cout << "\nCreating an object of Derived1 class:" << std::endl;
    Derived1 derived1Object; 
    

    std::cout << "\nCreating an object of Derived2 class:" << std::endl;
    Derived2 derived2Object; 
    

    std::cout << "\nCreating an object of Derived2 class with a parameter:" << std::endl;
    Derived2 derived2ObjectWithParam(42); 
    
    return 0;
}

