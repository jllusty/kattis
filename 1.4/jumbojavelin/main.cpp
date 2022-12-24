#include <iostream>

int main() {
    int n;
    std::cin >> n; 
    int lengthOfFusedRod;
    std::cin >> lengthOfFusedRod;
    for(int i = 1; i < n; ++i) {
        int lengthOfRod;
        std::cin >> lengthOfRod;
        lengthOfFusedRod += lengthOfRod;
        // fusion of two reduces reduces their fused length by 1 cm
        lengthOfFusedRod -= 1;
    }
    std::cout << lengthOfFusedRod << std::endl;
}