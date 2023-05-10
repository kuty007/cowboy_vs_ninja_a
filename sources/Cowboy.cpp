//
// Created by asaf7 on 5/9/2023.
//

#include "Cowboy.hpp"
using namespace std;

namespace ariel {


    void Cowboy::reload() {

    }

//    void Cowboy::shoot(Character &other) {
//
//    }

    Cowboy::Cowboy(const std::string &name, const Point &location): Character(name,location,110) {

        this->alive = true;
        this->ammo = 6;

    }

    void Cowboy::shoot(Character *enemy) {


    }

    string Cowboy::print() const {
        return std::string();
    }



}
 // ariel