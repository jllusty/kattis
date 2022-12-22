#include <iostream>

int main() {
    int numLifePeriods;
    std::cin >> numLifePeriods;
    float totalQuality;
    for(int i = 0; i < numLifePeriods; ++i) {
        float qualityOfLife, numYears;
        std::cin >> qualityOfLife >> numYears;
        totalQuality += qualityOfLife * numYears;
    }
    std::cout << totalQuality << std::endl;
}