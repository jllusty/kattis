#include <iostream>

int main() {
    int numTestCases;
    std::cin >> numTestCases;
    for(int i = 0; i < numTestCases; ++i) {
        std::string first, second;
        std::cin >> first >> second;
        std::cout << first << std::endl;
        std::cout << second << std::endl;
        for(int j = 0; j < first.length(); ++j) {
            if(first[j] == second[j]) printf(".");
            else printf("*");
        }
        printf("\n\n");
    }
}