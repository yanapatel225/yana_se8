#include <iostream>

class Base {
private:
    int privateMember;

protected:
    int protectedMember;

public:
    int publicMember;


    Base() : privateMember(10), protectedMember(20), publicMember(30) {}


    void display() {
        std::cout << "Private Member (in Base): " << privateMember << std::endl;
        std::cout << "Protected Member (in Base): " << protectedMember << std::endl;
        std::cout << "Public Member (in Base): " << publicMember << std::endl;
    }
};

class Derived : public Base {
public:
    
    void displayDerived() {
        std::cout << "Protected Member (in Derived): " << protectedMember << std::endl;
        std::cout << "Public Member (in Derived): " << publicMember << std::endl;

    }
};

int main() {
    Derived derivedObject;

    std::cout << "Public Member (in main): " << derivedObject.publicMember << std::endl;

    derivedObject.display();        
    derivedObject.displayDerived(); 

    return 0;
}

