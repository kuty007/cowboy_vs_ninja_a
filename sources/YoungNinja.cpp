//
// Created by asaf7 on 5/9/2023.
//

#include "YoungNinja.hpp"

namespace ariel {

    YoungNinja::YoungNinja(const string &name, const Point &location, int speed, int health_points) : Ninja(
            <#initializer#>, <#initializer#>, 0, name, location) {
        this->health_points = health_points;
        this->speed = speed;
    }
} // ariel