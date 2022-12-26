#include <iostream>

int main() {
    bool sawAnA = false;
    char c;
    while(std::cin >> c) {
        if(sawAnA) {
            std::cout << c;
        }
        else {
            if(c == 'a') {
                sawAnA = true;
                std::cout << c;
            }
        }
    }
    std::cout << std::endl;
}