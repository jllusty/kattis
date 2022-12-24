#include <iostream>

int main() {
    // number of points initially along one side
    int pointsPerSide = 2;

    // number of iterations
    int n;
    std::cin >> n;

    // number of sides along one side (plus one, points are fenceposts) squared
    // (2^k + 1)^2
    std::cout << ((1 << n) + 1) * ((1 << n) + 1) << std::endl;
}