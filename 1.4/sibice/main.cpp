#include <iostream>
#include <cmath>

int main() {
    int n, w, h;
    std::cin >> n >> w >> h;
    int maxLengthSquared = w * w + h * h;
    for(int i = 0; i < n; ++i) {
        int l;
        std::cin >> l;
        if(l*l <= maxLengthSquared) {
            std::cout << "DA" << std::endl;;
        }
        else {
            std::cout << "NE" << std::endl;;
        }
    }
}