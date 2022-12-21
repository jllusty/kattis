#include <iostream>

int main(int argc, char * argv[]) {
    int n;
    std::cin >> n;
    int x = 0;
    int t;
    for(int i = 0; i < n; ++i) {
        std::cin >> t;
        int num = t / 10;
        int pow = t % 10;
        // a^0 = 1 for all integers a
        if(pow == 0) {
            ++x;
            continue;
        }
        int res = num;
        while(pow > 1) {
            res *= num;
            --pow;
        }

        x += res;
    }
    std::cout << x << std::endl;
}