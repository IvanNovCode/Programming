//
// Created by Ivan on 3/21/2024.
//
#include <iostream>
#include <vector>

class AverageMethods {
public:
    double Average(std::vector<int> numbers) {
        double sum = 0;
        for (int number : numbers) {
            sum += number;
        }
        return sum / numbers.size();
    }

    double Average(std::vector<float> numbers) {
        double sum = 0;
        for (float number : numbers) {
            sum += number;
        }
        return sum / numbers.size();
    }
};

int main() {
    std::vector<int> intNumbers = {1, 2, 3, 4, 5};
    std::vector<float> floatNumbers = {1.1f, 2.2f, 3.3f, 4.4f, 5.5f};

    AverageMethods averageMethods;
    std::cout << "Arithmetic mean for int: " << averageMethods.Average(intNumbers) << std::endl;
    std::cout << "Arithmetic mean for float: " << averageMethods.Average(floatNumbers) << std::endl;

    return 0;
}
