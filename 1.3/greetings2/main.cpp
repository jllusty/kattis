#include <iostream>

int main(int argc, char* argv[]) {
    char c;
    while(std::cin >> c) {
        if(c == 'e') std::cout << c;
        std::cout << c;
    }
    std::cout << std::endl;
}