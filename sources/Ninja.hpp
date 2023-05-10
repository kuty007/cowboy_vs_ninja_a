//
// Created by asaf7 on 5/9/2023.
//

#ifndef COWBOY_VS_NINJA_A_NINJA_HPP
#define COWBOY_VS_NINJA_A_NINJA_HPP

#include "Character.hpp"

namespace ariel {
    class Ninja : public Character {
    private:
        int speed;
    protected:
        int getSpeed() const;

    public:
        Ninja(const string &name, const Point &location);

        void move(const Character *other);

        void slash(Character *other);

        string print() const override;
    };


} // ariel

#endif //COWBOY_VS_NINJA_A_NINJA_HPP
