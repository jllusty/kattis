#include <iostream>

int main() {
    int grossCombinedVehicleWeightRating, weightTruck, numItems;
    std::cin >> grossCombinedVehicleWeightRating >> weightTruck >> numItems;
    int totalWeightItems = 0;
    for(int i = 0; i < numItems; ++i) {
        int weightItem;
        std::cin >> weightItem;
        totalWeightItems += weightItem;
    }
    int weightTrailer = ((grossCombinedVehicleWeightRating - weightTruck) * 90) / 100 - totalWeightItems;
    std::cout << weightTrailer << std::endl;
}