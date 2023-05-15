//
// Created by asaf7 on 5/14/2023.
//

#ifndef COWBOY_VS_NINJA_A_TEAM_B_HPP
#define COWBOY_VS_NINJA_A_TEAM_B_HPP

#include "Team.hpp"

namespace ariel {

    class Team_b : public Team {
    public:
        Team_b(Character *leader);
        void add(Character *character) override;

    };

} // ariel

#endif //COWBOY_VS_NINJA_A_TEAM_B_HPP
