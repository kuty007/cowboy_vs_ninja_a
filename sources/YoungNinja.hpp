//
// Created by asaf7 on 5/9/2023.
//

#ifndef COWBOY_VS_NINJA_A_YOUNGNINJA_HPP
#define COWBOY_VS_NINJA_A_YOUNGNINJA_HPP

#include "Ninja.hpp"

namespace ariel {

    class YoungNinja: public Ninja {
    public:
        YoungNinja(const string &name, const Point &location, int speed = 14, int health_points = 100);
    };

} // ariel

#endif //COWBOY_VS_NINJA_A_YOUNGNINJA_HPP
