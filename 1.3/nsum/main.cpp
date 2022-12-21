#include <iostream>

int main(int argc, char* argv[]) {
    int n;
    std::cin >> n;
    int res = 0;
    for(int i = 0; i < n; ++i) {
        int x;
        std::cin >> x;
        res += x;
    }
    std::cout << res << std::endl;
}