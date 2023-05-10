//
// Created by asaf7 on 5/9/2023.
//

#ifndef COWBOY_VS_NINJA_A_CHARACTER_HPP
#define COWBOY_VS_NINJA_A_CHARACTER_HPP

#include "Point.hpp"
#include <string>
#include <iostream>
#include <fstream>
#include <sstream>
#include <stdexcept>
#include <cassert>
using namespace std;

namespace ariel {

    class Character {
    public:
        Point location;
        int health_points;
        std::string name;
        bool alive;
        Character(const std::string &name, const Point &location, int health_points );


//    public:
        const Point &getLocation() const;
        bool isAlive() const;
        double distance(const Character &other) const;
        void hit(int damage);
        const std::string &getName() const;
        virtual string print() const = 0 ;
        virtual ~Character() = default;
    };

} // ariel

#endif //COWBOY_VS_NINJA_A_CHARACTER_HPP
