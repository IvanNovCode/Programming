//
// Created by Ivan on 3/21/2024.
//
#include <iostream>

class Vector {
private:
    double* data;
    int size;
public:
    Vector(int size) : size(size) {
        data = new double[size];
    }
    ~Vector() {
        delete[] data;
    }
    double& operator[](int index) {
        return data[index];
    }
    double operator*(Vector& other) {
        double result = 0;
        for (int i = 0; i < size; i++) {
            result += data[i] * other[i];
        }
        return result;
    }
};

int main() {
    Vector v1(3);
    v1[0] = 1; v1[1] = 2; v1[2] = 3;

    Vector v2(3);
    v2[0] = 4; v2[1] = 5; v2[2] = 6;

    std::cout << "Scalar product of two vectors: " << v1 * v2 << std::endl;

    return 0;
}