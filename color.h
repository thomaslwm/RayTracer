#ifndef COLOR_H
#define COLOR_H

#include <iostream>

#include "vec3.h"

using color = vec3;

inline std::ostream& operator<<(std::ostream& out, const color& c) {
    auto r = c.x();
    auto g = c.y();
    auto b = c.z();

    int rbyte = static_cast<int>(r * 255);
    int gbyte = static_cast<int>(g * 255);
    int bbyte = static_cast<int>(b * 255);

    return out << rbyte << ' ' << gbyte << ' ' << bbyte;
}

#endif
