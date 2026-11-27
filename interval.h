#ifndef INTERVAL_H
#define INTERVAL_H
#include "utils.h"

class interval {
    public:
        double min, max;

        interval() : min(infinity), max(-infinity) {} // Empty by default
        interval(double min, double max) : min(min), max(max) {}

        double size() const {
            return max - min;
        }

        bool contains(double x) const {
            return min <= x && x <= max;
        }

        bool surrounds(double x) const {
            return min < x && x < max;
        }

        static const interval empty, universe;
};

const auto empty = interval(infinity, -infinity);
const auto universe = interval(-infinity, infinity);

#endif
