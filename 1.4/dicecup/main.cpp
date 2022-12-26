#include <iostream>
#include <vector>

int main() {
    int numSides1, numSides2;
    std::cin >> numSides1 >> numSides2;
    std::vector<int> sumFrequencies(numSides1 + numSides2 + 1, 0);
    for(int x = 1; x <= numSides1; ++x) {
        for(int y = 1; y <= numSides2; ++y) {
            ++sumFrequencies[x + y];
        }
    }
    int currentMaxFreq = 0;
    std::vector<int> rolls;
    for(int sum = 2; sum <= numSides1 + numSides2; ++sum) {
        int freq = sumFrequencies[sum];
        if(freq > currentMaxFreq) {
            rolls.clear();
            rolls.push_back(sum);
            currentMaxFreq = freq;
        }
        else if(freq == currentMaxFreq) {
            rolls.push_back(sum);
        }
    }
    for(int i : rolls) printf("%d\n", i);
}