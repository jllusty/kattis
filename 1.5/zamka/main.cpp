#include <iostream>
#include <string>

int sumOfDigits(std::string digits) {
    int sum = 0;
    for(char c : digits) sum += (c - '0');
    return sum;
}

int main() {
    int l, d, x;
    std::cin >> l >> d >> x;
    // n = min_[l <= n <= d] s.t. sum digits in n = x
    int n = l;
    while(n <= d && sumOfDigits(std::to_string(n)) != x) ++n;
    // n = max[l <= n <= d] s.t. sum digits in n = x
    int m = d;
    while(m >= l && sumOfDigits(std::to_string(m)) != x) --m;
    printf("%d\n%d\n",n,m);
}