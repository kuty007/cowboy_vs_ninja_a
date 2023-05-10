//
// Created by asaf7 on 5/9/2023.
//

#include "Team.hpp"

namespace ariel {
    Character *Team::getLeader() const {
        return nullptr;
    }

    void Team::add(Character *character) {

    }

    void Team::attack(Team *other) {

    }

    void Team::print() {

    }

    int Team::stillAlive() {
        return 0;
    }
    Team::Team(Character *leader) {
        this->leader = leader;
    }

//    Team::~Team() {
//
//    }
} // ariel