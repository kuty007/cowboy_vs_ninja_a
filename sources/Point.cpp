//
// Created by asaf7 on 5/9/2023.
//
#include <cmath>
#include <iostream>
#include "Point.hpp"

namespace ariel {
    double Point::distance(const Point &other) const {
        return 0;
    }

    string Point::print() const {
        return "(" + to_string(this->x_value) + "," + to_string(this->y_value) + ")";
    }

    Point::Point(double x, double y) {

    }

    Point Point::moveTowards(const Point &other, double dist) const {
        return other;
    }

    Point::Point() {

    }
} // ariel