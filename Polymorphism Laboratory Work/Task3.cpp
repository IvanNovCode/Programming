//
// Created by Ivan on 3/21/2024.
//
#include <iostream>

class MaxMethods {
public:
    int Max(int a, int b) {
        return (a > b) ? a : b;
    }

    int Max(int a, int b, int c) {
        return Max(Max(a, b), c);
    }

    int Max(int a, int b, int c, int d) {
        return Max(Max(a, b), Max(c, d));
    }
};

int main() {
    MaxMethods maxMethods;
    int a = 10, b = 20, c = 30, d = 40;
    std::cout << "Maximum of a и b: " << maxMethods.Max(a, b) << std::endl;
    std::cout << "Maximum of a, b и c: " << maxMethods.Max(a, b, c) << std::endl;
    std::cout << "Maximum of a, b, c и d: " << maxMethods.Max(a, b, c, d) << std::endl;

    return 0;
}
