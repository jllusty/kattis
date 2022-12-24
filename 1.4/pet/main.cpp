#include <iostream>

int main() {
    int numContestants = 5;
    int highestScore = 0;
    int winningContestant = -1; // unassigned
    for(int i  = 1; i <= numContestants; ++i) {
        int r1, r2, r3, r4;
        std::cin >> r1 >> r2 >> r3 >> r4;
        int score = r1 + r2 + r3 + r4;
        if(highestScore < score) {
            highestScore = score;
            winningContestant = i;
        }
    }
    std::cout << winningContestant << " " << highestScore << std::endl;
}