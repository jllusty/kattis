#include <iostream>

int main() {
    std::string leftNumber, rightNumber;
    std::cin >> leftNumber >> rightNumber;
    // three digit numbers
    // start with most significant digit, go to least significant digit
    bool leftIsGreater = false;
    for(int i = 2; i >= 0; --i) {
        int digitLeft = leftNumber[i] - '0';
        int digitRight = rightNumber[i] - '0';
        if(digitLeft < digitRight) break;
        if(digitLeft > digitRight) {
            leftIsGreater = true;
            break;
        }
    }
    if(leftIsGreater) {
        std::string reversedLeftNumber(leftNumber.rbegin(),leftNumber.rend());
        std::cout << reversedLeftNumber << std::endl;
    }
    else {
        std::string reversedRightNumber(rightNumber.rbegin(),rightNumber.rend());
        std::cout << reversedRightNumber << std::endl;
    }
}