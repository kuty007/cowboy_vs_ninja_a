//
// Created by asaf7 on 5/9/2023.
//

#include "Ninja.hpp"

namespace ariel {

    void Ninja::move(const Character *other) {
    }

    void Ninja::slash(Character *other) {

    }

    int Ninja::getSpeed() const {
        return speed;
    }

    string Ninja::print() const {
        return std::string();
    }

    Ninja::Ninja(const string &name, const Point &location) : Character(name, location, 100) {
        this->speed = 2;
    }
} // ariel