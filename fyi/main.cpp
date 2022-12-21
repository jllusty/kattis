#include <iostream>

int main(int argc, char* argv[]) {
    bool route = true;
    for(int i = 0; i < 3; ++i) {
        char c;
        std::cin >> c;
        route &= (c == '5');
    }
    std::cout << ((route) ? 1 : 0) << std::endl;
}