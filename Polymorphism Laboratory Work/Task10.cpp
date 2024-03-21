//
// Created by Ivan on 3/21/2024.
//
#include <iostream>

class Sports {
public:
    virtual void play() = 0;
};

class Football : public Sports {
public:
    virtual void play() override {
        std::cout << "Playing Football" << std::endl;
    }
};

class Basketball : public Sports {
public:
    virtual void play() override {
        std::cout << "Playing Basketball" << std::endl;
    }
};

class Rugby : public Sports {
public:
    virtual void play() override {
        std::cout << "Playing Rugby" << std::endl;
    }
};

int main() {
    Football football;
    Basketball basketball;
    Rugby rugby;

    football.play();
    basketball.play();
    rugby.play();

    return 0;
}