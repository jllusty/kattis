#include <iostream>

int candles(int days) {
    int result = 0;
    for(int i = 1; i <= days; ++i) {
        result += (1 + i);
    }
    return result;
}

int main(int argc, char * argv[]) {
    int p;
    std::cin >> p;
    for(int i = 1; i <= p; ++i) {
        int k, n;
        std::cin >> k >> n;
        std::cout << k << ' ' << candles(n) << std::endl; 
    }
}