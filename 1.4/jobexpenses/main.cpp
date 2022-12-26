#include <iostream>

int main() {
    int n;
    std::cin >> n;
    long long totalExpenses = 0;
    for(int i = 0; i < n; ++i) {
        long long payment;
        std::cin >> payment;
        if(payment < 0) totalExpenses -= payment;
    }
    std::cout << totalExpenses << std::endl;
}