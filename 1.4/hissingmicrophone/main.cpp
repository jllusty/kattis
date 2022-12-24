#include <iostream>

int main() {
    std::string str;
    std::cin >> str;
    bool hissing = false;
    for(int i = 0; i < str.size() - 1; ++i) {
        if(str[i] == 's' && str[i+1] == 's') {
            hissing = true;
            break;
        }
    }
    if(hissing) {
        std::cout << "hiss" << std::endl;
    }
    else {
        std::cout << "no hiss" << std::endl;
    }
}