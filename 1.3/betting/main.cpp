#include <iostream>

int main(int argc, char * argv[]) {
    int p;
    std::cin >> p;
    float sprA = 100.f / static_cast<float>(p);
    float sprB = 100.f / static_cast<float>(100 - p);
    std::cout << sprA << std::endl;
    std::cout << sprB << std::endl;
}