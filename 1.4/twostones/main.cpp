#include <iostream>

int main(int argc, char* argv[]) {
    int n;
    std::cin >> n;
    if(n % 2 == 0) {
        std::cout << "Bob" << std::endl;
    }
    else {
        std::cout << "Alice" << std::endl;
    }
}