//
// Created by Ivan on 01.03.2024.
//
#include "Animal.h"
#include "Dog.h"
#include "Cat.h"
#include "Bear.h"
#include "Veterinarian.h"

int main() {
    Dog* dog = new Dog("Sharick");
    Cat* cat = new Cat("Sonya");
    Bear* bear = new Bear("Teddy");

    Veterinarian vet;
    vet.treatAnimal(dog);
    vet.treatAnimal(cat);
    vet.treatAnimal(bear);

    delete dog;
    delete cat;
    delete bear;

    return 0;
}
