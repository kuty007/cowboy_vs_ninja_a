//
// Created by asaf7 on 5/9/2023.
//

#include "Point.hpp"

namespace ariel {
    double Point::distance(const Point &other) const {
        return 0;
    }

    void Point::print() const {

    }

    Point::Point(double x, double y)  {
        this->x_value = x;
        this->y_value = y;
    }



    Point Point::moveTowards(const Point &other, double dist) const {
        return Point(0, 0);
    }

    Point::Point() {
        this->x_value = 0;
        this->y_value = 0;

    }
} // ariel