//
// Created by asaf7 on 5/9/2023.
//

#include "Character.hpp"

namespace ariel {

    bool Character::isAlive() const {
        return alive;
    }

    const Point &Character::getLocation() const {
        return location;
    }

    double Character::distance(const Character &other) const {
        return this->location.distance(other.location);
    }

    void Character::hit(int damage ) {
        this->health_points -= damage;
        if (this->health_points <= 0) {
            this->health_points = 0;
            this->alive = false;

        }
    }
    const std::string &Character::getName() const {
        return name;
    }

    Character::Character(const string &name, const Point &location, int health_points) {
        this->location = location;
        this->health_points = health_points;
        this->name = name;
        this->alive = true;

    }


//    Character::Character(const Point &location, int healthPoints, const std::string &name){
//        this->location = location;
//        this->health_points = healthPoints;
//        this->name = name;
//        this->alive = true;
//
//    }
} // ariel