#pragma once
#include <iostream>
#include <vector>
#include <cmath>
#include <limits>
#include <algorithm>
using namespace std;
double calculateDistance(const std::pair<double, double>& city1, const std::pair<double, double>& city2);
double totalDistance(const std::vector<int>& route, const std::vector<std::pair<double, double>>& cities);
void travelingSalesman(const std::vector<std::pair<double, double>>& cities);


