//
// Created by asaf7 on 5/9/2023.
//

#ifndef COWBOY_VS_NINJA_A_TEAM_HPP
#define COWBOY_VS_NINJA_A_TEAM_HPP

#include <algorithm>
#include <vector>
#include "OldNinja.hpp"
#include "YoungNinja.hpp"
#include "TrainedNinja.hpp"
#include "Cowboy.hpp"

namespace ariel {

    class Team {
//    protected:
//
//        int capcity;
//        Character *leader;
//        std::vector<Character *> team;
    public:
        int capacity;
        Character *leader;
        std::vector<Character *> team;

        Character *getLeader() const;

        Team(Character *leader);

        virtual void add(Character *character);

        virtual void attack(Team *other);

        static bool compare(Character *a, Character *b);

        void print();

        static void sortVector(std::vector<Character *> &characters);

        int stillAlive();

        ~Team();
    };

} // ariel

#endif //COWBOY_VS_NINJA_A_TEAM_HPP
