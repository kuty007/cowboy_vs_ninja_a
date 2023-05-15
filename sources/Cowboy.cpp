//
// Created by asaf7 on 5/9/2023.
//

#include "Cowboy.hpp"

using namespace std;

namespace ariel {


    void Cowboy::reload() {


    }

    Cowboy::Cowboy(const std::string &name, const Point &location) : Character(name, location, 110) {

    }

    void Cowboy::shoot(Character *enemy) {

    }

    string Cowboy::print() const {

        return "";

    }

    int Cowboy::getAmmo() const {
        return this->ammo;
    }

    void Cowboy::attack(Character *other) {
        shoot(other);

    }

}
// ariel