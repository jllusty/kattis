#include <iostream>

int getQuadrant(int x, int y) {
    if(x > 0 && y > 0) return 1;
    if(x < 0 && y > 0) return 2;
    if(x < 0 && y < 0) return 3;
    else return 4;
}

int main(int argc, char* argv[]) {
    int x, y;
    std::cin >> x >> y;
    std::cout << getQuadrant(x,y) << std::endl;
}