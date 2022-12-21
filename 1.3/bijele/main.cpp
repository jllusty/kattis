#include <iostream>
#include <vector>

int main(int argc, char* argv[]) {
    std::vector<int> s = {1, 1, 2, 2, 2, 8};
    for(int i = 0; i < 6; ++i) {
        int x;
        std::cin >> x;
        s[i] -= x;
    }
    for(int i = 0; i < 5; ++i){
        std::cout << s[i] << " ";
    }
    std::cout << s[5] << std::endl;
}