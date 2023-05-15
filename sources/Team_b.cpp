//
// Created by asaf7 on 5/14/2023.
//

#include "Team_b.hpp"

namespace ariel {
    Team_b::Team_b(Character *leader) : Team(leader) {

    }

    void Team_b::add(Character *character) {
        if (capacity < 10 && !character->belong_to_team) {
            this->team.push_back(character);
            this->capacity++;
        } else if (capacity == 10) {
            throw std::invalid_argument("Team is full");
        } else {
            throw std::invalid_argument("Character already belong to a team");
        }
    }
} // ariel