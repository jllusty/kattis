#include <iostream>

int main() {
    int numJudgesTotal, numJudgesRated;
    std::cin >> numJudgesTotal >> numJudgesRated;
    int sumRatings = 0;
    for(int i = 0; i < numJudgesRated; ++i) {
        int rating;
        std::cin >> rating;
        sumRatings += rating;
    }
    int minRatedSum = sumRatings, maxRatedSum = sumRatings;
    int numJudgesUnrated = numJudgesTotal - numJudgesRated;
    for(int i = 0; i < numJudgesUnrated; ++i) {
        minRatedSum += -3;
        maxRatedSum += 3;
    }
    float minRating = static_cast<float>(minRatedSum) / static_cast<float>(numJudgesTotal);
    float maxRating = static_cast<float>(maxRatedSum) / static_cast<float>(numJudgesTotal);
    std::cout << minRating << std::endl;
    std::cout << maxRating << std::endl;
}