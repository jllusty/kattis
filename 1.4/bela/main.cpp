#include <iostream>

int scoreCard(char number, bool isDominant) {
    if(number == 'A') return 11;
    if(number == 'K') return 4;
    if(number == 'Q') return 3;
    if(number == 'J') return (isDominant) ? 20 : 2;
    if(number == 'T') return 10;
    if(number == '9') return (isDominant) ? 14 : 0;
    return 0;
}

int main() {
    int numHands;
    char dominantSuite;
    std::cin >> numHands >> dominantSuite;
    int totalScore = 0;
    for(int i = 0; i < 4 * numHands; ++i) {
        char number, suite;
        std::cin >> number >> suite;
        totalScore += scoreCard(number, suite == dominantSuite);
    }
    printf("%d\n",totalScore);
}