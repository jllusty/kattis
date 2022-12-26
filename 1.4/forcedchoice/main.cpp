#include <iostream>

int main() {
    int numCards, prediction, numSteps;
    std::cin >> numCards >> prediction >> numSteps;
    for(int i = 0; i < numSteps; ++i) {
        int numCardsChosen;
        std::cin >> numCardsChosen;
        bool containsPrediction = false;
        for(int j = 0; j < numCardsChosen; ++j) {
            int card;
            std::cin >> card;
            if(card == prediction) {
                containsPrediction = true;
            }
        }
        if(containsPrediction) printf("KEEP\n");
        else printf("REMOVE\n");
    }
}