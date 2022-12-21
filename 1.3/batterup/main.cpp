#include <iostream>

int main(int argc, char* argv[]) {
    int n;
    std::cin >> n;
    int num = 0, den = n;
    for(int i = 0; i < n; ++i) {
        int x;
        std::cin >> x;
        if(x == -1) --den;
        else num += x;
    }
    float result = static_cast<float>(num) / static_cast<float>(den);
    std::cout << result << std::endl;
}