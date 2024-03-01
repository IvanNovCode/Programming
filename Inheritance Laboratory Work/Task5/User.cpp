//
// Created by Ivan on 01.03.2024.
//

#include "User.h"

User::User(std::string l, std::string p) : login(l), password(p) {}

void User::addProductToBasket(const Product& product) {
    basket.products.push_back(product);
}