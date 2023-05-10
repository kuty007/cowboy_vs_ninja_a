//
// Created by asaf7 on 5/9/2023.
//

#ifndef COWBOY_VS_NINJA_A_POINT_HPP
#define COWBOY_VS_NINJA_A_POINT_HPP

namespace ariel {

    class Point {
    private:
        double x_value;
        double y_value;
    public:
         double distance(const Point& other) const;
         void print() const;
         Point(double x_v, double y_v);
         Point();
         Point moveTowards(const Point& other, double dist) const;

    };

} // ariel

#endif //COWBOY_VS_NINJA_A_POINT_HPP
