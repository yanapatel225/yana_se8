#include <iostream>

class Matrix {
private:
    int size;
    int* data;

public:
    // Constructor
    Matrix(int n) : size(n), data(new int[n]) {}

    // Overloaded + operator for matrix addition
    Matrix operator+(const Matrix& other) const {
        Matrix result(size);
        for (int i = 0; i < size; ++i) {
            result.data[i] = data[i] + other.data[i];
        }
        return result;
    }

    // Display matrix elements
    void display() const {
        for (int i = 0; i < size; ++i) {
            std::cout << data[i] << " ";
        }
        std::cout << std::endl;
    }

    // Destructor
    ~Matrix() {
        delete[] data;
    }
};

int main() {
    // Input matrix sizes
    int size;
    std::cout << "Enter the size of the matrices: ";
    std::cin >> size;

    // Create two matrices
    Matrix matrix1(size);
    Matrix matrix2(size);

    // Input matrix elements
    std::cout << "Enter elements for matrix 1:" << std::endl;
    for (int i = 0; i < size; ++i) {
        std::cout << "Element " << i + 1 << ": ";
        std::cin >> matrix1.display()[i];
    }

    std::cout << "Enter elements for matrix 2:" << std::endl;
    for (int i = 0; i < size; ++i) {
        std::cout << "Element " << i + 1 << ": ";
        std::cin >> matrix2.display()[i];
    }


    Matrix result = matrix1 + matrix2;

    std::cout << "Matrix 1:" << std::endl;
    matrix1.display();

    std::cout << "Matrix 2:" << std::endl;
    matrix2.display();

    std::cout << "Result after addition:" << std::endl;
    result.display();

    return 0;
}


