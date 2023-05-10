//
// Created by asaf7 on 5/9/2023.
//

#ifndef COWBOY_VS_NINJA_A_TEAM_HPP
#define COWBOY_VS_NINJA_A_TEAM_HPP

#include <vector>
#include "OldNinja.hpp"
#include "YoungNinja.hpp"
#include "TrainedNinja.hpp"
#include "Cowboy.hpp"


namespace ariel {

    class Team {
    protected:
        int Maxsize;
        int capcity;

        Character *leader;
        std::vector<Character *> team;
    public:
        Character *getLeader() const;

        Team(Character *leader);

        void add(Character *character);

        void attack(Team *other);

        void print();

        int stillAlive();
//        ~Team();
    };

} // ariel

#endif //COWBOY_VS_NINJA_A_TEAM_HPP
