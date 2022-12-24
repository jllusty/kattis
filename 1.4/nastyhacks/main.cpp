#include <iostream>

int main() {
    int n;
    std::cin >> n;
    for(int i = 0; i < n; ++i) {
        int r, e, c;
        std::cin >> r >> e >> c;
        if(r < e - c) {
            printf("advertise\n");
        }
        else if(r == e - c) {
            printf("does not matter\n");
        }
        // r > e - c
        else {
            printf("do not advertise\n");
        }
    }
}