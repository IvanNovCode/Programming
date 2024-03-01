//
// Created by Ivan on 01.03.2024.
//
#include <iostream>
#include "Category.h"
#include "User.h"

int main() {
    Product product1("Product1", 10.99, 4);
    Product product2("Product2", 5.99, 3);

    Category category1("Category1");
    category1.products.push_back(product1);
    category1.products.push_back(product2);

    Product product3("Product3", 8.99, 5);
    Product product4("Product4", 12.99, 4);

    Category category2("Category2");
    category2.products.push_back(product3);
    category2.products.push_back(product4);

    User user1("Ivan", "123");
    User user2("Vika", "321");

    user1.addProductToBasket(category1.products[0]);
//    user1.addProductToBasket(category2.products[0]);
//    user2.addProductToBasket(category1.products[1]);
    user2.addProductToBasket(category2.products[1]);

    // Display catalog
    std::cout << "Catalog:\n";

    std::cout << "Category: " << category1.name << "\n";
    for (Product p : category1.products) {
        std::cout << "Name: " << p.name << ", Price: " << p.price << ", Rating: " << p.rating << "\n";
    }

    std::cout << "\nCategory: " << category2.name << "\n";
    for (Product p : category2.products) {
        std::cout << "Name: " << p.name << ", Price: " << p.price << ", Rating: " << p.rating << "\n";
    }

    // Display purchases
    std::cout << "\nPurchases:\n";

    std::cout << "User: " << user1.login << "\n";
    for (Product p : user1.basket.products) {
        std::cout << "Name: " << p.name << ", Price: " << p.price << ", Rating: " << p.rating << "\n";
    }

    std::cout << "User: " << user2.login << "\n";
    for (Product p : user2.basket.products) {
        std::cout << "Name: " << p.name << ", Price: " << p.price << ", Rating: " << p.rating << "\n";
    }

    return 0;
}