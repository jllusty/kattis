#include <iostream>

bool isValidCPRNumber(std::string cpr) {
    const int VALS[10] = {4, 3, 2, 7, 6, 5, 4, 3, 2, 1};
    int dot = 0;
    for(int i = 0; i < cpr.length(); ++i) {
        dot += (cpr[i] - '0') * VALS[i];
    }
    return (dot % 11 == 0);
}

int main() {
    // remove hyphen
    std::string cpr;
    for(int i = 0; i < 11; ++i) {
        char c;
        std::cin >> c;
        if(c != '-') cpr.push_back(c);
    }
    if(isValidCPRNumber(cpr)) printf("1\n");
    else printf("0\n");
}