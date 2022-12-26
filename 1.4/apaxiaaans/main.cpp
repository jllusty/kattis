#include <iostream>

int main() {
    std::string name;
    std::cin >> name;
    int n = name.length();
    std::string shorted;
    shorted.push_back(name[0]);
    for(int i = 1; i < n; ++i) {
        if(shorted.back() != name[i]) shorted.push_back(name[i]);
    }
    std::cout << shorted << std::endl;
}