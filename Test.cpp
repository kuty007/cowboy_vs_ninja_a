//
// Created by asaf7 on 5/10/2023.
//

#include "sources/Team.hpp"
#include "sources/Team_b.hpp"
#include "doctest.h"

using namespace std;
using namespace ariel;

TEST_CASE("Crate different character") {
    CHECK_NOTHROW(Cowboy("cowboy", Point(0, 0)));
    CHECK_NOTHROW(TrainedNinja("Trained ninja", Point(0, 0)));
    CHECK_NOTHROW(YoungNinja("Young ninja", Point(0, 0)));
    CHECK_NOTHROW(OldNinja("Old ninja", Point(0, 0)));
}

TEST_CASE("Check characters basic values") {
    Cowboy cowboy("cowboy", Point(0, 0));
    TrainedNinja trainedNinja("Trained ninja", Point(0, 0));
    YoungNinja youngNinja("Young ninja", Point(0, 0));
    OldNinja oldNinja("Old ninja", Point(0, 0));
    CHECK(cowboy.getHealthPoints() == 110);
    CHECK(cowboy.getAmmo() == 6);
    CHECK(trainedNinja.getHealthPoints() == 120);
    CHECK(trainedNinja.getSpeed() == 12);
    CHECK(youngNinja.getHealthPoints() == 100);
    CHECK(youngNinja.getSpeed() == 14);
    CHECK(oldNinja.getHealthPoints() == 150);
    CHECK(oldNinja.getSpeed() == 8);
}

TEST_CASE("shoot and slash") {
    Cowboy cowboy("cowboy", Point(0, 0));
    TrainedNinja trainedNinja("Trained ninja", Point(0, 0));
    YoungNinja youngNinja("Young ninja", Point(0, 0));
    OldNinja oldNinja("Old ninja", Point(30, 30));
    CHECK_NOTHROW(cowboy.shoot(&trainedNinja));
    CHECK(cowboy.getAmmo() == 5);
    CHECK(trainedNinja.getHealthPoints() == 110);
    CHECK_NOTHROW(trainedNinja.slash(&cowboy));
    CHECK_NOTHROW(youngNinja.slash(&cowboy));
    CHECK_NOTHROW(oldNinja.slash(&cowboy));
    CHECK_NOTHROW(cowboy.reload());
    CHECK(cowboy.getAmmo() == 6);
    CHECK(cowboy.getHealthPoints() == 84);
    //shoot till death
//    while (trainedNinja.getHealthPoints() > 0) {
//        CHECK_NOTHROW(cowboy.shoot(&trainedNinja));
//    }
    CHECK(trainedNinja.getHealthPoints() == 0);
    CHECK(!trainedNinja.isAlive());
    CHECK_FALSE(trainedNinja.isAlive());
    //check slash from distance bigger then 1
    CHECK(cowboy.getHealthPoints() == 84);//no change

}

TEST_CASE("distance and move") {
    Cowboy cowboy("cowboy", Point(3, 0));
    TrainedNinja trainedNinja("Trained ninja", Point(0, 4));
    CHECK_FALSE(cowboy.distance(trainedNinja) == 3);
    CHECK(cowboy.distance(trainedNinja) == 5);
    CHECK_NOTHROW(trainedNinja.move(&cowboy));
    CHECK(cowboy.distance(trainedNinja) == 0);

    //check with negative point
    Cowboy cowboy2("cowboy", Point(-3, 0));
    TrainedNinja trainedNinja2("Trained ninja", Point(0, -4));
    CHECK_FALSE(cowboy2.distance(trainedNinja2) == 3);
    CHECK(cowboy2.distance(trainedNinja2) == 5);
    CHECK_NOTHROW(trainedNinja2.move(&cowboy2));
    CHECK(cowboy2.distance(trainedNinja2) == 0);

}

TEST_CASE("team && team_b") {
    Point a(32.3, 44), b(1.3, 3.5);
    auto *tom = new Cowboy("Tom", a);
    auto *sushi = new OldNinja("sushi", b);
    Team team(tom);
    Team team_b(sushi);
    team.add(new YoungNinja("Yogi", Point(64, 57)));
    team_b.add(new OldNinja("Yodsai", Point(34, 37)));
    team.print();
    team_b.print();
    CHECK_NOTHROW(team.attack(&team_b));
    CHECK_NOTHROW(team_b.attack(&team));
    CHECK_NOTHROW(team.attack(&team_b));
    CHECK_NOTHROW(team.print());
    CHECK_NOTHROW(team_b.print());
}

TEST_CASE("try add more than 10 characters to single team") {
    Team team(new Cowboy("Tom", Point(32.3, 44)));
    CHECK_NOTHROW(team.add(new YoungNinja("Yogi", Point(64, 57))));
    CHECK_NOTHROW(team.add(new OldNinja("Yodsai", Point(34, 37))));
    CHECK_NOTHROW(team.add(new OldNinja("Yodsai", Point(34, 37))));
    CHECK_NOTHROW(team.add(new OldNinja("Yodsai", Point(34, 37))));
    CHECK_NOTHROW(team.add(new OldNinja("Yodsai", Point(34, 37))));
    CHECK_NOTHROW(team.add(new OldNinja("Yodsai", Point(34, 37))));
    CHECK_NOTHROW(team.add(new OldNinja("Yodsai", Point(34, 37))));
    CHECK_NOTHROW(team.add(new OldNinja("Yodsai", Point(34, 37))));
    CHECK_NOTHROW(team.add(new OldNinja("Yodsai", Point(34, 37))));
    CHECK_THROWS(team.add(new OldNinja("Yodsai", Point(34, 37))));
}

TEST_CASE("add character that belong to other team") {
    Team team(new Cowboy("Tom", Point(32.3, 44)));
    Team team_b(new OldNinja("modal", Point(34, 37)));
    Ninja *ninja = new OldNinja("asaf", Point(34, 37));
    CHECK_NOTHROW(team.add(ninja));
    CHECK_THROWS(team_b.add(ninja));

}

TEST_CASE("Team_b"){
    Team_b team_b(new OldNinja("modal", Point(34, 37)));
    CHECK_NOTHROW(team_b.add(new OldNinja("Yodsai", Point(34, 37))));

}