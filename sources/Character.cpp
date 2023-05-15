//
// Created by asaf7 on 5/9/2023.
//

#include "Character.hpp"
#include <cmath>

namespace ariel {

    bool Character::isAlive() const {
        return alive;
    }


    const Point &Character::getLocation() const {
        return location;
    }

    double Character::distance(const Character &other) const {
        return 0;
    }

    void Character::hit(int damage) {



    }

    const std::string &Character::getName() const {
        return this->name;
    }

    Character::Character(const string &name, const Point &location, int health_points) {


    }

    int Character::getHealthPoints() const {
        return this->health_points;
    }

    void Character::setHealthPoints(int healthPoints) {
        this->health_points = healthPoints;

    }

    void Character::setLocation(const Point &location) {
        this->location = location;

    }

    void Character::setBelongToTeam(bool belongToTeam) {
        this->belong_to_team = belongToTeam;

    }

    bool Character::getBelongToTeam() const {
        return this->belong_to_team;
    }

    Character *Character::getNearestCharacter(const vector<Character *> &characters) const {
        Character *nearestCharacter = nullptr;


        return nearestCharacter;
    }

    void Character::setAlive(bool alive) {
        this->alive = alive;

    }


} // ariel