#include <iostream>

int main() {
    int numTestCases;
    std::cin >> numTestCases;
    for(int i = 0; i < numTestCases; ++i) {
        int numPowerStrips;
        std::cin >> numPowerStrips;
        int totalNumPlugs = 0;
        for(int j = 0; j < numPowerStrips; ++j) {
            int numPlugs;
            std::cin >> numPlugs;
            // use one plug on the current power strip
            // for the next power strip
            totalNumPlugs += numPlugs - 1;
        }
        // did not use a plug on the last power strip
        ++totalNumPlugs;
        printf("%d\n", totalNumPlugs);
    }
}