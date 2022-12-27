#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int rankIndex(char rank) {
    const string ranks = "A23456789TJQK";
    return ranks.find(rank);
}

int main() {
    const int numCards = 5;
    vector<int> ranksInHand(13,0);
    for(int i = 0; i < numCards; ++i) {
        char rank, suite;
        cin >> rank >> suite;
        ++ranksInHand[rankIndex(rank)];
    }
    int maxRank = 0;
    for(int r : ranksInHand) maxRank = max(maxRank,r);
    printf("%d\n",maxRank);
}