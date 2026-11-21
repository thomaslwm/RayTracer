#ifndef UTILS_H
#define UTILS_H

#include <iostream>
#include <limits>
#include <memory>

using std::make_shared;
using std::shared_ptr;

const double infinity = std::numeric_limits<double>::infinity();
const double pi = 3.14159265358979;

inline double degrees_to_radians(double degrees) {
    return degrees * pi/180;
}

#endif
