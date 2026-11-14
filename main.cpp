#include <iostream>

#include "vec3.h"
#include "color.h"

int main() {
    int height = 256;
    int width = 256;

    std::cout << "P3\n" <<  width << ' ' << height << "\n255\n";

    for (int i = 0; i < height; i++) {
        for (int j = 0; j < width; j++) {
            auto r = static_cast<double>(j) / (width - 1);
            auto g = static_cast<double>(i) / (height - 1);
            auto b = 0.0;

            auto pixel_color = color(r, g, b);

            write_color(std::cout, pixel_color);
        }
    }

    return 0;
}