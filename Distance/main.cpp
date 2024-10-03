#include <iostream>
#include <vector>
#include <cmath>
#include <limits>
#include <algorithm>
#include "dictance.h"
int main() {
    /// Координаты городов (x, y)
    setlocale(LC_ALL, "RU");
    std::vector<std::pair<double, double>> cities = {
        {0, 0},  // Город A
        {1, 3},  // Город B
        {4, 3},  // Город C
        {6, 1}   // Город D
    };

    travelingSalesman(cities); // Correct call
    return 0;
}