#include <iostream>

int main() {
    int a, b;
    std::cin >> a >> b;
    if(a > b) {
        int tmp = a;
        a = b;
        b = tmp;
    }
    std::cout << a << " " << b << std::endl;
}