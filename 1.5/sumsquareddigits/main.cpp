#include <iostream>

using namespace std;

unsigned int ssd(int base, unsigned int number) {
    // n = a_0 + a_1 * b^1 + a_2 * b^2 + a_3 * b^3 + ...

    // how to get those nums?
    // n % b = a_0 % b + (a_1 * b) % b + ...
    // n % b = a_0 % b
    // since a_0 < b, a_0 % b = a_0 (?)
    unsigned int result = 0;
    
    while(number > 0) {
        unsigned int a = number % base;
        number -= a;
        result += a * a;
        number /= base;
    }
    return result;
}

int main() {
    int numSets;
    cin >> numSets;
    for(int set = 0; set < numSets; ++set) {
        int setId, setBase;
        unsigned int setNumber;
        cin >> setId >> setBase >> setNumber;
        printf("%d %d\n", setId, ssd(setBase, setNumber));
    }
}