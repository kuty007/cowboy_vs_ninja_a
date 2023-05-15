//
// Created by asaf7 on 5/14/2023.
//

#include "SmartTeam.h"

namespace ariel {
    SmartTeam::SmartTeam(Character *leader) : Team(leader) {

    }

    void SmartTeam::attack(Team *other) {
        if (this->stillAlive() && other->stillAlive()) {
            if (!other->getLeader()->isAlive()) {
                other->leader = other->leader->getNearestCharacter(other->team);
            }
            if (other->getLeader() == nullptr) {
                cout << "Team is dead" << endl;
                return;
            }
            Character *target = nullptr;



            for (auto &i: this->team) {
                if (i->alive) {
                    if(i->is_cowboy)
                    if (!target->isAlive()) {
                        target = this->leader->getNearestCharacter(other->team);
                    }
                    i->attack(target);
                }
            }

        }

    }

    void SmartTeam::add(Character *character) {
        if (capacity < 10 && !character->belong_to_team) {
            this->team.push_back(character);
            this->capacity++;
            character->belong_to_team = true;
//            ariel::Team::sortVector(this->team);
        } else if (capacity == 10) {
            throw std::runtime_error("Team is full");
        } else {
            throw std::runtime_error("Character already belong to a team");
        }
    }
} // ariel