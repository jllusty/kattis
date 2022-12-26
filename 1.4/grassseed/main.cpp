#include <iostream>
#include <iomanip>

int main() {
    double costSeedPerSquareMeter;
    int numLawns;
    std::cin >> costSeedPerSquareMeter >> numLawns;
    double totalCostOfSeed = 0.f;
    double totalSquareMetersOfLawn = 0.f;
    for(int i = 0; i < numLawns; ++i) {
        double width, length;
        std::cin >> width >> length;
        totalSquareMetersOfLawn += width * length;
    }
    totalCostOfSeed = costSeedPerSquareMeter * totalSquareMetersOfLawn;
    std::cout << std::setprecision(10) << totalCostOfSeed << std::endl;
}