//
// Created by Ivan on 3/21/2024.
//
#include <iostream>

class Animal {
public:
    virtual void Sound() {
        std::cout << "The sound of an animal" << std::endl;
    }
};

class Bird : public Animal {
public:
    void Sound() override {
        std::cout << "A bird singing" << std::endl;
    }
};

class Cat : public Animal {
public:
    void Sound() override {
        std::cout << "Meow" << std::endl;
    }
};

int main() {
    Animal animal;
    animal.Sound();

    Bird bird;
    bird.Sound();

    Cat cat;
    cat.Sound();

    return 0;
}
