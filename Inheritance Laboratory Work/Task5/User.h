//
// Created by Ivan on 01.03.2024.
//

#ifndef TASK5_USER_H
#define TASK5_USER_H


#include <string>
#include "Basket.h"
#include "Product.h"

class User {
public:
    std::string login;
    std::string password;
    Basket basket;

    User(std::string l, std::string p);
    void addProductToBasket(const Product& product);
};


#endif //TASK5_USER_H
