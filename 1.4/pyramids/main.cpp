#include <iostream>

int main() {
    int numBlocks;
    std::cin >> numBlocks;
    int levels = 0;
    while(numBlocks > 0) {
        int blocksForNextLevel = (2 * levels + 1) * (2 * levels + 1);
        if(numBlocks >= blocksForNextLevel) ++levels;
        numBlocks -= blocksForNextLevel;
    }
    printf("%d\n", levels);
}