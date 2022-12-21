#include <iostream>

int main(int argc, char* argv[]) {
    char c;
    while(std::cin >> c) {
        if('Z' >= c && c >= 'A') std::cout << c;
    }
    std::cout << std::endl;
}