//
// Created by Ivan on 3/21/2024.
//
#include <iostream>

class Rational {
private:
    int numerator;
    int denominator;

public:
    Rational(int num = 0, int den = 1) : numerator(num), denominator(den) {}

    Rational operator+(const Rational& other) {
        int newNum = numerator * other.denominator + other.numerator * denominator;
        int newDen = denominator * other.denominator;
        return Rational(newNum, newDen);
    }

    Rational operator*(const Rational& other) {
        int newNum = numerator * other.numerator;
        int newDen = denominator * other.denominator;
        return Rational(newNum, newDen);
    }

    friend std::ostream& operator<<(std::ostream& os, const Rational& rational) {
        os << rational.numerator << "/" << rational.denominator;
        return os;
    }
};

int main() {
    Rational r1(1, 2);
    Rational r2(1, 3);

    Rational sum = r1 + r2;
    Rational product = r1 * r2;

    std::cout << "Sum: " << sum << std::endl;
    std::cout << "Product: " << product << std::endl;

    return 0;
}