#include <iostream>

int main() {
    int widthCake, numPieces;
    std::cin >> widthCake >> numPieces;
    int areaCake = 0;
    for(int i = 0; i < numPieces; ++i) {
        int width, length;
        std::cin >> width >> length;
        areaCake += width * length;
    }
    int lengthCake = areaCake / widthCake;
    std::cout << lengthCake << std::endl;
}