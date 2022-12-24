#include <iostream>

int main() {
    int n;
    std::cin >> n;
    for(int i = 0; i < n; ++i) {
        int x;
        std::cin >> x;
        if(x % 2 == 0) {
            printf("%d is even\n", x);
        }
        else {
            printf("%d is odd\n", x);
        }
    }
}