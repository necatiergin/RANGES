#include <vector>
#include <algorithm>
#include <ranges>
#include <iostream>
#include <cmath>

struct Point {
    double x, y;
};

int main() 
{
    std::vector<Point> points = {
        {3, 4}, {1, 1}, {0, 0}, {5, 12}
    };

    // Projection: distance to origin
    std::ranges::sort(points, {}, [](const Point& p) {
        return std::sqrt(p.x * p.x + p.y * p.y);
        });

    for (const auto& [x, y] : points) {
        std::cout << "(" << x << ", " << y << ")\n";
    }
}
