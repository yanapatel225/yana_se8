#include <iostream>
#include <cstring>

class ConcatenatedString {
private:
    char* str;

public:
    // Constructor
    ConcatenatedString(const char* s1, const char* s2) {
        int len1 = std::strlen(s1);
        int len2 = std::strlen(s2);
        str = new char[len1 + len2 + 1];
        std::strcpy(str, s1);
        std::strcat(str, s2);
    }

    // Overloaded + operator for string concatenation
    ConcatenatedString operator+(const ConcatenatedString& other) const {
        ConcatenatedString result(str, other.str);
        return result;
    }

    // Display concatenated string
    void display() const {
        std::cout << "Concatenated String: " << str << std::endl;
    }

    // Destructor
    ~ConcatenatedString() {
        delete[] str;
    }
};

int main() {
    
    
    const char* str1 = "Hello, ";
    const char* str2 = "World!";

    
    ConcatenatedString concatenatedString = ConcatenatedString(str1, str2);
    

    concatenatedString.display();

    return 0;
}

