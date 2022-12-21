#include <iostream>
#include <string>

int main(int argc, char * argv[]) {
    int n;
    std::cin >> n;
    for(int i = 0; i < n; ++i) {
        std::string str;
        std::cin >> str;
        if(i % 2 == 0) {
            std::cout << str << std::endl;
        }
    }
}