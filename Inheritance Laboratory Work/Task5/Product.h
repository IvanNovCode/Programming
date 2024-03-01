//
// Created by Ivan on 01.03.2024.
//

#ifndef TASK5_PRODUCT_H
#define TASK5_PRODUCT_H


#include <string>

class Product {
public:
    std::string name;
    double price;
    int rating;

    Product(std::string n, double p, int r);
};


#endif //TASK5_PRODUCT_H
