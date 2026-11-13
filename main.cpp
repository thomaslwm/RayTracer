#include <iostream>

int main() {
    int height = 256;
    int width = 256;

    std::cout << "P3\n" <<  width << ' ' << height << "\n255\n";

    for (int i = 0; i < height; i++) {
        for (int j = 0; j < width; j++) {
            auto r = static_cast<double>(j) / (width - 1);
            auto g = static_cast<double>(i) / (height - 1);
            auto b = 0.0;

            int ir = static_cast<int>(r * 255);
            int ig = static_cast<int>(g * 255);
            int ib = static_cast<int>(b * 255);

            std::cout << ir << ' ' << ig << ' ' << ib << '\n';
        }
    }

    return 0;
}