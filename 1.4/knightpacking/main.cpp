#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n;
    std::cin >> n;

    // number of posible positions
    int numPositions = n * n;

    // number of covered positions (ceil(n*n/2))
    int numCoveredPositions = numPositions - numPositions / 2;

    if(numCoveredPositions % 2 == 0) {
        std::cout << "second" << std::endl;
    }
    else {
        std::cout << "first" << std::endl;
    }
}