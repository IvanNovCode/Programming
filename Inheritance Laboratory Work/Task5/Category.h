//
// Created by Ivan on 01.03.2024.
//

#ifndef TASK5_CATEGORY_H
#define TASK5_CATEGORY_H


#include <vector>
#include "Product.h"

class Category {
public:
    std::string name;
    std::vector<Product> products;

    Category(std::string n);
};


#endif //TASK5_CATEGORY_H
